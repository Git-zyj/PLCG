/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 |= (arr_0 [i_0 + 1]);
                arr_4 [i_0] [i_0] = (59 ? (((9223372036854775807 ? 6548 : (~var_12)))) : ((0 ? (arr_1 [i_0]) : ((0 ? var_2 : 4294967295)))));
            }
        }
    }
    var_21 = max(6548, var_19);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_11 [i_3] [i_2] = (min((max(4, ((max((arr_9 [1] [i_3]), var_6))))), -var_11));
                var_22 = (min(var_22, (((((((arr_5 [i_3]) >> (var_12 - 15210)))) ? (4 & var_15) : -13)))));
                var_23 += (((arr_8 [i_3]) <= (((arr_8 [i_3]) ? (arr_7 [i_2] [i_2]) : (arr_5 [i_3])))));
                var_24 = (((~9223372036854775807) ? ((((23399 >> (5197353054417958952 - 5197353054417958943))))) : (((min(403932314452314871, 1))))));
            }
        }
    }
    #pragma endscop
}
