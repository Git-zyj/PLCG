/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [4] [1] [i_2] [i_3] [i_3] [i_2] = ((~15037010121116656117) <= var_8);
                        var_11 = (((max(9223372036854775807, 8909091122656378826)) + (((arr_2 [7] [i_1 + 1] [i_1]) ? -8909091122656378827 : (arr_0 [i_1])))));
                        arr_10 [0] [i_3] = ((-(arr_1 [i_1])));
                        arr_11 [7] [i_0] [7] [i_3] = -8909091122656378799;
                    }
                }
            }
        }
        arr_12 [i_0] = ((+((min((arr_0 [3]), 4285936540)))));
        var_12 *= (max(((((((var_2 ? (arr_0 [i_0]) : -339308461)) + 2147483647)) >> ((var_2 / (arr_8 [i_0] [i_0] [i_0] [i_0] [7] [7]))))), var_9));
        arr_13 [5] = (max(((~(min(var_6, (arr_7 [i_0] [i_0] [i_0]))))), var_9));
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_18 [i_4] = ((arr_14 [i_4 + 2] [i_4]) / (arr_14 [i_4 - 2] [i_4]));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_13 -= ((~(arr_20 [i_8 + 1] [14] [i_4 + 3])));
                            var_14 += (arr_22 [20]);
                        }
                        var_15 |= ((((arr_14 [20] [8]) < var_3)) ? -var_9 : (~var_0));
                        arr_30 [i_4] [7] [1] [i_6] [i_4] [i_7 + 1] = ((var_7 ? (arr_28 [i_7] [6] [i_7] [18] [i_7 - 1] [18]) : 8909091122656378798));
                        arr_31 [i_4] = -8909091122656378799;
                    }
                }
            }
        }
        var_16 += ((4285936520 ? 1 : 18446744073709551612));
        arr_32 [i_4] = var_8;
    }
    var_17 = (max((((!((min(8909091122656378835, 14928532224799318186)))))), 3));
    #pragma endscop
}
