/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~(arr_0 [i_0]));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_1] [i_0] [i_1] = (arr_3 [i_1] [i_1]);
            arr_7 [i_0] [i_1] = (((~(arr_0 [i_1]))));
            arr_8 [i_1] [i_1] = (max((~-111), (((-77 % 14045779756670286533) ? -111 : -1))));
            arr_9 [i_1] [i_1] [i_1] = ((((~(arr_5 [i_1]))) | (~13)));
        }
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_12 [i_2] [i_2 + 1] = (i_2 % 2 == zero) ? ((min((arr_11 [i_2]), ((((((((arr_11 [i_2]) + 2147483647)) << (4294967295 - 4294967295)))) ? -11231 : (arr_11 [i_2])))))) : ((min((arr_11 [i_2]), ((((((((((arr_11 [i_2]) - 2147483647)) + 2147483647)) << (4294967295 - 4294967295)))) ? -11231 : (arr_11 [i_2]))))));
        var_11 = (max(-31, -31));
        arr_13 [i_2] = (((((arr_11 [i_2]) & 18446744073709551603)) % (arr_10 [i_2 - 1])));
    }
    var_12 = ((((var_3 ? 2458135577 : var_10))));
    var_13 = var_0;
    #pragma endscop
}
