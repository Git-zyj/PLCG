/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_1, ((((((-44 + 2147483647) >> (var_8 + 20389)))) ^ 684167855))));
    var_12 = (max((max(((var_6 ? var_2 : 6396162554912722835)), (min(-29090, 9804647863563935108)))), ((var_7 ? (min(var_2, var_10)) : (((min(var_5, var_4))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [4] &= (((((arr_0 [i_0] [5]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (min((arr_0 [i_0] [i_0]), 2082538937)) : (((min(13445, 252)))));
        var_13 = ((((((arr_2 [i_0]) | (max((arr_0 [i_0] [i_0]), var_8))))) ? ((((min(var_10, 11870690454796634765))) ? (((var_0 != (arr_1 [i_0])))) : ((-(arr_2 [i_0]))))) : (arr_0 [i_0] [i_0])));
        var_14 = (max(var_14, 44));
    }
    #pragma endscop
}
