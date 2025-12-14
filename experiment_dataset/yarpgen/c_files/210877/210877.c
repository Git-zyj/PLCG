/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, var_0));
                var_17 = (min(var_17, ((((((1 || 394937232) ? var_6 : (((219 ? var_13 : 8191))))) < 1)))));
                var_18 &= (((((var_6 ? ((1 ? var_12 : 3497987839)) : (~var_2)))) ? (((var_3 ? var_15 : var_12))) : (max((((-7772303407338197318 ? 70 : -8191))), 2269334268))));
            }
        }
    }
    var_19 = (((7772303407338197317 ? (-8177 / 11185788187613373828) : var_0)) * var_6);
    var_20 = (var_2 ? var_12 : (max(1, (~1474422248))));
    var_21 = (min(var_21, (((max(((max(var_9, 1))), 12))))));
    #pragma endscop
}
