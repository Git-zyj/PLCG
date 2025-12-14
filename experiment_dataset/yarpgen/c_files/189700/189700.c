/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = var_6;
    var_16 -= (((var_11 ? (var_2 | var_1) : (((var_11 ? var_9 : var_9))))) & 9183226590016614634);
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_18 = ((((min((min(var_12, var_0)), ((min(81, (arr_1 [0]))))))) ? (((arr_5 [i_0] [7] [i_0]) | ((-(arr_6 [3] [3]))))) : (((~(arr_5 [i_2] [i_1] [6]))))));
                    var_19 = ((-(((!var_1) ? (arr_7 [i_2] [i_2 + 2] [0] [i_0]) : (arr_1 [i_2 + 2])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((-(((((arr_6 [i_0] [9]) && (arr_3 [i_0]))) ? (((var_3 + 2147483647) << (((((arr_8 [i_0] [i_1] [i_2]) + 1397305751)) - 27)))) : ((var_13 ? var_3 : (arr_8 [1] [i_1] [i_2])))))));
                    var_20 = (arr_6 [i_0] [i_1]);
                }
                var_21 -= ((!(((((15277 <= (arr_1 [i_0]))) ? (arr_5 [i_0] [i_1] [9]) : var_1)))));
            }
        }
    }
    #pragma endscop
}
