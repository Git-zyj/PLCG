/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(~-14937)))) ? var_3 : var_7));
    var_17 = ((((min(((-49 ? var_1 : -5888781448937766608)), (((var_12 ? 54 : 201)))))) ? ((var_4 ? (max(2154318419855307319, var_4)) : var_5)) : var_5));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [i_0 - 1]);
                    arr_6 [i_0] [i_0] [i_2] [i_2] = (((arr_0 [i_0] [5]) ? (arr_5 [i_2]) : ((-(arr_2 [i_0] [i_0] [i_0 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
