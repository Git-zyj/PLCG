/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 ? (((!2305842459457880064) << (((~-19123) - 19095)))) : (((!(var_2 && var_15))))));
    var_21 = ((-16 ? ((((var_9 && var_12) >> (-var_6 - 213562800)))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_22 = var_14;
                    var_23 = ((((~(arr_8 [i_1] [i_1]))) >> ((((((var_8 ? 16140901614251671524 : (arr_0 [16]))))) - 216))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_24 = (((var_0 && 11629) != 13737086892454264428));
                    var_25 ^= (((((arr_11 [i_0]) ? var_8 : var_0)) >> (((arr_4 [i_3]) - 26699))));
                    arr_12 [i_0] [i_1] [i_3] [i_0] = (((var_3 / 3080802724063082927) * (((var_18 / var_12) / (arr_3 [i_0] [i_1])))));
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_4] [i_4] [i_0] [i_4 - 1] = ((~(~var_5)));
                                var_26 = 5742;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_27 = 16140901614251671514;
                                arr_31 [i_0] [i_0] [i_1] [i_7] [i_7] [i_0] [i_7] = 1;
                            }
                        }
                    }
                }
                arr_32 [i_0] [i_1] [4] &= ((var_14 ? (((arr_4 [i_0]) ? var_13 : 5)) : (!var_0)));
                var_28 = (139 - var_3);
            }
        }
    }
    #pragma endscop
}
