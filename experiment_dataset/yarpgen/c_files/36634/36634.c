/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((var_8 * var_4) % (0 ^ 65535)))));
    var_17 = (max(var_17, var_1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 &= (((var_2 ? (65535 != 65529) : -65525)) < (((((var_7 ? var_12 : var_6)) < ((max(var_10, var_6)))))));
                    var_19 = (min(var_19, (((((max(var_14, var_12))) | ((var_9 ? var_14 : var_8)))))));
                    var_20 = (min(var_20, (((-((((0 * 15) < ((max(var_6, var_0)))))))))));
                    var_21 = ((27837 ? 0 : 4294967295));
                }
            }
        }
    }
    #pragma endscop
}
