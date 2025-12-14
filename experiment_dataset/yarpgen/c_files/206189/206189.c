/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_5));
    var_21 = ((var_17 << (((-192 + 210) - 12))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((((arr_0 [i_0]) >= -1917551739))), ((~(arr_1 [i_0] [i_0])))));
        var_22 = ((~((570787286 ? 30 : -252686619))));
        arr_3 [i_0] [i_0] &= arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_23 ^= 1;
                        var_24 = (arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3]);
                    }
                    var_25 -= ((!((max((arr_9 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0]), 1)))));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_0] [8] [i_2] [i_4] [i_4] = 30;
                        arr_16 [i_4] [i_0] [i_1] [i_0] = ((((((arr_0 [i_1]) << (((((arr_13 [i_0] [i_1] [15] [i_2] [i_4]) + var_5)) - 2687946482225112153))))) - ((var_14 ? (arr_11 [i_0] [i_0] [0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])))));
                        var_26 = ((~(~var_1)));
                    }
                    var_27 -= (max((((~(arr_1 [i_0] [i_1])))), (min((arr_7 [i_2] [i_1] [i_2]), (max(var_8, var_13))))));
                }
            }
        }
    }
    var_28 += ((var_9 | (((((-1917551739 + 2147483647) << (((-1917551739 + 1917551765) - 25))))))));
    var_29 = var_13;
    #pragma endscop
}
