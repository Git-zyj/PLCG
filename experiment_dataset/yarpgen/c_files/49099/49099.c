/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((var_7 >= var_3), (min(((var_11 ? var_3 : var_6)), ((var_8 ? var_2 : var_12)))));
    var_17 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (((((arr_3 [i_1] [i_1 - 3] [i_1 - 1]) ^ var_1))) ? (((arr_4 [i_1 - 4] [i_1 - 4] [i_1 - 3]) ? (arr_4 [i_1 - 4] [i_1 - 4] [i_1 - 3]) : (arr_4 [i_1 - 4] [i_1 - 4] [i_1 - 3]))) : (min((arr_2 [i_1 - 4] [4]), var_11)));
                var_19 *= ((!var_8) - var_15);
                arr_5 [i_0] [i_1] |= (-(min((((arr_4 [i_0] [i_1] [11]) ? (arr_0 [i_0] [i_1]) : var_0)), (((arr_2 [i_0] [i_0]) ? var_3 : (arr_3 [i_1] [i_1] [i_1]))))));
                arr_6 [i_0] [i_0] = (((+(min((arr_4 [i_0] [i_1] [i_1]), (arr_0 [2] [15]))))) >> (((arr_3 [i_0] [i_0] [i_1]) - 2909228223)));
            }
        }
    }
    #pragma endscop
}
