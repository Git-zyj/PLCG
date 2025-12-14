/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -79;
    var_19 = ((((((-7 ? var_14 : var_11))) ? (((max(54, -19405)))) : var_8)) > (((var_17 ? ((var_15 ? var_10 : 19405)) : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] = (((((((var_5 ? var_16 : 49152)) + (((var_15 ? (arr_4 [i_0] [i_1] [i_2]) : 32917)))))) && ((((-120 ? 8338148524811118101 : -117))))));
                            var_20 = ((((((arr_10 [13] [3] [13] [i_1 - 1]) ? (arr_7 [i_1] [i_1] [12]) : (arr_10 [i_1] [i_1] [i_1] [i_1 - 1])))) ? (((arr_10 [i_1] [i_1] [5] [i_1 - 1]) ? (arr_8 [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_6 [i_1] [i_1] [1]))) : -32767));
                            var_21 = ((min((!1073741823), var_11)));
                            arr_12 [i_0] [3] [i_0] [i_0] [i_0] = ((!(((var_12 ? 38779 : (arr_3 [i_0 - 2]))))));
                        }
                    }
                }
                arr_13 [10] [10] [i_1] = 644531764;
            }
        }
    }
    #pragma endscop
}
