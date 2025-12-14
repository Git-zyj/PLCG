/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 += ((19055 ? 102 : -304104815));
                            var_20 = ((arr_2 [i_0 - 2]) - (((arr_2 [i_0 - 2]) ? 13067 : 6006847678963545574)));
                            arr_12 [i_0 - 1] [i_0] [i_0] [i_3] [i_0] = ((+(min((arr_6 [i_0 + 1]), (arr_3 [i_0 - 1])))));
                        }
                    }
                }
                var_21 = (max(var_21, (arr_11 [11])));
            }
        }
    }
    var_22 = -31016;
    var_23 = (min(var_23, var_0));

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 = (max(var_24, (((((8653 && (!var_4)))) << var_6))));
        arr_16 [i_4] = -31019;
    }
    #pragma endscop
}
