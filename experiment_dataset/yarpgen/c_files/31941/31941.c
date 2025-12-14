/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(-27197, -var_9));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = (((((~(~27205)))) | (((max(0, (arr_2 [i_0]))) & (((max(27205, var_7))))))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_13 = ((28017 && (((arr_0 [i_0]) && (arr_0 [i_1 - 2])))));
            var_14 -= (!(((-27192 ? 33409823 : 121))));
            var_15 = ((!(((var_4 ? (arr_5 [i_1] [i_0 - 1]) : 65535)))));
            var_16 = (-1940543336 != 30434);
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_17 = 6114353895688473546;
            var_18 = (arr_4 [i_0 + 1] [i_0 + 1] [i_0]);
        }
        var_19 ^= (arr_4 [i_0] [i_0] [5]);
    }
    var_20 = -27192;
    #pragma endscop
}
