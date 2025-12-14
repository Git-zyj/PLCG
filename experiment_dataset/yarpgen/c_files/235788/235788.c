/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (max(var_20, 0));

                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_1 + 1] [i_2 - 1] [i_2] = (max(((((min(1273506621, var_19))) ? 1 : 60058)), ((max(1, 0)))));
                    arr_10 [i_2] [16] [i_2 - 3] = (((((((min(var_12, -32758))) ? (((arr_1 [10] [10]) ? var_16 : 3520321004)) : (-32767 - 1)))) || -32758));
                }
                var_21 = 1;
                arr_11 [i_1] = (((arr_1 [i_0] [i_1]) ? (max((max((arr_8 [1] [i_1 + 1]), 15246075894984043611)), 1)) : ((max((arr_0 [i_1 + 1] [i_1]), (arr_5 [i_1]))))));
                var_22 = (((max((min(13599, 3200668178725508005)), (var_7 <= 27863))) % ((((((arr_3 [i_0 - 1] [i_0 - 1] [i_0]) ^ var_4))) ? (max(var_17, 3021460674)) : (arr_2 [i_0])))));
            }
        }
    }
    var_23 = (min(var_23, ((((((!var_13) / (~var_8)))) <= (min((max(1, 3455341614)), (min(var_9, 335395612))))))));
    var_24 = -813582235394899895;
    #pragma endscop
}
