/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = (121 <= -522228995);
        var_12 = (((arr_1 [i_0 + 1] [i_0 + 1]) >= (((((arr_2 [i_0]) / var_0)) / -1267183964597818224))));
    }
    var_13 = ((((((min(var_8, -1417440734))) ? (1417440706 >= var_5) : var_4)) % var_5));
    var_14 = ((~((min((var_1 >= var_3), var_5)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_15 &= var_8;
                arr_8 [i_1] [i_1] = (max(var_3, (((-(arr_1 [i_1] [i_2]))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_16 = (((arr_0 [i_2] [i_4]) ? ((1 ? 2768339285561535527 : (arr_4 [i_1] [i_3]))) : ((((!(arr_4 [i_1] [i_1])))))));
                            var_17 = (((((-((var_9 - (arr_11 [i_1] [1] [1] [6] [0] [i_4])))))) ? ((((-(arr_12 [i_1]))))) : (min(var_1, (arr_10 [i_1] [10] [1])))));
                            arr_13 [i_1] [5] [8] [i_4] [i_4] = ((9695 || ((!(arr_11 [i_4] [8] [i_3] [i_2] [i_1] [8])))));
                        }
                    }
                }
            }
        }
    }
    var_18 *= ((((((121 == var_5) ? ((var_0 << (var_2 - 94))) : (var_0 - var_10)))) ? ((-(max(-1267183964597818224, var_2)))) : -1267183964597818229));
    #pragma endscop
}
