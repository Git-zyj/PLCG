/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((1 >> var_9) ? var_0 : (((min(1, var_8)))))));
                arr_8 [i_0] = (((24248 && 2147483647) ? ((((!(arr_0 [i_0 - 1]))))) : (max(2230796579, (arr_2 [i_0 - 1] [i_0 + 1])))));
                arr_9 [2] [2] [i_1] = -397577084035992401;
            }
        }
    }

    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        arr_13 [i_2] = ((((!4294967295) * (max(18953, 10)))));
        var_19 = (((var_9 || (arr_4 [i_2 + 2] [i_2 + 1]))));
        var_20 = (min(var_20, ((max((min(var_16, (arr_1 [i_2 - 1]))), (((var_13 && (arr_10 [i_2 + 2] [2])))))))));
    }
    var_21 = min(((max(65535, 8589934591))), var_1);
    var_22 = ((((((var_6 ? 54888 : 2790))) ? (var_12 & var_0) : 19004)) ^ (var_3 - var_7));
    #pragma endscop
}
