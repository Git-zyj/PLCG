/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_4, var_6));
    var_20 = min(var_7, var_11);
    var_21 = var_7;
    var_22 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_23 = ((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))));
                var_24 ^= (arr_3 [i_0] [i_1] [i_1]);
                var_25 = ((((max(-2097152, 2097151))) || var_7));
                var_26 = ((((((var_15 < (arr_3 [i_0] [i_1] [i_1]))))) - (max((max((arr_0 [i_1] [i_0]), (arr_2 [i_1]))), (arr_2 [i_1])))));
                var_27 = (max(var_27, 10979));
            }
        }
    }
    #pragma endscop
}
