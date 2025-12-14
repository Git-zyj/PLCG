/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_1;
    var_11 = ((1928300959 ? 125 : (min(var_1, 60))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = arr_2 [i_0];
                arr_6 [i_1] = (min((((arr_3 [i_0] [i_0 - 1] [4]) ? ((min(var_4, (arr_0 [i_1])))) : ((var_5 ? (arr_4 [i_0] [i_1] [i_1]) : var_3)))), ((((arr_3 [i_0] [i_1] [i_1]) <= (arr_1 [i_0] [i_0]))))));
            }
        }
    }
    #pragma endscop
}
