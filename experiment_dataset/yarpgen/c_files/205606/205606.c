/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min(-5799989896088772045, (((((2096640 ? 2096640 : (arr_0 [3]))) * (((((arr_0 [i_0]) <= 30255)))))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_17 += (!30250);
            var_18 = ((((((arr_0 [i_1]) || (arr_0 [i_0])))) % (var_4 + var_11)));
        }
    }
    var_19 = var_2;
    var_20 = (max((~var_14), ((max(4294967295, (var_14 && var_1))))));
    #pragma endscop
}
