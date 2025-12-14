/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((max(var_6, (max(var_3, 8197474221644456372))))) ? ((((min(var_7, var_3))) ? (((min(var_11, var_7)))) : -36028792723996672)) : ((max(1021440575, (var_6 / var_1)))))))));
    var_13 -= ((var_4 ? var_2 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] |= (12692763718464471603 ? 3135121652 : 11229036764395276387);
                var_14 = (max(var_14, ((((arr_4 [i_0] [i_0]) < 0)))));
            }
        }
    }
    #pragma endscop
}
