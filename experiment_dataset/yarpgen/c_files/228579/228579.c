/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_5, ((-(arr_1 [i_0 + 1])))));
        var_18 -= (min((min((arr_1 [i_0 - 1]), (224 / var_11))), var_3));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_19 -= ((~(arr_1 [10])));
            var_20 = var_15;
            var_21 = (min((max((max(var_2, (arr_1 [0]))), 3153029647)), ((((arr_0 [i_0 - 1] [i_0]) < (arr_0 [i_0 - 1] [i_0]))))));
        }
    }
    #pragma endscop
}
