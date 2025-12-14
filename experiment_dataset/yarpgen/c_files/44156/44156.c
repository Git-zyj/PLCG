/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [14] = (!7173470069559256725);
                var_16 = (max(var_16, var_9));
                arr_5 [i_0] = (36 ^ 5);
            }
        }
    }
    var_17 = ((7173470069559256738 ? (min(11273274004150294890, 7173470069559256731)) : var_12));
    var_18 = (!4294967288);
    var_19 = (max((!var_8), ((var_7 ? (~var_12) : var_14))));
    #pragma endscop
}
