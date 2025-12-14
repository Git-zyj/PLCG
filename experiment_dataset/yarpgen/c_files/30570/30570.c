/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0] [0] = ((((min((arr_2 [i_0 + 2]), (arr_2 [i_0 + 2])))) ? ((((-(arr_5 [i_0] [0] [i_2]))))) : (arr_1 [i_2])));
                    var_20 = (min(var_20, ((((((((min(var_14, (-127 - 1)))) ? (arr_3 [i_0 + 1]) : ((var_1 ? 0 : var_4))))) ? var_6 : var_16)))));
                }
            }
        }
    }
    var_21 += var_16;
    var_22 = (((((var_12 || var_17) ? var_8 : -310404841)) << (((((max(var_1, 63))) <= var_0)))));
    var_23 = ((var_19 ? (((var_16 == (((var_17 ? var_1 : -27743)))))) : ((((-47 - -115) > var_5)))));
    #pragma endscop
}
