/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((((var_8 ? var_0 : -1))) * 1104433716)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 -= ((~(max((((arr_2 [i_0] [i_0]) & -6)), ((min(var_4, var_9)))))));
        arr_4 [1] |= (((arr_2 [i_0] [i_0]) >> ((((~(arr_2 [i_0] [i_0]))) - 80))));
        var_13 = (max(var_13, ((max(40592, (var_4 || -101))))));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {
        var_14 = (((max((arr_1 [i_1 - 1] [i_1]), (arr_3 [i_1 - 2]))) | ((4952586207926529996 ? 0 : (arr_3 [i_1 + 2])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    var_15 *= (((((-12103 ^ (arr_0 [i_1 + 2])))) ? (min((~30764), var_7)) : ((~((var_9 ? var_2 : var_1))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 -= (((arr_3 [i_1 + 1]) ^ var_10));
                        var_17 -= 8;
                        var_18 += ((~(!var_4)));
                        var_19 |= ((var_9 ? ((~(arr_10 [i_1 + 1]))) : 5690));
                    }
                    for (int i_5 = 1; i_5 < 7;i_5 += 1)
                    {
                        var_20 -= var_0;
                        var_21 |= (((-1303158631 ^ 32752) ^ var_2));
                        var_22 = (max(var_22, (59870 % 1803)));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_23 ^= (min(((max(-49, 60033))), (arr_3 [4])));
                        var_24 = (max(var_24, ((max(-12094, (arr_10 [i_6]))))));
                    }
                    var_25 ^= ((-((var_3 ? 118 : (arr_18 [i_1] [i_1] [i_1] [i_1 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
