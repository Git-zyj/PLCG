/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((4194303 ? var_4 : 4611686018427387904)) >> (5507687888925103709 - 5507687888925103702))) > (min((((var_2 << (var_7 - 954390082)))), 2029))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] |= ((((1301064589 || (arr_3 [i_1]))) ? ((535822336 ? (20128 == 237) : ((-4452253671333908318 ? 6939662676893667686 : (arr_0 [i_1]))))) : (arr_2 [i_0])));
                var_13 = (arr_0 [i_0]);
            }
        }
    }
    var_14 = 6284;
    #pragma endscop
}
