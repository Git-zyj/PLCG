/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 <= ((max((var_7 || var_3), var_14)))));
    var_21 = ((var_19 ? var_10 : (max(576179277326712832, -1271890135))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = (min(1271890135, (arr_1 [1])));
                arr_6 [i_0] [i_1] = ((((min(1271890135, var_16))) ^ 132120576));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_23 = (min(((((((!(arr_10 [i_2] [i_3] [i_3])))) / var_17))), var_12));
                var_24 = ((~(arr_11 [i_2] [i_3])));
                var_25 = (min(var_25, (((((max((arr_11 [i_2] [4]), 129))) << ((var_1 ? (arr_12 [i_2] [i_2]) : (arr_12 [1] [i_3]))))))));
                arr_13 [i_2] [i_2] = var_17;
            }
        }
    }
    #pragma endscop
}
