/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_3;
    var_16 = (!var_5);
    var_17 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((var_2 ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (((max((arr_2 [18] [i_1] [i_0]), (arr_2 [i_0] [i_1 - 1] [i_1]))))))) : (!var_4)));
                arr_5 [i_0] [i_0 + 2] [i_0] = ((((arr_2 [i_1 - 1] [i_0 + 1] [i_0]) <= var_14)));
                arr_6 [i_0] = (i_0 % 2 == 0) ? ((((((((max(var_2, (arr_3 [i_0] [i_1] [i_1])))) <= (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0 + 2]) : (arr_1 [i_0])))))) != (((((arr_0 [i_0] [i_1 - 2]) ? (arr_2 [i_0] [i_0] [i_0 - 2]) : var_6)) >> (((((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_2 [20] [0] [i_1]))) - 8189661253959453118))))))) : ((((((((max(var_2, (arr_3 [i_0] [i_1] [i_1])))) <= (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0 + 2]) : (arr_1 [i_0])))))) != (((((arr_0 [i_0] [i_1 - 2]) ? (arr_2 [i_0] [i_0] [i_0 - 2]) : var_6)) >> (((((((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : (arr_2 [20] [0] [i_1]))) + 8189661253959453118)) + 556940508844783986)))))));
            }
        }
    }
    #pragma endscop
}
