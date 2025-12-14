/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((((var_15 ? var_7 : var_5))) ? -var_0 : (!8912177858449925186)))) ? (((((10238943084958659392 ? var_11 : 22))) ? ((var_2 ? 10565983346336576077 : var_13)) : var_13)) : var_15));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((!(((59 ? var_16 : 10238943084958659413)))));
        var_20 = (max(var_20, ((((((var_7 ? var_8 : -2133373668))) ? (((!(((var_16 ? var_11 : var_3)))))) : (((!7888219543991044456) ? var_9 : 255)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (((((1522877676540836439 ? 10565983346336576077 : -32766))) ? var_2 : (((var_6 ? 0 : var_6)))));
                    var_22 = 6858;
                }
            }
        }
    }
    var_23 = (min(var_23, (~-7234146992695450476)));
    var_24 = ((var_7 ? -var_1 : ((var_0 ? var_5 : var_1))));
    #pragma endscop
}
