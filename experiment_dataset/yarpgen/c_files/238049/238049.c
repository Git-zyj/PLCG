/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (739703806 / -var_12);
    var_19 = (((!-4327212291367726355) || 45));
    var_20 = (max(var_14, 586224515));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((+((min((max((arr_0 [i_0]), (arr_0 [i_0]))), (!var_9))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = ((((arr_1 [0] [i_1]) >> (arr_0 [i_1]))));
            var_22 = (!var_5);
            var_23 += -1;
        }
        var_24 *= 111;
        arr_7 [i_0] = (arr_0 [i_0]);
    }
    #pragma endscop
}
