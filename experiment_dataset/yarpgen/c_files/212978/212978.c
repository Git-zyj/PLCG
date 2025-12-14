/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [i_1]);
                var_18 = ((((((arr_0 [i_0]) ^ (arr_2 [i_1]))) & ((~(arr_0 [i_0]))))) & ((~(~27))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                {
                    var_19 = ((-33 ? (((((53 ? 53 : 9223372036854775807))) ? (((arr_8 [i_4 + 2] [i_3]) ? (arr_7 [2] [6]) : (arr_14 [i_2] [i_2] [i_2] [i_2]))) : ((((arr_3 [i_3]) ? (arr_14 [i_2] [i_3] [i_4] [i_2]) : (arr_4 [1] [i_3])))))) : (((arr_11 [i_4 - 1] [i_4 + 1] [8]) | (arr_7 [9] [9])))));
                    var_20 &= ((min(27, (((arr_13 [i_2] [5]) ? (arr_2 [i_3]) : var_2)))));
                    var_21 = arr_16 [i_2] [i_2];
                }
            }
        }
    }
    var_22 = (-9223372036854775807 - 1);
    var_23 = (!var_8);
    var_24 = (((var_16 != 2071804942712860005) < var_6));
    #pragma endscop
}
