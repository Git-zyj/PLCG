/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [22] &= (19470 + (max(-19478, (arr_1 [8]))));
        arr_3 [i_0] [i_0] = (max((arr_0 [i_0]), (((!(arr_0 [i_0]))))));
        var_16 *= (min((~var_14), (arr_0 [14])));
        var_17 = (max(12511, 5714));
        arr_4 [i_0] = ((1 ? ((~(arr_0 [i_0]))) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((max((arr_0 [i_1]), (arr_5 [i_1]))), 19475));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_1] = (max(((-(max(1, (arr_9 [i_1]))))), ((-((1 ? 13743 : (arr_6 [i_1] [11])))))));
            var_18 ^= ((~(arr_0 [i_2])));
            arr_11 [i_1] [i_1] [i_1] = (((!var_1) ^ (((min((arr_1 [i_1]), var_5))))));
        }
    }
    var_19 = ((~(~var_10)));
    #pragma endscop
}
