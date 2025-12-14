/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = var_1;
                arr_6 [i_1] [i_1] = ((~((var_6 - (arr_1 [i_0])))));
                var_12 = (min(var_12, (((((max(((var_0 ? var_2 : (arr_4 [i_0] [i_0]))), -var_3))) ? ((var_8 - (((((arr_4 [i_0] [i_0]) != var_9)))))) : (((((max(var_5, var_7))) + (var_8 || var_8)))))))));
                var_13 = arr_4 [i_0] [i_1];
            }
        }
    }
    #pragma endscop
}
