/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_19 = ((((max((min(65, (arr_1 [i_0] [i_1 + 3]))), ((min(-76, 24788)))))) ? (((arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) * (arr_3 [i_0 - 2] [i_1] [i_1 + 1]))) : (((((max((arr_1 [i_0] [i_1]), 55449))) && ((min(489199547, 9753))))))));
                arr_5 [i_0] = (35570 ^ 35567);
                var_20 += ((((56095 != (-55 * 4212277200))) ? ((((arr_1 [i_1] [i_0]) << (53 >= 127)))) : (((~72) | ((35 ? 35600 : 4212277195))))));
            }
        }
    }
    var_21 += var_9;
    #pragma endscop
}
