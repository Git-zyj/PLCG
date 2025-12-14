/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_11;
    var_15 -= ((~((~(min(1859466613, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((((min((max(9534, (arr_0 [i_1]))), 146))) ? (((((146 ? (arr_4 [i_0]) : 146))) ? -1286896814938816951 : -1286896814938816951)) : -1286896814938816951));
                var_17 = (max(var_17, (((((min((arr_2 [i_1]), var_1))) ? 4294967276 : (((max(-30361, (arr_4 [i_1 - 4]))))))))));
            }
        }
    }
    var_18 = (max(((18 ? ((var_12 ? var_9 : -1286896814938816951)) : var_3)), var_3));
    #pragma endscop
}
