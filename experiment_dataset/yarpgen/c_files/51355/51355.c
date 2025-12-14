/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 ^= (arr_3 [16]);
                var_20 = ((min((arr_2 [i_0 - 1]), 1426576761)) % ((((arr_2 [i_0 - 1]) && (arr_2 [i_0 - 1])))));
            }
        }
    }
    var_21 = (~var_2);
    var_22 = (min(var_22, (((var_14 ? (((((max(var_1, 92))) && (-784157512 && 164)))) : ((91 ? 938 : ((max(var_5, var_14))))))))));
    #pragma endscop
}
