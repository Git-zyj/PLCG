/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_0 || var_4), (((var_2 * var_10) * var_0))));
    var_14 = (((((((var_2 ? var_5 : var_6))) * (min(120, 718918674))))) ? var_5 : ((((1082 >> var_0) && (((var_6 ? var_0 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = var_2;
                arr_5 [i_1] = var_4;
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
