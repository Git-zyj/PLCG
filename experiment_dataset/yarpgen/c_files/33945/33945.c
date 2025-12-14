/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_12 = (!((max((arr_4 [i_0 - 1] [i_2]), (arr_2 [i_2])))));
                    var_13 = (min(var_13, ((max(792526967, (((var_4 ? 243 : ((var_8 % (arr_1 [i_1] [i_2])))))))))));
                    var_14 = (min(var_14, (arr_0 [2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (min((~var_3), (((!(arr_8 [i_1 - 3] [i_1] [i_1 - 2] [i_3]))))));
                                var_16 = (min(var_16, -7));
                            }
                        }
                    }
                    var_17 = 12;
                }
                var_18 = ((~(min(-32742, (arr_4 [i_0] [i_1 + 2])))));
                var_19 *= (!var_3);
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_20 = ((((arr_16 [i_6] [i_5 + 1] [i_1 + 2] [i_0 - 1]) ? var_3 : (arr_16 [i_5 + 1] [i_5 - 1] [i_1 + 2] [i_0 - 1]))));
                                var_21 = max((max((arr_21 [i_6] [i_5 - 1] [i_5] [i_0 - 1] [1]), (243 && var_0))), (((!(arr_8 [i_5 + 1] [i_1 - 3] [i_5] [i_1 - 3])))));
                                var_22 = (((((((max(var_2, 12))) % ((max(10, 13)))))) ? 26 : (((!(arr_18 [i_0 - 1] [i_1] [i_1] [i_6] [i_7]))))));
                            }
                        }
                    }
                }
                var_23 = (max((arr_11 [i_0] [i_1 + 1] [i_0] [i_0] [i_0]), (min(var_4, 1965772049))));
            }
        }
    }
    var_24 = var_6;
    #pragma endscop
}
