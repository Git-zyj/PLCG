/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_9, ((~((var_4 ? var_2 : var_3))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_12 += ((((((!1) ? ((var_1 ? 2049439046 : (arr_0 [i_0]))) : (var_4 || var_0)))) ? 1 : ((53411 ? (((15575 < (arr_4 [i_3])))) : (((arr_5 [0] [0] [i_3] [i_3 - 2]) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : 1))))));
                        var_13 = ((~((0 ? 87 : -3949151728486618195))));
                        arr_11 [i_0 + 3] [i_0] [i_0] [6] [i_0] [i_0] = ((!((max(var_10, -var_4)))));
                        arr_12 [i_0] [i_0] [i_0] = ((!(((~(arr_5 [i_0] [i_0 + 1] [i_2] [i_3 - 2]))))));
                    }
                }
            }
        }
        var_14 = (min(var_14, (arr_7 [i_0] [i_0] [4])));
        var_15 = (max(var_15, (((!(((87 * 87) > ((var_7 ? (arr_7 [i_0] [i_0] [8]) : (arr_2 [8]))))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            arr_20 [i_4] [i_4] = (!3260922538);
            var_16 = ((87 ? 3820993172 : (arr_14 [i_4])));
        }
        arr_21 [4] [i_4] &= (min((((arr_16 [i_4]) + 169)), ((((!37) == ((min(84, 171))))))));
        arr_22 [i_4] = (((arr_17 [i_4] [i_4]) / (min(((var_3 * (arr_17 [i_4] [i_4]))), (67 * var_4)))));
    }
    var_17 *= (!84);
    #pragma endscop
}
