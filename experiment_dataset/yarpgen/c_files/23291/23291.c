/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((min(1, 50387))) ? ((1 ? 1 : 1)) : (min(986056014, 1)))), 32));
    var_15 = var_0;
    var_16 = ((((min(((var_10 ? 56 : -33)), var_8))) ? (min(((min(200, 13416))), (~-6204))) : ((((min(0, 11469983909895379858))) ? var_0 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] |= (max(210, (~var_5)));
                var_17 = ((((max(var_9, 69))) || (((arr_5 [i_1] [12]) && (arr_5 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
