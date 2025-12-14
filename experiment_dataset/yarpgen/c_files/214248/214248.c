/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = ((532676608 ? 32963 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((-(1 ^ 1466113498441737310)));
                var_20 = (min(var_20, 559340342));
                arr_5 [i_0] = ((-186 ? 1466113498441737287 : (1 - var_16)));
                var_21 = 1;
            }
        }
    }
    var_22 += ((9639 ? 1 : -82));
    var_23 = ((var_12 * ((((875702221 >= -6230355479882613660) > var_6)))));
    #pragma endscop
}
