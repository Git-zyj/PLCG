/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_13;
    var_18 = (((!var_11) >> ((((19430 & var_10) < 2113929216)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 53169;
                var_19 ^= ((((~(3252216080 >> 0))) >> ((((~(var_6 > 53190))) + 12))));
            }
        }
    }
    var_20 = -var_2;
    #pragma endscop
}
