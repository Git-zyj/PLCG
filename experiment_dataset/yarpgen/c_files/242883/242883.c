/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 = ((((((max((arr_1 [i_0 + 2]), 9223372036854775807))) ? (!9223372036854775807) : (max(9223372036854775807, -731321587401305590))))) ? (min((((arr_0 [11]) ? -731321587401305597 : -731321587401305597)), 731321587401305596)) : ((~((731321587401305573 ? -731321587401305570 : 192)))));
        arr_2 [i_0 + 2] [i_0] = min(((min(731321587401305596, (-9223372036854775807 - 1)))), ((-(min(731321587401305598, -731321587401305557)))));
        var_19 |= ((max((max((arr_0 [i_0]), -731321587401305557)), (max(731321587401305596, (arr_0 [i_0]))))));
    }
    var_20 = (min(119, ((var_10 ? var_1 : -var_10))));
    var_21 += ((9223372036854775807 ? 731321587401305596 : (min(-731321587401305597, 731321587401305608))));
    #pragma endscop
}
