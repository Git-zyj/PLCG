/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = 7343;
        arr_2 [i_0] = 288195191779622912;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 ^= 1872128750;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            arr_15 [i_5 - 1] [i_4] [i_2] [i_1] [i_1] &= 0;
                            var_18 -= 15;
                            var_19 = (min(var_19, 613616085944310932));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, -1918989926));
                            arr_18 [i_2] [i_1] [i_1] [i_1] |= 288195191779622912;
                            var_21 |= 613616085944310932;
                        }
                        var_22 = -1918989935;
                        arr_19 [0] [i_2] [i_3] [0] = -1918989930;

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_22 [i_1] [14] [i_3] [i_4] [i_7] [15] = 232;
                            var_23 &= (-9223372036854775807 - 1);
                            var_24 -= 448;
                            var_25 += 1;
                            arr_23 [i_7] [i_3] [i_3] [i_1] [i_1] = 2648980111839497888;
                        }
                        var_26 = 2035;
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, 5374040364809705677));
                        arr_27 [1] [i_8] [i_3] [i_1] [i_2] [i_1] = -15;
                        arr_28 [i_2] [i_2] [11] [11] = 16108040712584750655;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        var_28 &= -1918989937;
                        var_29 = 1;
                        var_30 -= -1428578632574361374;
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_40 [i_1] [i_1] [i_1] [6] [i_1] [i_1] = -29;
                                arr_41 [i_1] [i_2] [i_3] [i_3] [i_10] [2] = -12;
                                var_31 = 6697391493733596575;
                                var_32 = -4382929410700766566;
                                var_33 = 1603664519;
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        arr_45 [i_12] [4] [i_12] [i_12] [i_2] [4] = 0;

                        for (int i_13 = 0; i_13 < 16;i_13 += 1)
                        {
                            var_34 = 496170498340573120;
                            var_35 = 2266899555;
                            var_36 -= 36132;
                        }
                        arr_48 [8] [i_12] [i_2] [8] [i_3] [i_12] = 32762;
                    }
                    var_37 = 0;
                }
            }
        }
        var_38 = 65531;
        var_39 |= 4294183487;
    }
    #pragma endscop
}
