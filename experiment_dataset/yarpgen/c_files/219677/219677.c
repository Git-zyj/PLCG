/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!27891);
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = arr_2 [i_0] [2];
        arr_4 [i_0] = 37645;
        var_21 = (((min(77, (arr_0 [i_0])))) ? var_10 : ((~(~858124929013889234))));
        arr_5 [i_0] [i_0] &= (max(14669889241011460988, (((arr_0 [5]) * 0))));
    }
    #pragma endscop
}
