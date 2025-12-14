/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(((var_15 >= (arr_4 [7] [7]))), ((!(arr_5 [i_1] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (max(((((arr_1 [1] [i_2]) ? (arr_1 [i_4] [i_4]) : var_17))), (((arr_1 [i_1] [i_1]) ? 0 : var_3))));
                                var_19 = ((((!(arr_12 [i_1] [i_1])))) % var_1);
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] = ((((min((arr_15 [8] [i_1] [i_1]), (arr_3 [i_0])))) ? (~var_3) : var_12));
            }
        }
    }
    var_20 = (min(var_20, ((max((((var_9 == var_0) ? ((5205471927501844972 >> (var_12 - 5261414119203985110))) : (var_6 | 215861921272139515))), ((min(2815810865, var_0))))))));
    var_21 = ((((((5205471927501844959 < (((var_0 ? var_5 : 244))))))) >= (1 * var_6)));
    #pragma endscop
}
