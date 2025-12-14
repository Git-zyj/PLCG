/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 ^= (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (((((-9223372036854775799 ? 310 : 1))) != ((1 ? (arr_3 [i_1] [i_2 - 1]) : (-9223372036854775807 - 1)))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (min((arr_10 [i_1] [i_3 - 1] [i_1] [i_3] [i_3] [i_3]), 16835903858613835103));
                        var_15 = (max(var_15, ((((-(arr_3 [i_2 - 1] [i_3 - 1])))))));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_5] [i_6] [i_7] = 43;
                                arr_26 [i_0] [i_0] [i_5] [i_5] [i_7] = 4610321810943280366;
                            }
                        }
                    }
                    arr_27 [i_0] [i_0] = (max((((((min(5536658962333332361, 65237))) <= (min((arr_8 [i_0] [i_0]), var_9))))), ((65504 ? ((min(86, (arr_24 [i_5] [i_5] [i_5] [i_4] [i_4] [5])))) : 10183323306506677214))));
                    arr_28 [i_0] [3] [i_5] [7] = ((17491646391751814068 + (((28 ? 8581545984 : 37114)))));
                }
            }
        }
    }
    var_16 = var_11;
    var_17 ^= var_1;
    #pragma endscop
}
