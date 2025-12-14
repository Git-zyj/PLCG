/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((max((((((var_6 ? var_14 : var_1)) < (max(var_11, 16383))))), (((~var_3) ? (min(var_6, var_11)) : var_13)))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = (max(var_17, ((((~(arr_4 [18] [18]))) ^ ((((18446744073709535224 && (!127)))))))));
            var_18 = (max(var_18, ((((((~(~156)))) ? var_7 : ((~(max(4194304, 1828902465401407890)))))))));
            var_19 = min(29207, ((((min(var_7, (arr_4 [i_0] [i_0])))) ? 15794 : (~var_3))));
        }
        var_20 = var_9;
    }
    #pragma endscop
}
