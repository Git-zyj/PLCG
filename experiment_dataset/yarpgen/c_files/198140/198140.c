/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_16 = ((~(((!((max((arr_2 [i_0]), 1023))))))));
        var_17 = ((max(((((arr_1 [i_0]) || (arr_1 [i_0 + 1])))), ((0 ? (arr_1 [i_0]) : 1)))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0 + 1] = (((53279 / var_9) > (arr_4 [i_0 + 1] [i_1 + 1])));
            var_18 = (max(var_18, ((((arr_3 [i_0 - 1]) ? ((-(arr_2 [i_1]))) : ((var_6 ? 961980086 : (arr_3 [i_1]))))))));
            var_19 &= ((-1900943325 ? 536346624 : (arr_4 [i_1] [i_1 + 1])));
        }
    }
    var_20 = (max(var_20, var_9));
    #pragma endscop
}
