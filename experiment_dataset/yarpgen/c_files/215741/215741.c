/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [0] [i_1] = (((((var_2 ? 13280492767387465187 : 18446744073709551615))) < ((var_4 ? (arr_0 [i_0 + 1]) : (arr_1 [i_1])))));
                arr_5 [i_0] = (18446744073709551615 ^ 0);
                arr_6 [i_0] [i_0] = var_6;
                arr_7 [i_0] = ((((((arr_2 [i_0]) + 5781427760617275988))) ? (arr_2 [i_0]) : 16871929276303417709));
                arr_8 [i_0] [i_1] = ((!((var_2 <= (min(9831303701523325747, (arr_0 [i_0])))))));
            }
        }
    }
    var_13 = var_12;
    var_14 = (((var_0 - (max(2998971023271742768, var_0)))) - (min((min(var_8, var_10)), 18446744073709551597)));
    #pragma endscop
}
