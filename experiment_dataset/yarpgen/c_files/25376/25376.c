/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((3 ? 688134546 : var_0))) ? (14989 & var_2) : ((-32 ? 1101171435 : 18294248198960103082))))) ? var_7 : ((18294248198960103086 ? (9208954949873418727 || -1101171436) : 14984)));
    var_13 = (max(var_13, var_10));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 *= (240 != -784218849);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_13 [i_0] [9] [8] [i_3] [19] = ((1101171435 ? var_1 : 144115187002114048));
                            arr_14 [i_0] [i_1] = 3765377903183700583;
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] = var_7;
                            arr_18 [i_2] [i_2] [i_1] [i_2] [i_0 - 1] [i_2] &= ((-8851 ? ((var_2 ? 12 : var_1)) : ((var_6 ? 1992624773 : -14991))));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_15 = ((-2778 ? 6 : 961043652552979694));
                            var_16 = ((6 ? (3544379034 / var_8) : -75));
                        }
                        var_17 = 30821;
                        var_18 = ((18446744073709551608 ? var_9 : 1610612736));
                        var_19 = (((((-16384 ? 1610612736 : 14997))) ? var_0 : (310280665 && 0)));
                        arr_21 [i_0] [i_0] = var_0;
                    }
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0 - 2] [6] [i_0] = (((min(0, 26142))));
                        var_20 = (((10 ^ 34715) ? (min(4294967295, 34732)) : (((max(var_8, -7))))));
                        var_21 = (min((883177021 <= var_9), var_3));
                    }
                    var_22 = 2302342545;
                }
            }
        }
    }
    var_23 = (((max(var_7, ((var_2 ? var_8 : 207))))) / (max(var_4, var_11)));
    #pragma endscop
}
