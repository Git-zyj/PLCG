/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((min((14 <= 2975617096), (2975617113 || var_6)))), (((arr_4 [i_0] [i_1 - 1] [i_0]) >> (((arr_4 [i_0] [i_1 + 2] [i_1]) - 1722783766))))));
                arr_7 [i_0] = (((arr_2 [i_0]) <= (((min((arr_1 [i_0] [i_0]), (arr_2 [i_0]))) & var_5))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_14 *= ((((max(1319350200, 1698339060))) << (((max((((arr_0 [i_2]) ? 1319350200 : 1319350200)), ((((arr_5 [i_3]) >= var_2))))) - 1319350184))));
                arr_13 [i_2 - 2] [i_2] = arr_12 [i_2 - 3];
                var_15 = (min(1319350213, 2975617082));
                var_16 ^= (((((~1319350200) ? (arr_11 [i_3]) : (((9223372036854775807 ? 2975617096 : (arr_12 [i_3]))))))) ? ((((((1 ? var_7 : 4152369306866684385)) < ((max(var_12, var_4))))))) : ((max(var_12, var_3))));
            }
        }
    }
    #pragma endscop
}
