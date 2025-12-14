/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [5] [i_1] [i_1] = ((((((((arr_2 [i_0] [13] [9]) == -6316067905594327262)) ? var_8 : ((max(var_9, 9)))))) ? ((((!((!(arr_3 [i_0] [i_1] [9]))))))) : (arr_2 [i_0] [i_0] [11])));
                var_12 = ((-(~-2135078744)));
                arr_5 [5] = (((-(arr_1 [0]))));
            }
        }
    }
    var_13 = (max(((-((2097151 ? 1403697302 : 2097148)))), 2147483647));
    var_14 = ((~(min(((1306557167 << (var_4 - 18263))), var_10))));
    var_15 = var_4;
    #pragma endscop
}
