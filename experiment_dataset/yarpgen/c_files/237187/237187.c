/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (((((var_9 & (((arr_0 [i_0]) ? 16005222748239408669 : (arr_3 [i_0] [i_1])))))) ? ((+(((arr_1 [i_1] [i_0]) ? var_12 : var_2)))) : (arr_1 [i_1 - 1] [i_1 + 1])));
                arr_5 [2] [i_1 + 2] &= (arr_0 [i_1 + 2]);
            }
        }
    }
    var_16 = (min(-23142, 18446744073709551615));
    var_17 |= ((-288195191779622912 ? 1 : var_5));
    #pragma endscop
}
