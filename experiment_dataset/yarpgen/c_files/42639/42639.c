/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_20 = ((((18446744073709551601 ? 4177920 : (arr_6 [i_0] [i_0 + 1] [i_1 - 1]))) != -4177920));
                    arr_7 [i_2] = 18446744073709551593;
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_21 -= (14 ? (max(((((arr_5 [i_0] [i_0] [i_0] [i_0 - 2]) ^ (arr_8 [i_0] [i_0])))), 524160)) : (((((1022581145 >= 2147483631) > (arr_1 [i_3 + 3]))))));

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_22 = ((!(((-(arr_4 [i_3 - 1] [i_1 + 1] [i_0 - 2]))))));
                        var_23 += ((((!(arr_3 [i_1 - 2] [i_3 + 3] [i_3 + 3])))));
                    }
                }
                var_24 = ((-(((arr_4 [i_0 - 1] [4] [i_0]) + 96))));
                var_25 ^= (min(((((arr_9 [i_1 - 3] [i_1 - 3] [i_0 - 1] [i_0]) && (arr_9 [i_1] [i_1 - 3] [i_0 - 1] [i_0])))), (arr_9 [i_1] [i_1 - 3] [i_0 - 1] [2])));
                var_26 = 0;
                var_27 = (arr_4 [i_0 - 2] [i_0 - 2] [3]);
            }
        }
    }
    var_28 = ((-(((-4177930 ? -840498991 : var_5)))));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        var_29 = (min(((-((((arr_14 [i_6]) >= -1100211091))))), (--41327)));
                        arr_22 [i_6] [i_6] [i_7] = ((-(((!(((20 - (arr_16 [i_6] [i_6 - 2])))))))));
                        var_30 -= (arr_14 [i_8 - 2]);
                    }

                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        arr_26 [i_5] [16] [2] [15] [i_9] [i_6] = ((min((~7), (arr_20 [i_9] [i_6 + 1] [i_7] [i_6 - 2]))));
                        arr_27 [i_6] [i_7] [i_5] [i_6] [i_5 + 2] [i_6] = (arr_20 [i_9] [i_7] [i_6] [i_5]);
                    }
                }
                var_31 = -4954116314243520947;
                arr_28 [i_6] [i_6] [i_6] = (arr_20 [i_5] [i_5 + 2] [i_5] [i_5 + 2]);
            }
        }
    }
    var_32 = var_9;
    #pragma endscop
}
