/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((((((var_1 ? var_7 : var_9))) || ((min(var_0, var_10)))))) >= (~var_6)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((((max((min(29, 128)), 18446744073709551615))) ? 72 : (((arr_1 [i_0]) ? 90257445352776095 : (arr_1 [i_0])))));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_14 = (min(var_0, (arr_2 [i_1 - 1] [i_0])));
            var_15 = ((((((arr_5 [15] [i_1] [i_0]) > (arr_0 [i_0] [i_1 - 3]))) ? 18446744073709551615 : (arr_3 [i_1 + 3]))));
            var_16 = (min(var_16, ((min((arr_3 [i_1]), (max(183, 84)))))));
        }
        var_17 = 1886977577345427403;
    }
    #pragma endscop
}
