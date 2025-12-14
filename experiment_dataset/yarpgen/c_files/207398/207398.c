/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0] [4]);
        var_12 = (max((arr_0 [i_0] [i_0]), (var_6 | var_0)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_0] [i_0] &= ((min(-127, 1411330457584918302)));
            var_13 *= min((max((17035413616124633313 | 1), (1 & -120))), ((max((max((arr_5 [13] [i_1] [i_1]), 213)), 483408384))));
        }
        arr_9 [i_0] [i_0] &= (min(61, 3343858486));
    }
    var_14 = ((((((-112 | var_8) ? (var_11 ^ -122) : var_10))) ? ((var_0 ? (var_11 | var_4) : ((var_8 ? 4294967293 : var_11)))) : var_10));
    #pragma endscop
}
