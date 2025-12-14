/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((!(((arr_0 [i_1]) && (arr_2 [i_0 + 2]))))))));
                arr_5 [9] [i_0] = (min((((1023 <= (arr_1 [i_0])))), ((((((arr_1 [i_0]) * (arr_4 [i_0 + 4])))) ? (arr_4 [14]) : (arr_0 [i_0])))));
                var_13 = min((((3156169393 ? (arr_3 [i_0] [i_0 + 1] [i_0 + 3]) : 268435455))), 0);
            }
        }
    }
    var_14 = ((-1 ? 7898 : (min(1027, (!2559505704)))));
    var_15 = (min(var_15, (((((min(((min(var_4, -16))), (min(var_10, 18446744073709551615))))) ? (max(19, ((var_2 ? var_0 : 0)))) : -268435469)))));
    var_16 += ((!((max(var_0, var_9)))));
    #pragma endscop
}
