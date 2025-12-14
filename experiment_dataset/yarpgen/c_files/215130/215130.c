/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_0 - 2]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_2] = (!0);
                            var_21 = (((((((arr_6 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_2] [i_0] [i_3]) : 1)))) ? (arr_4 [i_3 + 3] [i_2 + 1] [i_2 - 3] [i_0 + 1]) : (((((var_2 > (arr_8 [i_2] [i_0 - 1] [i_0 - 1])))) | (arr_8 [i_0] [i_1] [i_1])))));
                            var_22 = ((((min(8388607, (arr_7 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_3 + 1])))) - -255));
                            var_23 = (((arr_1 [i_0] [i_1]) ? (((10064335592317305374 && 18446744073709551615) ? (min((arr_0 [i_0]), (arr_2 [i_3] [i_1]))) : (arr_1 [i_0] [i_1]))) : (((-(arr_0 [i_2 - 1]))))));
                        }
                    }
                }
                var_24 = (max(11, (((~(arr_6 [i_0 - 1] [i_0 - 2] [i_0 + 1]))))));
                var_25 = (((((var_12 % var_5) < (arr_8 [i_0] [i_1] [i_1]))) ? (((((~(arr_8 [i_0 + 1] [i_0] [i_0])))) ? (arr_1 [i_0 - 2] [i_0 + 1]) : var_9)) : (arr_0 [i_0])));
            }
        }
    }
    var_26 = ((((var_17 ? var_5 : -6))));
    #pragma endscop
}
