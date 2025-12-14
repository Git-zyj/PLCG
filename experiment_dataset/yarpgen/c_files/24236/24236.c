/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((min((1903362007 || var_1), var_13))) ? ((((var_1 ? var_11 : 1903362007)))) : (((((var_5 ? -1903362007 : var_5))) ? var_2 : (~var_9)))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_19 = ((~((-45 + (((!(arr_1 [i_0]))))))));
        arr_2 [4] &= ((!((!(arr_1 [4])))));
        var_20 ^= (min(23, 1));
    }
    var_21 = (max(var_21, (((var_5 ? (~var_3) : (((1 || var_4) & ((var_7 ? 1 : var_1)))))))));
    #pragma endscop
}
