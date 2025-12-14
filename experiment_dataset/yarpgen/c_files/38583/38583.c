/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (min((((arr_0 [i_0]) ? (~8633) : ((~(arr_1 [i_0]))))), (((((max(106, (arr_1 [i_0])))) ? (min(1145681028, 126)) : (arr_0 [i_0]))))));
        arr_3 [i_0] = ((~(-32767 - 1)));
        arr_4 [i_0] = (-670637514 - 13836610227775583711);
        arr_5 [i_0] = (arr_1 [i_0]);
    }
    var_12 = var_11;
    var_13 = (((((((min(var_3, -100)))) == (max(1, 7)))) ? (((max(21992, 2009271661)))) : (min((-2705 ^ 114), -var_9))));
    #pragma endscop
}
