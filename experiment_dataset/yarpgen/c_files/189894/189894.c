/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 *= ((((min(var_6, -30))) ? -50 : (~9223372036854775807)));
            var_18 -= (~var_3);
        }
        var_19 = var_11;
        var_20 = var_1;
    }
    var_21 = (min((((!(~var_1)))), var_10));
    #pragma endscop
}
