/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 13156;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((((((var_15 ? (arr_5 [i_0]) : 3635129752))) ? 13185 : 52380))) ? 4095 : (~var_10)));
                arr_6 [i_1] [4] |= (max(((35 ? ((max((arr_1 [i_0]), (arr_4 [i_1])))) : var_11)), (((var_9 ? 13185 : (arr_4 [i_1]))))));
                arr_7 [i_0] = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}
