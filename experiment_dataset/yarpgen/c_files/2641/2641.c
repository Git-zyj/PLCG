/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = ((max(12, ((var_2 ? (arr_2 [i_1] [i_1]) : var_4)))));
                var_13 += 12;
            }
        }
    }

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_14 = (max(var_14, (arr_4 [i_2 - 1])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                {
                    var_15 = ((134217727 ? 66846720 : 12));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_16 ^= (((arr_6 [i_4] [18]) / (max((((arr_8 [i_4]) * -1)), (2251799813684736 - -1)))));
                        var_17 = var_9;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_4] [i_3] = (max((((((var_5 ? var_1 : (arr_6 [i_2] [i_2])))) || var_6)), (((var_4 ^ var_3) >= (var_7 | var_4)))));
                        arr_18 [i_3] = -16252928;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_18 = var_8;
                            var_19 = (((min(66846720, -4)) != var_0));
                            var_20 = (min((108 || var_4), ((var_10 ? -9223372036854775800 : 203))));
                        }
                        arr_25 [i_2] [i_3] [i_3] [i_7] = ((((max(var_0, 9223372036854775807))) / (((arr_7 [i_2 + 2] [i_4 + 3]) / var_0))));
                        arr_26 [14] [i_7] [14] [i_3] = (((min((-9223372036854775807 - 1), 6714657525089111874)) % ((((max(var_9, 2147483647))) ? ((var_5 ? 1152921504606846976 : var_6)) : (max(111, -1046950707663366437))))));
                        arr_27 [i_3] [i_3] [i_3] [i_3] = (max(((-66846721 ? -2 : -5338110355914553794)), var_10));
                    }
                }
            }
        }
        arr_28 [i_2] = (((~var_5) == 8647319764851001269));
    }
    #pragma endscop
}
