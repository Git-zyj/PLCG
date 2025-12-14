/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!((min(var_4, 573665056))))) ? (min(2336255448, var_0)) : ((((((min(var_12, 13863))) && 13856))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] = (((((0 ? 115 : 1336454293)))) ? var_16 : (min((((arr_0 [i_0]) ? 115 : var_13)), 0)));
                    var_21 *= 5010;
                    var_22 = (min(var_22, ((223 ? ((((101 < (~5))))) : 1958711847))));
                    var_23 = (min(var_23, ((((((-(arr_3 [i_2] [4])))) ? (((!(arr_0 [i_0])))) : (((((573665056 >> (var_18 + 7383)))) ? (arr_1 [i_0]) : (!29))))))));
                }
            }
        }
    }
    #pragma endscop
}
