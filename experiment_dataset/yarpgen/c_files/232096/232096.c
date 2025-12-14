/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((min((var_10 && var_11), ((var_16 ? 262140 : var_11))))) || var_9));
    var_18 = (max(var_18, (((((40406 ? (40388 > var_13) : var_13)) % ((min(var_5, 230))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] [i_0] = (((((((-32767 - 1) && 8796092989440)) ? (arr_1 [i_0]) : ((var_0 ? (arr_0 [i_0]) : 0)))) > (((min(((var_7 <= (arr_0 [6]))), (!1102440277)))))));
    }
    #pragma endscop
}
