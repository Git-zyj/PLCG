/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (((arr_4 [i_1 + 2]) ? (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 4]))) : (((arr_4 [i_1 + 1]) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))));
                var_20 = ((((max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 2])))) ? (arr_4 [i_0 - 1]) : -1));
                var_21 = (max((!-1), (max((arr_1 [i_0]), 65408))));
                var_22 = (max(var_22, (((((((arr_4 [i_0 + 1]) || (!14))))) >= ((~(min(18446744073709551606, 9))))))));
            }
        }
    }
    var_23 = (((var_12 && (~9))) ? ((min(var_15, var_1))) : (((var_0 ? var_15 : var_11))));
    var_24 = (max(var_24, var_2));
    var_25 = var_7;
    #pragma endscop
}
