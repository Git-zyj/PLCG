/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (((10803 % 1549956275) && ((((var_6 ? var_4 : var_17)) != ((var_6 ? 1 : 3407578382))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((var_1 ? (((arr_3 [i_0]) % ((var_17 ? (arr_0 [i_0] [i_0]) : 10803)))) : (((168 ? 10803 : -803881397)))));
        arr_5 [i_0] = (((var_9 || var_9) >> (((-32753 / 27700) + 16))));
        arr_6 [i_0] = ((((-803881388 ? -2560712194683089590 : -1568638142)) - (((((var_19 ? 112 : var_10)))))));
    }
    #pragma endscop
}
