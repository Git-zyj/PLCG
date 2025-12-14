/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (((arr_3 [i_0] [i_0]) || ((min(((~(arr_5 [i_0] [i_0] [i_0]))), ((((arr_0 [i_2] [i_1]) != -59))))))));
                    arr_7 [i_0] [i_0] [i_0] = (((var_4 ? (arr_5 [i_0 + 1] [i_0] [i_0 + 1]) : var_5)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((((arr_8 [i_4] [i_0 - 1] [i_2]) / (arr_8 [i_1] [i_2] [i_2]))) * (max((arr_8 [i_1] [i_2] [i_4]), (arr_8 [i_0] [i_0] [i_0]))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = (((max(var_7, (59 / 549751619584))) << (((min(274877906943, (arr_11 [i_0] [i_0] [i_0 - 1] [i_0 - 1]))) - 274877906904))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_0] = ((min((arr_5 [i_0 + 1] [i_0] [i_0]), (arr_5 [i_0 + 1] [i_0] [i_0 + 1]))));
                                var_20 = (((((-59 ? 549751619574 : 274877906955)) == 549751619589)));
                                arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] &= ((((min((arr_8 [i_0] [i_2] [i_3]), (arr_8 [i_4] [i_3] [i_2])))) | (((((max(var_14, -77)))) - (((arr_0 [i_4] [i_3]) ? (arr_15 [i_4] [i_0]) : 3398401650))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_0] [i_6] = (arr_23 [i_0] [i_5] [i_2] [i_0] [i_0]);
                                var_21 = ((((((549751619589 ? 420672657 : 549751619592)) ? (min(var_1, 3261009806891248047)) : ((417464632 ? (arr_2 [i_6] [i_5] [i_1]) : (arr_11 [i_0] [i_1] [i_2] [i_5])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
