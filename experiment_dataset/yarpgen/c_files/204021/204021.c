/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 17370292279612299338;
    var_17 = (min(var_17, var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(1632942015, 1));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] = (max(((var_15 ? var_13 : (arr_3 [10] [i_0 - 1]))), (((((max(17370292279612299336, 17370292279612299343))) || (((60900 ? var_4 : 17370292279612299332))))))));
                            var_19 -= (min((max(var_9, (arr_3 [i_0 + 1] [i_0 + 1]))), ((min((arr_3 [i_0 - 1] [i_0 - 1]), var_1)))));
                        }
                    }
                }
                var_20 -= (((max(var_1, (min(-21, (arr_8 [4] [i_1 - 1] [i_1 + 1] [2] [i_0] [4])))))));
                arr_12 [i_0] [i_0] = ((((~((-1010866249 ? var_13 : 65521)))) + ((((~17370292279612299345) != var_7)))));
                var_21 = (min((arr_5 [i_0 - 1]), ((29623 ? ((3998269247 ? 17370292279612299355 : 17370292279612299336)) : (arr_0 [i_0 - 1] [i_0])))));
            }
        }
    }
    var_22 = var_8;
    #pragma endscop
}
