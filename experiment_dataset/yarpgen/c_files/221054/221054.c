/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (min(1444014005, -1444014006));
    var_17 &= ((max(var_4, ((var_13 ? -1444014001 : var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((((arr_6 [i_0] [i_1] [i_2 + 1]) ? -1444014005 : ((-127 ? 120 : (arr_3 [i_2 - 2]))))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_19 += ((var_14 << (((arr_9 [i_2 + 1] [i_2] [11] [i_2] [i_2 - 1]) - 5588))));
                        arr_10 [i_1] [i_1] [i_2] [i_3] [i_3] [i_3] = ((((((arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 1]) ^ var_4))) ? (arr_4 [i_3]) : (((((var_5 ? -1339555058 : 2147483647))) ? (((var_3 ^ (arr_9 [i_0] [21] [21] [i_0] [i_3])))) : (min((arr_2 [3] [14]), var_5))))));
                        var_20 = ((((min((arr_7 [i_2 - 1] [i_2] [i_1] [i_2 + 2]), 2147483647))) ? (((arr_6 [i_2 - 1] [i_1] [i_1]) ? (arr_6 [i_2 + 2] [i_1] [i_2]) : (arr_1 [i_2 + 1]))) : (arr_8 [i_0] [5])));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_21 = (max(var_21, (((~(max(((max((arr_0 [i_1] [i_1]), 85))), ((var_2 ? var_1 : (arr_5 [i_0]))))))))));
                        var_22 = (!((max(-1058844341, (~-5304102136865703070)))));

                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            arr_16 [i_1] [i_1] [i_1] = 2147483647;
                            arr_17 [i_1] [i_1] [i_4] = ((max((arr_7 [i_2 - 1] [1] [i_1] [10]), 255)));
                        }
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_23 = 2147483647;
                            var_24 = (max(var_24, ((((-122 ? 1 : 127))))));
                            arr_21 [i_1] [i_0] [i_1] [i_4] [i_6] [i_1] [i_0] = ((((min(126, ((var_5 ? var_5 : (arr_0 [i_0] [12])))))) ? ((((arr_15 [i_2 - 2] [i_6 + 3] [i_2]) ? (arr_15 [i_2 - 2] [i_6 + 3] [i_2]) : var_10))) : var_11));
                            var_25 = (((!12729685721806692598) ? (((max((arr_1 [i_2 + 2]), 1)))) : (((((var_12 ? 2017859599 : var_9))) ? var_1 : -1444014003))));
                            var_26 = (max(var_26, ((((arr_13 [i_6 + 1] [i_2 + 1] [i_4] [i_2 - 1] [i_6]) ? (max(((((arr_2 [i_2] [i_2]) > -603433546))), ((var_14 ? var_14 : (arr_2 [i_0] [i_0]))))) : (((127 ? var_5 : (arr_0 [i_2] [i_2])))))))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_27 = (min(var_27, ((min(((max(-101, (var_6 < 2147483647)))), (min((((var_11 ? var_13 : var_12))), 4777775283884292398)))))));
                            var_28 = (max((var_10 != var_0), (((((var_0 ? var_7 : 0))) ? (min(31, var_15)) : (arr_18 [i_2 - 1] [i_2 - 2] [i_2] [i_2 + 2] [i_2 - 2])))));
                            var_29 = (min(var_10, ((-71 ? 127 : (max(2132386168427473849, 93))))));
                            var_30 = (min(var_30, (min(1891215098, ((var_6 ? -var_9 : (min(10458249181430572984, 15075279625947297074))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
