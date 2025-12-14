/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_7);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ? 76 : ((~(arr_1 [i_0])))));
        var_13 = (max(var_13, ((((-(max((arr_1 [3]), var_0))))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        var_14 = ((((((arr_4 [i_1 + 2] [i_1 + 2]) == 2181158025)) ? 1410085820 : (arr_3 [i_1 + 2]))) << (((min(var_4, (arr_3 [i_1 + 1]))) + 4329215629441409680)));
        arr_5 [i_1] [i_1 + 1] |= ((((min((arr_3 [i_1 - 3]), (arr_3 [i_1 + 1])))) / 63));
        var_15 = (arr_4 [i_1 - 3] [i_1 - 3]);
        var_16 = (arr_4 [i_1 + 1] [8]);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_17 = (((~(arr_7 [i_3]))));
                var_18 = 1423708650;
            }
        }
    }
    #pragma endscop
}
