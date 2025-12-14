/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_1 + 2] = (min(16677079449734468225, ((max((arr_1 [i_0 - 1] [i_0 + 2]), (arr_1 [8] [i_0 + 1]))))));
                var_20 = (((((((max((arr_4 [1] [1]), var_5)) <= (54320 != 65535))))) > (max(-22988, -1))));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_21 = (min(-2921930310096317801, 7));
                    var_22 = (((arr_7 [i_0 - 1] [i_2 + 1] [i_2 - 1] [1]) - (((~(max(-2, -2)))))));
                }
            }
        }
    }
    var_23 = ((1821523479455198664 / (((((max(var_1, 0))) ? 5420810454604028402 : 490081624)))));
    #pragma endscop
}
