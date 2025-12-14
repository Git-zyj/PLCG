/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_6));
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = var_5;
                var_19 = ((+((-362601922 ? (~var_2) : -var_7))));
                var_20 = (min(var_20, (((!((((arr_2 [i_1] [i_0 + 1] [i_0 - 2]) ? var_3 : 1287790513))))))));
            }
        }
    }
    #pragma endscop
}
