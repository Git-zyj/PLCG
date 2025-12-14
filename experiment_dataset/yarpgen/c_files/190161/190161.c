/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_6) ? -45 : (-45 || 55)));
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0 + 4] [i_1] [i_0 + 4] = (((max(1, (arr_0 [i_0] [i_1]))) + ((44 - (arr_0 [i_0 - 1] [i_0 - 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [2] [2] [i_2] [i_3] [i_3] = ((((var_2 ? (arr_6 [i_0] [i_2]) : ((1515617177 ? 52 : 1515617167)))) | (((((arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0]) > (arr_0 [i_0] [i_2])))))));
                            var_12 -= (((arr_8 [i_3] [6] [i_2] [i_0]) ? var_2 : ((((1 >> (arr_1 [i_0]))) ^ 219))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
