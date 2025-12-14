/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((!((max(var_8, 0))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_6 ? var_4 : var_4))) + ((15854655121687570710 ? 189 : (arr_0 [11])))));
        arr_3 [i_0] = -var_8;
        arr_4 [6] &= 3485590094;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_12 = var_2;
                        arr_16 [i_1] [i_2] [i_3] [i_2] = (((((max((min(189, 10)), (var_5 && var_2))))) ^ (arr_15 [i_1] [i_1] [i_1] [1] [i_1] [3])));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_13 = (min(var_13, (((((-(15854655121687570710 >= 4493828824275597811)))) ? (arr_0 [i_1]) : (min(10, ((93 ? 6750372063243941898 : (arr_8 [i_4] [i_2] [i_3])))))))));
                            var_14 = (var_9 - 3851871009543618761);
                        }
                        var_15 = (max(var_15, (((-(arr_12 [i_1]))))));
                    }
                }
            }
        }
        arr_19 [i_1] = (arr_0 [i_1]);
    }
    var_16 = (max(var_16, 173));
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                {
                    var_17 = (761806205 <= 73);
                    var_18 = (min(var_18, (((((min((min((arr_20 [1] [1]), 15824297843493166738)), (130560 / 67)))) ? (((max(1855785973, var_4)))) : (min(0, ((61 ? 18446744073709551615 : (arr_25 [0] [0] [5] [i_6]))))))))));
                }
            }
        }
    }
    var_19 &= 6690402275834987595;
    #pragma endscop
}
