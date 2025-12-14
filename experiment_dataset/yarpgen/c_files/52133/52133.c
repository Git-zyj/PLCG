/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_3 [i_0] [i_1] [i_1]) ? (!var_15) : ((21764 ? 1934992730 : (arr_2 [i_0] [i_0])))))) ? (max((-2147483647 - 1), var_18)) : (((arr_1 [i_0] [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : var_4))));
                var_20 = (((arr_0 [i_1] [i_0]) ? var_16 : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [13])))));
                var_21 = -var_3;
                var_22 = ((((!(arr_2 [i_0] [i_1]))) ? (((!var_18) & ((var_14 ? var_7 : var_11)))) : (((!(((var_0 ? (arr_0 [i_1] [i_0]) : var_10))))))));
                var_23 = ((((2147483647 ? ((((arr_1 [i_1] [i_0]) ? 240 : 65535))) : 853438769))) ? 4294967295 : (!0));
            }
        }
    }
    #pragma endscop
}
