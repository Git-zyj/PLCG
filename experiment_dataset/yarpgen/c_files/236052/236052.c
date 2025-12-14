/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((88 ? (-316988445 + 20) : var_0)), 223));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((~(max((~var_9), (arr_2 [i_1])))));
                var_14 = (min(var_14, (((~(arr_4 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_15 = ((((((var_12 * 33) ? (~26) : ((30 ? 0 : 4294967285))))) < 6892152322156884910));
    var_16 = (((((((~var_5) + 2147483647)) >> (((1 ^ var_1) - 10898819559766367471))))) ? var_5 : var_2);
    #pragma endscop
}
