/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(1, (4294967295 && var_6)))) ? (var_7 && var_6) : var_7));
    var_13 = ((((((4294967278 && ((max(4, var_2))))))) * ((var_4 ? (((var_8 ? var_10 : 4294967293))) : (var_5 % var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = (arr_4 [i_0]);
                arr_5 [i_0 + 1] [i_0] = (((((((((arr_1 [i_1]) ? (arr_0 [i_0]) : (arr_2 [i_0] [i_1])))) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (arr_2 [i_0] [i_0]) : (((((arr_0 [i_0]) < (arr_4 [i_0])))))));
                arr_6 [i_0] [i_0] = (((((((!(arr_1 [i_0 - 1]))) ? (arr_4 [i_0]) : (((!(arr_1 [i_0]))))))) ? ((((!126) ? (((arr_4 [i_0]) & (arr_1 [i_0 - 1]))) : (((arr_4 [i_0]) + (arr_4 [i_0])))))) : (((arr_3 [i_0] [i_0]) ? 4294967291 : ((4294967288 ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))))));
                var_15 = (max(var_15, (((((((((arr_2 [i_1] [i_0]) + 2147483647)) >> (arr_1 [i_0])))) ? -4 : ((((max((arr_1 [i_1]), (arr_0 [0])))) ? (((arr_3 [8] [i_1]) + (arr_4 [1]))) : (((arr_1 [i_1]) ? 136 : (arr_4 [8]))))))))));
                var_16 = (((arr_2 [i_0] [i_0]) ? 41038 : (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0 + 2]) : (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
