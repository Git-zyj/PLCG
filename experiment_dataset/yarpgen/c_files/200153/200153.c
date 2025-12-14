/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_3));
    var_17 = ((((((((var_12 ? 133122269 : 10377880753228229801))) ? -353128123 : (var_7 | var_5)))) && var_5));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 + 4] [i_0] = ((!((min((arr_6 [i_1 + 1] [i_1 - 1] [i_0 - 2] [i_0]), (arr_6 [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_0 + 2]))))));
                    var_18 = (((((-(arr_6 [i_0] [i_0] [i_0 - 2] [i_0 + 4])))) ? (min((arr_6 [i_0] [i_0] [i_0 - 1] [i_0 + 4]), (arr_6 [i_0 - 3] [i_0] [i_0 - 1] [i_0 + 1]))) : (min(2, (arr_6 [i_0] [7] [i_0 - 1] [i_0 + 2])))));
                    arr_9 [i_0] [i_1] [i_1] = (arr_7 [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
