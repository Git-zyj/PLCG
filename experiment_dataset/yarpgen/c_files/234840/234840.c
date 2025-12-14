/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 *= (((((3696818969461384921 ? 4294967295 : 1))) ? 0 : 8));

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_19 = ((-(arr_0 [i_1 + 1])));
            var_20 = (((arr_4 [i_1 + 1] [i_1 + 1]) ? (((-(arr_3 [i_1] [i_0])))) : 4294967275));
            var_21 = (arr_4 [i_0] [i_0]);
        }
        var_22 = (min(var_22, (((~(arr_3 [i_0] [i_0]))))));
        var_23 = ((~(arr_2 [i_0])));
        var_24 ^= (arr_0 [i_0]);
    }
    var_25 = var_4;
    var_26 = (~var_0);
    #pragma endscop
}
