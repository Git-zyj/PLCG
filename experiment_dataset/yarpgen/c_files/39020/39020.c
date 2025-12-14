/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (((~53916) == -var_0));
                arr_4 [i_0] = 8160;
                arr_5 [i_0] = ((((min((53896 + 53946), ((5894436494093961145 ? -1 : var_4))))) ? ((var_0 ? (~1966080) : 2147483647)) : (1 | var_9)));
                var_12 -= var_9;
                var_13 = ((((((0 ? var_5 : (arr_1 [i_0] [i_0])))) ? (arr_2 [i_1]) : ((660432470880983773 ? 1 : (-2147483647 - 1))))));
            }
        }
    }
    var_14 = var_2;
    var_15 = (!(var_0 - -7825390387827406267));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_16 = (max(4294967285, var_7));
                var_17 = (min(var_17, (arr_2 [i_2])));
            }
        }
    }
    #pragma endscop
}
