/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 |= var_11;
                    var_16 = (max(var_16, (arr_6 [i_0] [i_1 - 2] [i_2 - 1] [i_0 + 1])));
                    arr_9 [i_2] [i_1] [i_0] = (min(var_8, ((max((arr_3 [i_1 + 1] [i_2 + 1]), (arr_3 [i_1 - 2] [i_2 + 1]))))));
                }
            }
        }
    }
    var_17 = 18446744073709551596;
    var_18 = (min(var_4, (((!(12828414933534237923 | 16801950087199336590))))));
    var_19 = (((((531368821535659570 ? 4251100311 : 5618329140175313714))) ? ((max(-22, 1))) : var_1));
    #pragma endscop
}
