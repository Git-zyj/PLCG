/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_2));
    var_14 = ((30548 ? ((var_7 << (-30558 + 30572))) : var_1));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 &= (arr_1 [i_0] [12]);
        var_16 += (min(30556, -21955));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] = ((((arr_3 [i_1]) - -1126737376)));
        var_17 |= (((30561 & -30548) ? (arr_2 [i_1] [i_1]) : ((((~-30544) < (arr_3 [i_1]))))));
        var_18 = -13549;
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_8 [i_2] = (-30544 != -7428134043635188535);
        arr_9 [i_2] = ((23471 * ((((2835272514846045341 >> (-7428134043635188535 + 7428134043635188555))) ^ 255922131))));
        var_19 = (((~(arr_6 [i_2]))));
    }
    #pragma endscop
}
