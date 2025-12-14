/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2526950684;
    var_19 = 465740353;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((((max(350132374, var_11))) ? var_14 : (((var_10 % (arr_1 [i_0])))))) & (min((((arr_0 [i_0]) ? 3397227415571486766 : (arr_0 [i_0]))), 32767))));
        arr_3 [i_0] = ((((-(((!(arr_0 [i_0]))))))) & (((arr_1 [i_0]) | (3944834922 <= 4294967295))));
        arr_4 [i_0] [i_0] = ((max((arr_0 [i_0]), (arr_0 [i_0]))));
    }
    #pragma endscop
}
