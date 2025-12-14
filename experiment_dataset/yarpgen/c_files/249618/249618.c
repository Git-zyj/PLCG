/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_2] = (max(-1865311553, var_9));
                    var_16 -= (9630196264549528773 < -19297);
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_17 = (min(var_17, 8816547809160022842));
            var_18 = (max(var_18, ((((arr_5 [8] [8]) / ((60 & ((7168 - (arr_2 [6]))))))))));
            arr_11 [i_0] [i_3] = ((~(max((((arr_10 [i_0] [i_0 - 1] [i_0]) << (9630196264549528773 - 9630196264549528759))), (arr_3 [i_0])))));
            var_19 = (max(var_19, ((((min((max(10482713291469628866, 154888696)), ((min(-75, 213))))) <= ((((arr_7 [i_0] [1] [i_0 - 1] [i_0 - 1]) - -178))))))));
        }
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, (((~(max(var_4, var_0)))))));
                        arr_20 [i_6 + 1] [i_0] [i_6 + 1] [i_6 - 1] = ((-(((min(-9, 3783))))));
                    }
                }
            }
        }
        arr_21 [i_0] = (max(24921, (-2147483647 - 1)));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (max((max((arr_22 [i_7]), ((max(220, 6))))), (max(-7178, (arr_6 [i_7] [i_7] [i_7])))));
        arr_26 [i_7] = ((((min((max((arr_0 [i_7]), (arr_5 [i_7] [i_7]))), 33))) / ((min((arr_0 [i_7]), 9)))));
        var_21 = min(((max((arr_10 [i_7] [i_7] [i_7]), var_7))), ((~(var_12 - var_11))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        var_22 *= (arr_6 [i_8] [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_37 [i_9] [i_9] [i_9] [i_12] [i_9] [i_9] = 11;
                                arr_38 [i_9] [i_9] = (((min((((arr_30 [i_11]) - 16479721674603643494)), var_13)) <= (-2064984660 - 8816547809160022842)));
                                var_23 -= ((((((arr_0 [i_11]) / (arr_17 [i_11] [i_11] [i_9] [i_11])))) / ((max(var_3, (arr_30 [i_11]))))));
                                arr_39 [i_9] [i_9] [i_9] [i_9] [i_12] = (max(((1 * (var_1 / var_9))), (arr_17 [i_9] [i_9] [i_10 - 3] [i_9])));
                            }
                        }
                    }
                    arr_40 [i_8] [i_8] [i_9] [i_10 + 1] = (arr_7 [i_8] [i_9] [i_8] [i_9]);
                    arr_41 [i_8] [i_8] [i_9] [i_9] = (-1987352774 != var_8);
                }
            }
        }
    }
    var_24 = (((min(var_13, (var_10 * 8816547809160022845))) * (((max((min(52429, var_11)), var_11))))));
    #pragma endscop
}
