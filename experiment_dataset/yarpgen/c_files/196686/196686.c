/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = 65535;
                var_12 = (((((var_7 ? (arr_1 [i_0]) : var_6))) ^ (max((max(1655709614700797589, 15393)), var_7))));
                var_13 = var_6;
                var_14 -= ((~((((((arr_1 [i_1]) < var_2)) || var_7)))));
                var_15 = (max(var_15, (arr_1 [i_1])));
            }
        }
    }
    var_16 = 1171874031850790597;
    #pragma endscop
}
