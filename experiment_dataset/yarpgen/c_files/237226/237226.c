/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= 6104534634397416630;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, var_6));
                    var_13 = ((max(2138090852735438441, var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_14 = var_6;
                                var_15 = (-(((arr_0 [i_1 + 1]) ? 16308653220974113174 : (arr_0 [i_1 - 1]))));
                                arr_12 [i_3] [i_1 + 3] [i_2] [i_3] [i_4 + 1] = (((((arr_1 [i_0 - 1]) / (arr_1 [i_0 - 1]))) == ((~(arr_2 [i_0 + 1])))));
                            }
                        }
                    }
                }
            }
        }
        var_16 = (min(var_16, (((!(((-(16308653220974113203 || var_8)))))))));
        var_17 = ((((max((arr_10 [i_0 - 1] [i_0] [i_0] [16] [i_0] [i_0 - 1] [i_0 + 2]), (arr_2 [i_0])))) ? ((~(arr_2 [i_0]))) : (arr_1 [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 = ((~(arr_14 [i_5])));
        arr_15 [i_5] = ((~((var_5 ? (arr_13 [i_5] [i_5]) : (arr_13 [i_5] [i_5])))));
        var_19 |= var_6;
        var_20 *= ((((var_6 ? 1 : 16308653220974113173))) ? 2138090852735438462 : (arr_14 [16]));
    }
    var_21 = var_6;
    var_22 = (((-9142408165388353866 / var_6) & -9142408165388353865));
    #pragma endscop
}
