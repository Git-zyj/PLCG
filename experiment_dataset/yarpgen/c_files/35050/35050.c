/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((-127 ^ ((var_6 ? var_5 : 1))))));
    var_15 = ((((var_0 ? ((max(511, 1))) : 18446744073709551615))) ? var_4 : (min(-var_4, -1941494160)));
    var_16 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((var_7 ? 931001334380846486 : 1));
        arr_5 [i_0] = ((21331 < (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_17 = (arr_9 [i_1]);
            var_18 = ((17515742739328705129 ? 576460717943685120 : 62274));
            arr_12 [i_1] [i_1] = (arr_9 [i_1]);
        }
        arr_13 [i_1] = (arr_11 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
