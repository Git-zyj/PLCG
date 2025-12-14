/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((3 ? 5633704230921335342 : 12063952319084947496));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_1] = var_6;
            arr_6 [i_1] = -83;
            var_21 = (((!25781643833148852) ? var_18 : var_12));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_22 = ((611711526 ? (18446744073709551615 ^ 5633704230921335342) : 576460752303423487));
                            var_23 ^= 210;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_24 &= ((((1 ? 15711864163700561436 : 217)) + 56882));
            var_25 = ((-16779 ? ((-83 ? 18446744073709551615 : -1)) : (var_7 & 16997)));
        }
        arr_20 [12] = var_1;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_26 = max(((max(95, 65535))), 266531075938483061);
                var_27 = ((33 << (2734879910008990168 - 2734879910008990164)));
                var_28 *= (min(92, -3185464427869411256));
            }
        }
    }

    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                {
                    var_29 = (max(((-6382791754624604119 ? ((var_17 ? 65587369644542520 : 6382791754624604119)) : ((max(-116, var_5))))), (6382791754624604091 <= -9181)));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        arr_39 [i_10] [10] [i_10] [i_11] [i_11] [i_9 - 3] &= (((~40) ? ((1904382204 ? 1 : 10772)) : (var_13 != 0)));
                        var_30 = (var_10 - 18180212997771068581);
                    }
                }
            }
        }
        var_31 *= (max((min((var_19 ^ var_5), (((var_11 ? 1904382188 : -1477253237))))), ((min(var_5, var_1)))));
        var_32 = (max(((-60 ? (!371260335352855221) : (!18446744073709551595))), (((var_17 || (!1616530014))))));
    }
    var_33 += var_5;
    #pragma endscop
}
