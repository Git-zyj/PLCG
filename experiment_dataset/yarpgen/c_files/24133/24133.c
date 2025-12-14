/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((((((var_7 ? 2502879120965492084 : -5020354077003228808))) ? (!2502879120965492084) : (var_5 && 233)))) || 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((((3365527395 ? 2502879120965492084 : 2502879120965492103)) / 1)));
                arr_5 [i_0] [i_1] [i_0] &= (min(((-(arr_0 [i_0] [i_0]))), (min((arr_0 [i_0 + 1] [i_0]), 1))));
                var_13 = ((1 != ((1 ? (arr_0 [i_0] [i_0]) : 61))));
                var_14 = 1;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_15 &= (arr_4 [i_0]);
                    var_16 = (max(var_16, (max(119, 1))));
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
