/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 96;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_14 &= (-14 <= 90);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((!(~176)));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [12] = ((27 >> (((arr_5 [i_1 + 2] [i_2 - 1]) + 756585952528269204))));
                                var_15 *= ((3624427120 != (arr_4 [i_0])));
                            }
                        }
                    }
                    var_16 += ((210 <= (arr_5 [i_1 + 2] [i_1 + 1])));
                    arr_16 [i_0] [i_1 + 1] [i_2] [i_0] = (arr_13 [0] [0]);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_17 = (arr_2 [i_1 + 2]);

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_18 = (((arr_2 [i_5]) <= 12777993544145110895));
                        var_19 = 43548;
                        var_20 = (arr_17 [i_0] [i_1] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_21 = (((arr_19 [3] [i_1 + 1] [i_5] [i_5]) ? 4 : (arr_19 [i_0] [i_1 + 2] [i_7] [i_7])));
                        var_22 = 3662367193;
                        var_23 -= (arr_11 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]);
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                    {
                        var_24 = ((((~(arr_3 [i_1 + 2]))) != (((((arr_1 [i_1] [i_0]) != (((arr_6 [i_8] [i_8] [i_8] [4]) >> (((arr_17 [0] [i_1] [0]) + 1046476531540969336))))))))));
                        var_25 = -6188915127257838886;
                        arr_27 [i_8] [i_5] [14] [4] = (max(180, (max(-1345022335, 177))));
                        var_26 = 128;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_27 = (max(var_27, 12777993544145110883));
                        var_28 = (min(var_28, (arr_21 [i_9] [i_5] [i_1] [i_0] [i_0])));
                        arr_30 [i_0] = 184;
                        var_29 ^= ((-((~(arr_7 [10] [i_1] [i_5])))));
                    }
                }
                var_30 = (max(var_30, (arr_9 [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_31 = (((var_3 ? (var_1 != 23) : (max(2171638307, var_0)))));
    var_32 = 12;
    var_33 = -var_8;
    #pragma endscop
}
