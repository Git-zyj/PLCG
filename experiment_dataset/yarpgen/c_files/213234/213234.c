/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = var_9;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_17 = ((-(arr_3 [i_0] [i_0])));
            var_18 = (~var_9);
            var_19 = -27867;
        }
        var_20 = 27887;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((((arr_6 [i_2]) || 879162024569192264)))));
        var_22 = (min(((min((min(31889, 1)), -27867))), (arr_5 [i_2] [i_2])));
    }
    var_23 = ((-119 ? var_10 : (min((~85), 154))));
    var_24 = (((var_2 ? (!9957) : var_10)));
    #pragma endscop
}
