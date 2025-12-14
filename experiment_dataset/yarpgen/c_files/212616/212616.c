/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (1 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 += (min(99, 1));
                var_19 = (max(var_19, ((((((~(((var_16 == (arr_3 [i_0]))))))) ? ((~((max(0, var_4))))) : ((-(arr_1 [i_1] [i_1]))))))));
            }
        }
    }
    var_20 = ((max(-88, ((min(var_7, var_8))))));
    var_21 = (((((min(var_10, 1)) ? (var_12 <= 1) : ((max(1, var_15))))) / ((((1 ? 1 : 212)) / 1))));
    var_22 = ((1 * (min(var_6, ((1 ? 1 : var_15))))));
    #pragma endscop
}
