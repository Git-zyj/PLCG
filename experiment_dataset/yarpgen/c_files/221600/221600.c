/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_10 += (~836532469);
        var_11 = (-560011962 / -19);
        arr_4 [i_0] [i_0] = ((~(arr_3 [i_0 - 2])));
        var_12 ^= (~2133788661);
        arr_5 [6] [6] |= ((-27 ? -17 : 1395989577));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 10;i_3 += 1)
            {
                {
                    var_13 = (max(2261704495, -17));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] [i_2] = 3661036824;
                                var_14 = 8857484413895776744;
                                arr_18 [i_1] [i_2] [i_2] [i_4] [i_5] = -184;
                                arr_19 [i_1] [i_1] [i_1] [i_1] [i_2] = 0;
                            }
                        }
                    }
                }
            }
        }
        var_15 = (max(var_15, (246 ^ 1142918930)));
        var_16 = 8053;
        arr_20 [i_1] [i_1] = 770490323;
    }
    var_17 ^= var_9;
    #pragma endscop
}
