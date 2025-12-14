/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((((max((((-3306 ? -3321 : var_7))), (var_14 + -3316)))) ? ((var_18 * (((max(var_16, var_9)))))) : 22));
    var_20 |= var_7;
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (arr_4 [i_0 - 4] [i_0 - 3])));
                var_23 = (min(var_23, ((((((((4202395771 | (arr_5 [i_0] [2]))) > (((62 ? (arr_2 [i_0] [i_0]) : (arr_4 [7] [i_1]))))))) + ((var_0 / (arr_3 [i_1]))))))));
                arr_6 [i_0] [i_1] = ((67 ? (((var_0 * var_1) ? ((32767 ? -32754 : var_4)) : (min(-1806400046, (arr_2 [i_1] [i_0 - 3]))))) : ((((((-(arr_3 [i_0])))) || (arr_3 [i_0 - 3]))))));
                var_24 = (((((var_17 % var_1) ^ (-56 != 5075819030764302452))) & (((var_14 ? -11176 : ((-(arr_3 [i_0]))))))));
                var_25 = (max(var_25, ((max((((arr_3 [i_0 - 2]) ? (arr_4 [i_0 - 2] [i_1]) : (arr_0 [i_0 - 2]))), ((-(arr_5 [i_0 - 2] [i_0 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
