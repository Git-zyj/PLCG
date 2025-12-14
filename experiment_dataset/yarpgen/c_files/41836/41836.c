/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((!0) ? (((((max(var_5, 14109224794766072894))) || (!var_5)))) : (((var_0 && (10963292171412065408 && var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, (((var_5 ? (!-4337519278943478733) : (min(var_5, ((1 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))))))));
                    var_13 = (max(var_13, (arr_1 [4] [4])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_14 += 4337519278943478742;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = (((arr_1 [i_0] [i_3]) << 1));
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4] = 1;
                            var_15 *= 124;
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_16 [i_0 - 2] [i_1] [i_2] = ((((!(arr_7 [i_0] [i_1] [i_0]))) ? var_8 : ((((-(arr_5 [i_1] [i_1] [i_1]))) * ((11577018472349088999 / (arr_7 [i_5] [i_1] [i_0])))))));
                            var_16 = (arr_3 [i_0] [i_2] [i_3]);
                            arr_17 [1] [i_1] [i_1] [i_3] [i_1] = 10963292171412065409;
                            var_17 = (min(var_17, var_1));
                            arr_18 [i_1] = (((((4853173165354372778 ? (((arr_0 [i_5]) + 25)) : (arr_0 [i_3])))) + (min((arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_5]), var_6))));
                        }
                    }
                    var_18 = (max((((-(arr_4 [i_0])))), (((arr_14 [i_1] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_1]) ? (arr_11 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : var_5))));
                }
            }
        }
    }
    var_19 += (~var_7);
    #pragma endscop
}
