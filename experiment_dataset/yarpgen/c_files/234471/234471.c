/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_17 = ((2 ? ((-(arr_0 [i_0]))) : (((((arr_1 [i_0] [i_0]) || (arr_0 [i_0])))))));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_4 [i_1] [i_1]);
        arr_5 [i_1] [i_1] = (min((((-15 ? ((~(arr_4 [i_1] [i_1]))) : ((((arr_3 [i_1]) || 3171515542)))))), (arr_0 [i_1])));
        var_19 += (max((((var_16 / 16990766) - 40949)), (arr_1 [i_1] [i_1])));
    }
    var_20 ^= var_1;
    #pragma endscop
}
