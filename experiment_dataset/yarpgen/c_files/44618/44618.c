/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (arr_1 [6]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = ((var_14 + ((15794719259561881193 ? 87 : (!7833906622214697790)))));
                                var_20 = (min(var_20, ((((var_0 ? 15794719259561881193 : 8725724278030336))))));
                                arr_14 [i_0] [i_0] [3] [i_0] [i_0] [0] [i_0] = (((((var_1 || (arr_13 [i_4])) ? (arr_5 [i_0] [i_1] [i_0]) : var_1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_1;
    var_22 = var_11;
    #pragma endscop
}
