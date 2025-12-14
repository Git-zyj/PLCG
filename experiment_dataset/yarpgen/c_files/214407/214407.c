/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((var_15 ? 5 : ((((min(8335517308445521592, 4832656430963069821))) ? (-1180145811755621464 ^ 4832656430963069821) : (var_8 ^ var_5)))));
        var_18 ^= (((((arr_1 [i_0]) ? (arr_1 [1]) : 121)) != (((!((min(203, 12897560031311123241))))))));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = -6943;
        arr_6 [i_1] = (arr_4 [i_1]);
        var_19 -= (arr_3 [10] [i_1]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_11 [i_2] &= (((((min(-24900, 1962240662)))) != 13614087642746481798));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_14 [i_2] = (!var_2);
            var_20 -= (arr_0 [i_2] [i_3]);
            arr_15 [i_2] = (~(arr_7 [i_2]));
            arr_16 [i_2] [2] [i_3] = var_11;
            var_21 = (max(var_21, -24900));
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_25 [i_6] [i_5] [i_6] [i_5] = (13614087642746481781 * var_9);
                    arr_26 [i_4] [i_5] [1] [5] = var_16;
                    arr_27 [i_4 - 2] [i_4] [i_5] = -1885324592;
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_32 [i_5] = ((((min((-32767 - 1), 5))) > (-127 - 1)));
                                var_22 -= (0 >= -5378);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
