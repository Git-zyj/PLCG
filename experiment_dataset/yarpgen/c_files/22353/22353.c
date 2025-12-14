/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = ((((max(-62335, ((~(arr_9 [i_2] [i_2] [i_1] [i_2])))))) && 7783515995615489323));
                                var_15 = ((-(arr_13 [i_3 - 2] [i_1] [i_1] [i_2 + 2])));
                            }
                        }
                    }
                    var_16 = (min(var_16, ((max((((((arr_6 [i_0] [i_0]) ? 13440827489547596158 : -9223372036854775786)) << (((arr_14 [i_0] [i_0] [i_2 + 1]) - 2177509540990885990)))), ((~((0 * (arr_15 [i_0] [i_1] [i_1] [i_1] [i_0]))))))))));

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_17 = ((+(min((((7 ? (arr_12 [i_2] [i_2] [i_5] [i_2] [i_2] [i_2]) : -6552374653060049163))), (min(18085126280452910345, (arr_2 [i_0])))))));
                        arr_20 [i_2] [i_2] [i_2] [i_0] = (((!8407886730189233100) - (!33610)));
                    }
                    var_18 = 0;
                    var_19 ^= (5 * 0);
                }
            }
        }
    }
    var_20 |= var_11;
    var_21 = ((((min(((var_5 ? var_9 : 5622398446278271466)), var_1))) % (max(((6494106043381045723 ? var_8 : var_4)), (min(1811523047741531133, var_3))))));
    #pragma endscop
}
