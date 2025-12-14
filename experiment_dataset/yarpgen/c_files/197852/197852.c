/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 |= max((((202 | 202) ? (max((arr_0 [1] [i_0]), 53)) : (max(var_4, (arr_1 [i_0]))))), ((((var_14 > 202) % ((33 ? (arr_2 [i_0]) : 207))))));
        arr_3 [i_0] = (max((((!(arr_0 [i_0] [i_0])))), var_14));
    }
    var_18 = (max((max((!53), (max(var_12, var_14)))), ((((max(var_2, var_4)) <= (var_4 ^ 199))))));
    var_19 = ((((((var_12 | var_1) > (((54 ? 54 : 207)))))) | ((((max(var_1, var_3))) ? var_2 : (!var_16)))));
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_12 [i_1] [i_2] [8] [i_3] = ((((max(((((arr_11 [i_1] [i_1 + 2]) ? 202 : (arr_6 [i_2] [i_3])))), ((var_14 / (arr_9 [i_1] [i_1] [i_1] [i_1 - 1])))))) ? ((((max(var_16, var_10)) / (((max(var_7, 55))))))) : (max((arr_6 [i_1 + 2] [i_1 + 4]), ((84 ? var_8 : (arr_9 [i_1] [i_1 + 1] [1] [i_3])))))));
                    var_21 = (210 ? (((((arr_1 [i_1]) - (arr_4 [i_2]))))) : (((((max((arr_11 [i_1 - 1] [7]), 53))) == (max((arr_4 [i_1 + 2]), 54))))));
                }
                var_22 += (((arr_2 [i_2]) ? ((((((((arr_10 [i_2] [i_1] [i_1 - 1]) + 2147483647)) << (((arr_0 [16] [i_2]) - 1188334202))))) ? var_8 : ((((arr_0 [i_1 + 4] [i_2]) ? 45 : var_3))))) : ((max(var_10, (var_6 % var_11))))));
                var_23 = (((var_5 ? ((max(201, 172))) : 56)));
            }
        }
    }
    #pragma endscop
}
