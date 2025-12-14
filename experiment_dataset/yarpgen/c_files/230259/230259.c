/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max((!var_11), (min((-16624 >= -1), (var_3 || var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [4] = (min(var_5, (arr_6 [i_0] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] = (arr_10 [i_0]);
                            arr_15 [i_0] [i_0] = ((65535 < ((((max(226135034, -622867448)) >= var_8)))));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((((-1 ? var_6 : ((max(var_10, var_9))))) - ((3 ? 0 : 1))));

    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_16 *= ((!(((~(min((arr_16 [1]), var_7)))))));
        var_17 = (min(var_17, (((41687 ? (((arr_17 [i_4]) ? ((var_0 ? 0 : 1)) : ((min(248, -85))))) : ((min((arr_16 [i_4 + 1]), (arr_16 [i_4])))))))));
    }
    var_18 = var_4;
    #pragma endscop
}
