/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1161840096;
    var_17 = (max((((44120 <= var_10) ? var_10 : (((max(33831, 31704)))))), (((var_0 % var_7) & 31704))));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_19 |= var_11;
                    var_20 = (min(var_20, (31705 % 1)));
                }
                arr_7 [i_0] [i_0] = var_6;
                var_21 = (max(var_21, (((((var_6 ^ 935276455) ? (arr_5 [i_0] [19] [i_0]) : ((max((arr_5 [i_0] [i_0] [1]), (arr_0 [i_0] [i_1]))))))))));
                var_22 = ((15 ? (arr_6 [i_0] [i_1] [i_0] [i_1]) : (max(var_10, (arr_1 [i_0 - 1])))));
            }
        }
    }
    var_23 = ((var_13 ? (min(var_13, -10264)) : ((0 ? 1033652058 : 0))));
    #pragma endscop
}
