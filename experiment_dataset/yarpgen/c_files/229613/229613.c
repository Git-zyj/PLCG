/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    var_15 = var_3;
    var_16 = 827974315668675794;
    var_17 ^= (var_11 - ((((var_10 && (((var_6 ? var_3 : var_9))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = max((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0 - 2] [i_0 - 2] [i_0 + 1]));
                arr_5 [i_0 - 1] [i_0] [i_0] = (((((((arr_1 [i_1]) && (arr_1 [i_0]))))) > ((-(arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                var_18 = ((((((((arr_0 [i_0] [i_1]) ? (arr_1 [i_0]) : (arr_2 [i_1] [14]))) + 9223372036854775807)) << (((arr_3 [3] [i_0 - 1] [3]) - 4375259975375385803)))) & (((arr_0 [i_0 + 1] [i_0 - 1]) | (arr_0 [i_0 + 1] [i_0 - 2]))));
            }
        }
    }
    #pragma endscop
}
