/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((((((((arr_3 [i_0] [i_1]) >> (arr_2 [i_0] [i_1] [i_0])))) ? (var_0 | var_11) : ((((arr_5 [i_0] [i_1] [i_1] [i_1]) ? (arr_0 [i_1]) : 2979))))) << (!var_9))))));
                    var_20 = (max(var_20, -109));
                }
            }
        }
    }
    var_21 = (min(var_21, var_17));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            {
                arr_11 [i_4] [i_4] = ((((((arr_5 [i_4] [i_4 + 2] [i_4] [i_4 - 2]) ? var_16 : (0 || 62)))) ? ((((arr_5 [i_3] [i_4 + 2] [i_4] [i_4]) || (((62 >> (-9223372036854775799 + 9223372036854775804))))))) : ((((((arr_10 [i_3] [i_4]) - var_1))) ? var_9 : 1822919948))));
                arr_12 [i_4] [i_4 + 2] = ((((var_11 ? -1822919948 : (max((arr_5 [i_3] [i_4] [i_4] [i_4]), var_15)))) ^ (((arr_10 [i_3] [i_4 - 1]) ? (arr_10 [i_3] [i_4 - 1]) : (arr_10 [i_3] [i_4 - 1])))));
            }
        }
    }
    var_22 = (!var_2);
    #pragma endscop
}
