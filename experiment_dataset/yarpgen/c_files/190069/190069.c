/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = (max(var_20, (((-(arr_0 [20]))))));
        arr_2 [i_0] [i_0] = (1 ^ 1);
        var_21 -= 8613167904162286812;
    }
    var_22 = var_0;
    var_23 ^= ((((min(var_9, 8613167904162286812))) ? -var_18 : 8613167904162286806));
    #pragma endscop
}
