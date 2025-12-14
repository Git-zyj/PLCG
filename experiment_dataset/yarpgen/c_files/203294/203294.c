/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (-((((((min(var_13, 16)))) > (max(1, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_15 += ((-(-1900266332 && var_8)));
                arr_4 [i_1] = ((((((var_6 ? var_7 : 16)))) ? -77 : (13628 / 8951127509715928651)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_16 = ((((((74 ? -1 : 1)))) ? -5814475936306530206 : (min(var_1, var_10))));
                            arr_10 [i_0] [i_1 - 3] [i_2 + 1] [i_3 + 1] = -5241;
                            arr_11 [3] [i_2] [i_0] = ((!((min(479482532, 8951127509715928652)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
