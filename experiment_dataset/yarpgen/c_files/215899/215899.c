/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = 1752960319064235234;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 *= (((arr_7 [i_0] [i_1] [i_0]) << ((((-112 ^ 29) <= (!6480))))));
                    arr_10 [i_0] = ((((arr_0 [i_1]) ? (arr_0 [i_1]) : -1318584227327612230)) + ((((arr_0 [i_0]) / (arr_0 [i_0])))));
                    var_11 = ((~((59055 ? ((~(arr_6 [i_2]))) : (((min((arr_9 [i_2] [i_1] [i_2] [i_0]), var_9))))))));
                    var_12 = (min(var_12, (((!((min(59055, 46371))))))));
                }
            }
        }
    }
    var_13 = var_7;
    var_14 = (min(((((((16693783754645316381 ? -94 : 1)) + 2147483647)) << ((((var_5 ? var_3 : var_9)) - 9386479649972029753)))), ((((min(var_7, 93)) < ((var_1 ? var_1 : var_7)))))));
    #pragma endscop
}
