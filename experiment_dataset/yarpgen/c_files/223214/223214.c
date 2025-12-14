/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_2);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [2] = ((458842574095481512 ? (arr_3 [i_0 - 1]) : (((((arr_1 [i_0 - 1]) != var_3))))));
        arr_5 [i_0] [i_0 - 2] = (((arr_3 [i_0]) ? (((-1062149280276503215 * (!1492870476077764894)))) : var_2));
    }
    #pragma endscop
}
