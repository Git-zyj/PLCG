/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_19 = (((arr_7 [i_0 - 1] [i_1] [i_1] [i_2]) - (arr_7 [i_0 - 3] [i_0 - 3] [i_2] [i_0 + 1])));
                    var_20 |= ((-(220 - 1)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_1] = (arr_5 [i_2] [i_1] [15]);
                        var_21 = (max(var_21, 704933528));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_22 = (min(var_22, (arr_1 [i_4])));
                        arr_13 [5] [i_1] = ((1 ? (arr_5 [i_0 + 1] [i_1] [i_0 + 1]) : 4602678819172646912));
                        var_23 = 35184372056064;
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (min(var_24, (arr_8 [i_0] [i_0 + 1] [14] [i_1 + 1])));
                    var_25 += 18446708889337495552;
                }
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    var_26 = ((((arr_9 [i_1] [i_1 + 1] [i_0 + 1] [i_1]) ? (arr_9 [i_0 - 3] [i_0 - 3] [13] [i_1]) : (arr_16 [i_1]))));
                    var_27 = (max((~34), ((-(arr_17 [i_1 + 1] [i_1 + 1] [17] [i_0 - 2])))));
                }
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_0] [17] [i_1] = max(1, 7575299899609248776);
                                var_28 = (arr_27 [i_0] [i_0 - 3] [i_1 + 2] [i_7 + 4] [3] [i_9 - 2]);
                            }
                        }
                    }
                    arr_29 [15] [i_1] [1] = (18446708889337495546 % 1);
                    var_29 = (min(var_29, ((max((max(18446708889337495542, 8384512)), (((6600713689852794533 ? var_6 : (arr_25 [0])))))))));
                }
            }
        }
    }
    var_30 = 35184372056041;
    var_31 = var_3;
    var_32 = (max(var_32, 5406304554445498984));
    #pragma endscop
}
