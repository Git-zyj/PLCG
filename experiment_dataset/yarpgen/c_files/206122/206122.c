/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 >= (max(((var_15 >> (var_7 + 16106))), ((min(0, 32760)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_18 |= ((((((arr_2 [i_1 - 3] [i_1 - 1] [i_1 - 2]) ? (arr_1 [i_1 + 1]) : 1))) ? (((((arr_2 [i_1 - 3] [i_1 - 3] [i_1 - 1]) > (arr_2 [i_1 - 3] [i_1 + 1] [i_1 - 3]))))) : (min((arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 3]), (arr_1 [i_1 + 1])))));
                arr_5 [i_0] [8] = (min(((var_7 ? (arr_4 [i_1 - 3] [i_1]) : (arr_4 [i_1 - 1] [i_1]))), (arr_0 [i_1 - 1])));
                var_19 = (min(var_19, ((((((min(var_9, 1)))) ? (((((-1 ^ var_14) || (-2147483647 - 1))))) : 1426014723)))));
            }
        }
    }
    #pragma endscop
}
