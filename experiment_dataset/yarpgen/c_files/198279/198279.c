/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((max((max(8147486830498102338, 18446744073709551588)), (((-(arr_1 [i_1])))))))));
                var_19 = var_0;
                var_20 = arr_2 [i_0];
                arr_5 [i_1 - 1] [i_1] [i_1] = (max(10299257243211449277, (max((arr_0 [i_0]), (arr_4 [i_0] [i_1 + 1])))));
            }
        }
    }
    var_21 = var_0;
    var_22 = var_11;
    var_23 += var_7;
    #pragma endscop
}
