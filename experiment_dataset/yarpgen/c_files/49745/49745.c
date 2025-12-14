/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (min(((((var_3 ? var_0 : 14275132994930597688)))), (((((var_6 ? var_10 : 14275132994930597683))) ? (max(var_8, 4171611078778953938)) : 14275132994930597683))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = 3181265792;
        var_13 = ((-588534670941825137 * ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
        var_14 = var_1;
    }
    var_15 = ((((((((var_3 ? 4493279137573289480 : var_5))) ? var_0 : (max(var_5, var_10))))) ? var_0 : var_3));
    #pragma endscop
}
