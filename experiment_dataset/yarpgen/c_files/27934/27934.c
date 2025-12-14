/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {

                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        var_21 -= ((((((arr_10 [i_0] [i_1] [7] [i_3] [i_0] [i_0] [i_4]) ? (arr_13 [i_0 + 2] [i_1] [i_1]) : (arr_6 [i_3 + 1])))) ? 1 : (((arr_8 [0] [i_1]) << (arr_8 [8] [i_1])))));
                        var_22 ^= (((((arr_7 [i_1] [i_2] [i_3]) ? (arr_10 [i_4] [i_4] [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_1] [i_1 + 1] [i_0]))) - (((arr_6 [i_4]) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_1]) : 16154))));
                        arr_14 [i_3] [2] [i_2] [i_3] [i_4] = (((arr_11 [i_4] [i_4] [i_4] [i_4 - 3] [i_4] [i_4]) ? (var_18 ^ 4684046545325118166) : ((~(arr_13 [i_0 + 2] [i_0 + 2] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_23 = (max(var_23, (((!(arr_4 [i_1 - 3]))))));
                        arr_18 [i_0] [i_0] [i_1] [i_3] = 19;
                    }
                    var_24 = var_18;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_25 = ((38449 ? 38456 : -1851008770));
                            arr_23 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_7] [4] &= (var_16 ? (arr_9 [i_0 - 1] [2] [2] [i_2]) : (arr_9 [i_1] [2] [i_2] [i_6]));
                            var_26 = (arr_1 [i_0 + 2]);
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                var_27 = (!var_2);
                arr_27 [i_1] |= ((((1 ? 5122978758809494974 : 1881462258)) == (arr_1 [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 7;i_10 += 1)
                    {
                        {
                            var_28 = 1673573282;
                            var_29 = (305207752 > 22708);
                        }
                    }
                }
                var_30 = (arr_28 [i_0 + 1] [0] [i_0] [i_0 + 1]);
                var_31 = (((arr_29 [i_1] [i_1 + 2] [i_1] [i_1]) ^ (arr_29 [i_8] [i_1 + 2] [i_1] [i_1])));
            }
        }
    }
    var_32 &= ((var_9 ? var_16 : 1));
    var_33 = (min(1, 6784729778017192350));
    #pragma endscop
}
