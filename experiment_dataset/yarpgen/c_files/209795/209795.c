/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_13 ^ ((((((min(var_6, var_3))) && (((var_2 >> (var_14 + 313746035)))))))))))));
    var_17 = ((((((!var_15) < var_0))) - (!var_11)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((var_6 ^ var_6) + (26 - 255))))));
                arr_7 [i_1] [i_0] [i_0] = (max(((((((arr_6 [i_0]) == var_14))) ^ ((min(var_12, var_6))))), ((~((12 ? -3 : 50999))))));
            }
        }
    }
    #pragma endscop
}
