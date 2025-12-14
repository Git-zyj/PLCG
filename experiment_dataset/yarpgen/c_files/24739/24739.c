/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((var_3 - var_3) % (max(var_7, -5359501668491886395)))) < var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_8;
                arr_5 [i_0] [i_0] [i_0] = (min(4882277164594145516, 6431394809732765967));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(var_9, ((var_3 ? 6431394809732765967 : (arr_6 [i_0] [i_0] [i_0] [i_1 + 1])))));
                            arr_13 [i_0] [i_1] [1] [i_3] = (min(var_9, ((22083 ^ (arr_3 [i_1 - 1] [i_1] [i_1 - 1])))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = ((((((~7303000675747838892) | (var_0 | var_2)))) ? (max(var_0, -7303000675747838869)) : (((min(var_10, var_0))))));

                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_13 = (max(var_13, ((((max(13564466909115406128, 7502)) ^ ((((((6431394809732765967 ? 7721660228749373026 : 25082))) ? ((var_6 << (((arr_16 [i_0] [2] [i_0]) - 91845902780261696)))) : (arr_7 [i_0] [i_0] [i_0] [i_1 + 1])))))))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_14 = (max(((var_9 - ((var_0 ? 4294967286 : (arr_17 [i_4] [i_4] [i_4]))))), ((max(var_5, 28041)))));
                        var_15 = (min(var_15, ((min((arr_16 [i_0] [i_0] [i_5]), ((~(~var_11))))))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_24 [i_0] [i_0] [i_4] [i_4] [4] = ((-(min(var_11, var_4))));
                            var_16 = (min(var_16, (((max(8747893177760911814, 1))))));
                            arr_25 [i_0] [i_1] [i_4] [i_4] [i_6] [i_1] [i_6] = (13564466909115406100 || var_3);
                            var_17 = ((((max(4294967281, (arr_3 [i_1] [i_1 - 2] [16])))) ? (min((min((arr_15 [i_0] [i_0] [i_0]), 32799)), ((((arr_22 [i_4] [i_4] [i_4] [i_1 - 2] [i_4]) >= (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))) : var_8));
                        }
                        for (int i_7 = 4; i_7 < 17;i_7 += 1)
                        {
                            arr_30 [i_4] = (((var_9 != (-9223372036854775807 - 1))));
                            var_18 = (max(var_18, ((min((4294967286 | 1), (((arr_2 [i_4 + 2] [i_1 + 1]) & var_4)))))));
                            var_19 = ((((max(49987, 586909982))) ? var_7 : (var_3 | var_5)));
                        }
                    }
                    for (int i_8 = 3; i_8 < 16;i_8 += 1)
                    {
                        arr_33 [i_4] [i_4] [i_4] [i_8] = (max((((arr_22 [i_4] [i_1] [i_4] [i_4 - 1] [i_4]) - (arr_22 [i_4] [i_4] [i_4] [i_4] [i_4]))), 2964325697));
                        var_20 = (min(var_20, (((((min(var_11, (var_10 >= var_11)))) && (((var_0 ? 586909982 : var_7))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
