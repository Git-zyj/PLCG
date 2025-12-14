/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [6] [8] = ((!(((-28485 ? -1 : var_7)))));
        arr_3 [i_0] [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            arr_11 [6] = (((arr_10 [i_2 + 1]) * 65519));
            arr_12 [8] = (((arr_4 [i_2 - 1]) + var_6));
        }
        var_16 |= ((((arr_4 [9]) < 321406047)) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_1 [i_1] [i_1]));
        var_17 ^= -1;
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_18 = (arr_1 [i_4] [4]);
                    var_19 *= (((((arr_16 [0] [0] [i_3] [i_1]) ? (arr_15 [i_4] [i_3] [i_1]) : 28484)) + var_5));

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_20 = (((arr_19 [5] [i_3 - 4] [i_3 - 2] [i_3]) % (arr_7 [i_3] [i_3])));
                            var_21 = (max(var_21, (28485 || 25)));
                            var_22 = (min(var_22, (arr_20 [i_3 + 1] [i_3])));
                            var_23 ^= (((arr_20 [i_3 + 1] [i_3 - 1]) + (arr_19 [0] [i_3] [i_3 - 1] [i_6])));
                            var_24 = var_3;
                        }
                        var_25 += (((-63 - 321406039) && 12936));
                        arr_26 [i_4] = ((46611 != (arr_10 [i_3 - 1])));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_30 [i_1] [13] [i_1] [i_4] [4] = (((!(arr_29 [3] [11] [i_4] [i_7] [i_7] [i_1]))));
                        var_26 *= (!64);
                        arr_31 [i_4] [14] [9] [10] = ((((((arr_18 [i_1] [i_3 - 2] [10] [i_7]) ^ var_9))) ? var_6 : ((var_11 ? var_10 : 6111))));
                        arr_32 [1] [i_4] [i_3] = var_0;
                    }
                }
            }
        }
    }
    var_27 ^= (max((max(((1 ? 14788 : -63)), ((2147483647 >> (var_1 - 37727))))), var_9));
    #pragma endscop
}
