/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((min(3702533667, (((2925 ? 62608 : 351838717)))))))));
                var_14 = (((arr_5 [i_1 - 2] [i_1 - 1]) ? ((((arr_5 [i_1 + 2] [i_1 - 2]) == (arr_0 [i_1 + 1] [i_1 - 1])))) : ((((arr_5 [i_1 + 2] [i_1 - 1]) <= (arr_5 [i_1 - 4] [i_1 + 1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, (arr_10 [i_2] [i_3] [i_4])));
                    var_16 = ((4282457064363185107 ? ((var_10 ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))) : (arr_12 [i_2] [i_3])));
                    arr_14 [i_2] [i_2] = (arr_6 [i_2]);
                }
            }
        }
    }
    var_17 += (((min(((-8039373622509231941 ? var_10 : var_12)), (!21260)))) ? (((max(27421, 0)))) : var_7);
    #pragma endscop
}
