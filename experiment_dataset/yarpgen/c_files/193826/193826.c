/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((-2147483647 - 1) > ((44595 ? 1238707239311385433 : (arr_1 [i_0])))));
        arr_4 [i_0] = ((((max((((arr_1 [i_0]) & 4328063441856435626)), 627533982))) ? (max((((33538048 <= (arr_0 [i_0] [i_0])))), -var_1)) : ((((arr_0 [i_0] [i_0]) > 4328063441856435635)))));
        arr_5 [i_0] = (arr_2 [i_0]);
        arr_6 [i_0] = ((((~var_13) | (arr_2 [i_0]))) | (min((((arr_0 [i_0] [i_0]) ? var_13 : (arr_0 [i_0] [i_0]))), (((4328063441856435635 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))))));
    }
    var_16 |= 1;
    var_17 = (min(((((var_0 / var_8) ? var_7 : ((9557 ? 32567 : var_7))))), (var_7 - 3144325916050038360)));
    #pragma endscop
}
