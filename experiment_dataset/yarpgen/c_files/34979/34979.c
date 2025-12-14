/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 += (var_11 || (((~((0 ? 0 : -12452))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((var_4 - ((((arr_6 [i_0] [i_1] [i_0] [i_3]) < ((((arr_2 [i_0] [i_1] [i_3]) || (arr_0 [i_3])))))))));
                            arr_11 [i_0] [i_3] [i_2] [i_1] [i_2] = ((((var_1 ? ((12452 ? -12452 : 18446744073709551589)) : var_11)) - (((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]) ? 0 : 10425637958737070298))))));
                        }
                    }
                }
                var_17 = (min(var_17, (min(var_6, 511))));
                var_18 += ((~((((((((arr_1 [i_0]) < 0)))) >= (min(1852997090, -2024)))))));
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
