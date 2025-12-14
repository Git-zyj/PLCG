/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 &= (max((((arr_2 [i_1]) ? ((~(arr_1 [i_0] [i_0]))) : (arr_3 [i_1]))), ((var_6 ? ((-96 ? (arr_1 [i_0] [i_1]) : (arr_0 [i_0]))) : (((~(arr_2 [i_1]))))))));
                var_14 = 69;
                arr_5 [i_0] = (min(((40146 ? var_8 : (arr_3 [i_0]))), ((40154 ? 0 : ((min(25389, -14169)))))));
            }
        }
    }
    var_15 = var_10;
    var_16 = ((~(min(((var_6 ? 0 : 936062332)), (max(var_8, var_10))))));
    var_17 = var_10;
    #pragma endscop
}
