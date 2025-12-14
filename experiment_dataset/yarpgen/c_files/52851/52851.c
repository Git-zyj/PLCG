/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((!var_6) ? -668981917 : (max(-10559, 5659011052748077949))))) ? var_1 : var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 ^= (arr_2 [i_0]);
        var_16 = (max(0, 7026666647817285868));
        arr_3 [i_0] = (!var_2);
        var_17 ^= ((~(((!(1073479680 / 1))))));
        arr_4 [9] [i_0] = ((977319374 % ((-var_9 ? (~var_3) : (var_2 == -7026666647817285868)))));
    }
    #pragma endscop
}
