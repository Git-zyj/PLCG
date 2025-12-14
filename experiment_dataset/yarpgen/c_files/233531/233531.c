/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] = (min((((((min(var_1, -1)) + 9223372036854775807)) >> ((((var_3 ? 87 : (arr_2 [i_0] [i_1]))) - 30)))), 4032));
                            var_17 = (-32767 - 1);
                        }
                    }
                }
                var_18 = (min((max(((max(-32746, 125))), (((arr_7 [i_0] [i_0 + 2] [i_0 - 2]) ? 63 : (arr_8 [i_0 + 2] [i_0 + 2] [10] [17] [16] [i_1]))))), ((min(((((arr_5 [i_0] [i_1] [i_1]) <= -36))), (max(-32738, var_11)))))));
            }
        }
    }
    var_19 = var_5;
    var_20 = var_10;
    #pragma endscop
}
