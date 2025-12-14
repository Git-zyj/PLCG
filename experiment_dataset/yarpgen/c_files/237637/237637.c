/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                var_16 *= (min(((~(arr_2 [i_0]))), 2974886327));
                var_17 = ((-((1 ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 1])))));
                var_18 = (((var_12 ? (arr_0 [i_1]) : (((15 << (-2348 + 2375)))))));
                arr_6 [i_1] = ((((((((arr_0 [i_1]) != 4294967282)) ? var_13 : 4362467327874416873))) ? (arr_1 [i_1]) : 4294967294));
            }
        }
    }
    var_19 = var_1;
    var_20 = var_11;
    #pragma endscop
}
