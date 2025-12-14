/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, (61 <= 0)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] = (((var_19 ? 0 : ((14119 ? (arr_0 [i_0]) : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 += (((((-4030982423243155029 - 14) ^ 8413421418624836115)) > 4030982423243155026));
                                var_22 -= (arr_0 [i_0 - 3]);
                            }
                        }
                    }
                    var_23 = (min(var_23, (((-4030982423243155029 | (((min(76, var_3)))))))));
                }
            }
        }
        arr_17 [i_0] = (((~((2930407750 ? 20933 : 52179)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_24 = (arr_18 [i_0] [i_5]);
            var_25 = 5470;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            var_26 = (5 | 60073);
            var_27 = (arr_12 [i_7 + 1]);
        }
        var_28 &= -var_16;
    }
    var_29 -= (var_4 / 1221634113);
    #pragma endscop
}
