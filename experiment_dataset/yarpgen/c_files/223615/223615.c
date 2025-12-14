/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_21 = 65535;
            arr_4 [i_1] [5] [i_0] &= 252;
        }
        arr_5 [3] = (((arr_0 [i_0] [i_0 + 1]) != (arr_0 [i_0] [i_0])));
        arr_6 [i_0] [i_0] = ((((((arr_0 [1] [4]) ^ (arr_2 [1] [i_0 - 1])))) ? (arr_3 [6] [6] [i_0]) : (((!(arr_3 [i_0] [i_0] [i_0]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, ((((((arr_13 [7] [i_3] [i_2] [6]) >> var_15))) ? (arr_14 [i_3 + 2] [i_0 + 2] [i_0] [i_0]) : (arr_3 [i_0] [i_2] [i_4])))));
                        var_23 += (arr_1 [i_0 - 1]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (((((((arr_15 [1] [1]) ? 1 : (arr_15 [i_5] [1])))) ? (((arr_16 [2]) - (arr_15 [i_5] [i_5]))) : (!0))))));
        arr_18 [i_5] = (arr_17 [i_5]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_25 &= var_1;
        var_26 = var_11;
        arr_22 [i_6] [i_6] = (arr_17 [i_6]);
        var_27 = (max(var_27, ((((var_0 + 2147483647) >> (arr_21 [i_6]))))));
    }
    #pragma endscop
}
