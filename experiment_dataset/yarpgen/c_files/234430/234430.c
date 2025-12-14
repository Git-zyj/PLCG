/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = var_5;
        var_13 = (((arr_0 [i_0]) % (((var_6 < (arr_0 [i_0]))))));
        arr_2 [i_0] = (((var_5 << (((arr_1 [i_0]) - 40)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 = ((var_5 ? ((((max(1, var_3)) / (arr_6 [i_0] [i_1 + 2])))) : var_5));
                    var_15 = ((!(arr_9 [i_0] [i_1] [i_0] [i_0])));
                    var_16 *= ((0 ? ((((min(var_7, var_4)) < var_0))) : var_6));
                    arr_10 [i_2] [i_1] [i_2] = (min(((var_2 ? (arr_4 [i_1 - 2] [i_1]) : (arr_4 [i_1 - 1] [1]))), (~var_10)));
                    arr_11 [i_1] [i_1] [i_2] = ((~var_1) ? (max((max(3418431983606054070, var_5)), -9134345281416167077)) : var_0);
                }
            }
        }
        var_17 = ((min(1, 9134345281416167077)));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_19 [i_3] &= 1;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_18 *= ((((((arr_14 [i_6] [i_6]) + (11921 != 0)))) || ((((arr_17 [8] [i_4]) / (max((arr_20 [i_3]), var_3)))))));
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_4] [7] = var_1;
                            var_19 = (min((max(var_6, var_4)), ((max((arr_23 [3] [i_4] [i_4]), (arr_23 [i_3] [i_6] [i_4]))))));
                            var_20 = (arr_17 [i_4] [i_5]);
                        }
                    }
                }
            }
        }
    }
    var_21 ^= ((((~(var_4 ^ var_5))) <= var_7));
    #pragma endscop
}
