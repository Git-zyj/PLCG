/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = 12802;
                var_19 = (-12802 ^ 12791);
                var_20 = (min(var_20, ((((((((var_16 ? var_15 : var_7))) ? var_15 : ((var_2 ? var_13 : 252)))) == ((min((!var_8), (max(var_1, 12801))))))))));
                arr_6 [i_0] = max(((max(12792, 12802))), (~-4080));
            }
        }
    }
    #pragma endscop
}
