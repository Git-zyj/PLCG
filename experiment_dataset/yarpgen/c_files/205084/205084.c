/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    var_17 = (max(var_17, (max(((var_8 + (!-4890642097042827767))), (var_10 && 1522667924)))));
    var_18 = (max(var_18, (var_9 ^ var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((((max((var_13 | var_10), (0 | 3679296672886093081)))) ? (((arr_8 [i_1 + 2] [i_1 + 1] [i_1] [i_1]) ? 0 : var_14)) : ((~(arr_8 [i_0] [i_0] [i_0] [i_0])))));
                    arr_10 [i_2] [i_2] = (var_7 + 12403333112787440728);
                }
            }
        }
    }
    #pragma endscop
}
