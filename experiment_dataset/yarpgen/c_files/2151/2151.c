/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((((((((4294967295 ? 42 : -43))) ? ((((arr_2 [i_0] [i_0]) ? var_12 : (arr_4 [i_1] [6])))) : ((var_13 ? (arr_6 [i_1] [i_0]) : 3007837309))))) ? (((((9223372036854775791 ? 63 : (arr_4 [i_0] [i_1])))) ? ((42 ? var_9 : (arr_2 [6] [6]))) : (((arr_6 [i_0] [i_0]) ? var_12 : var_15)))) : ((((((arr_4 [i_0] [i_0]) ? 9223372036854775807 : var_11))) ? (((arr_4 [i_0] [i_0]) ? var_4 : var_11)) : ((var_12 ? var_7 : 1))))));
                    arr_10 [i_1] [8] [i_0] = ((((((((var_16 ? -9054 : (arr_8 [i_0] [i_1] [i_2])))) ? ((var_14 ? (arr_5 [i_0] [4] [i_2]) : -9223372036854775788)) : (((var_13 ? var_11 : var_3)))))) ? ((((((-9054 ? var_9 : (arr_1 [i_1])))) ? ((var_4 ? 65535 : var_12)) : (((arr_5 [i_0] [i_1] [i_0]) ? var_9 : -42))))) : (((((var_5 ? (arr_3 [i_0] [i_1] [i_0]) : (arr_7 [i_0] [i_1])))) ? (((arr_6 [i_0 - 1] [i_0]) ? -9223372036854775805 : var_14)) : (((var_2 ? var_1 : var_9)))))));
                }
            }
        }
    }
    var_18 = ((((((((-43 ? var_9 : var_0))) ? ((1 ? var_6 : 42)) : ((var_1 ? 108 : var_1))))) ? (((((var_2 ? var_13 : 42))) ? (((var_13 ? var_4 : var_6))) : ((81 ? var_6 : 9223372036854775807)))) : ((((((var_14 ? 1396290444 : 5839005290821191895))) ? ((-21 ? var_3 : 8)) : ((var_5 ? 255 : 127)))))));
    #pragma endscop
}
