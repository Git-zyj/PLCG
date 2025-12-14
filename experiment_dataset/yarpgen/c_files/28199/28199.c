/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_4 / (((var_9 ? var_12 : var_10))))) & var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((((var_11 ? (arr_2 [i_0] [i_0]) : var_4))) ? (1 - 11685207594046851494) : (9223372036854775786 + 11))))));
                var_19 = (min(var_19, (((-2030635938 && (((~((8066013784126495353 << (199 - 178)))))))))));
                var_20 = (((-32257 == -1) < (arr_3 [8])));
            }
        }
    }
    #pragma endscop
}
