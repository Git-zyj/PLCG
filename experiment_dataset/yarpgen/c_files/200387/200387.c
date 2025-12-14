/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((max((-18 * var_16), 880870313))) ? (((((min(22, 27275)))) * 2704033423)) : -23780);
    var_19 = ((!(var_7 != 909508324)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (((var_16 || -1355722850) >> (((((var_1 % (arr_1 [i_1] [i_0])))) - 75))));
                arr_6 [i_0] [i_0] [i_0] = 1355722849;
            }
        }
    }
    var_21 = -1355722850;
    var_22 = var_7;
    #pragma endscop
}
