/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [17] = -126;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (((((((arr_5 [i_0] [i_0]) == (((arr_5 [15] [i_1]) ^ var_5)))))) & ((var_10 ^ (((var_9 >> (var_11 - 11626))))))));
                    var_14 = ((4292870144 >> (33554431 - 33554409)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (3695744422 > 18446744073709551615)));
                                arr_13 [i_4] [i_2] [i_1 + 1] = (((((113 && 126) | (arr_2 [i_1 + 2] [i_2] [i_2]))) >> (((4292870144 - 599222865) - 3693647268))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    var_16 = (max(var_16, ((4000986198999611784 == (-30 ^ 30)))));
                    var_17 = (max(var_17, var_1));
                    var_18 += ((((var_5 - (arr_7 [i_0] [i_0] [i_0] [16]))) | (125 * -106)));
                    arr_17 [i_5] [i_1] [i_1 + 1] [8] = (((4292870144 / (arr_15 [21] [4] [i_5]))) << (var_11 > var_5));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_19 = (min(var_19, ((((((4663952073167964181 | -2147483644) & -45)) | 1)))));
                    arr_21 [i_6] [6] [3] [i_0] = (1 && 18446744073709551615);
                    arr_22 [i_0] [1] [i_6] = (((-12 + 2147483647) >> 1));
                }
                var_20 = (max(var_20, var_6));
                var_21 = (max(var_21, (9223372036854775797 >> 52)));
            }
        }
    }
    var_22 = (((((-125 | 3600907055) ^ (1 ^ 11408))) ^ (11408 ^ var_0)));
    var_23 = ((((130 >> (6865182780266921965 - 16341))) << 30));
    var_24 = (min(var_24, (((((-1 == 125) < (var_12 >> 0)))))));
    #pragma endscop
}
