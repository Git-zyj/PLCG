/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    var_17 = (((((!(var_1 ^ var_3)))) / ((((var_0 | var_0) || (var_15 * var_13))))));
    var_18 = ((((((!(var_7 != var_4))))) > (((var_1 + var_10) % var_13))));
    var_19 = (((((var_1 < var_15) * (var_10 / var_4))) != var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [13] = (((((arr_4 [i_0] [3]) >> ((((arr_1 [9] [i_1]) && (arr_3 [1])))))) <= ((((((-(arr_4 [i_0] [i_1]))) != (arr_3 [i_0])))))));
                var_20 = (((arr_2 [i_0]) | ((((((((arr_2 [12]) >= (arr_4 [7] [i_0]))))) != (((arr_3 [i_0]) & (arr_4 [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] [i_0] = (arr_2 [i_0]);
            }
        }
    }
    #pragma endscop
}
