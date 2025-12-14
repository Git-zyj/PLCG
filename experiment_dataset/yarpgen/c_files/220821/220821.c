/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= 65535;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-1 ? 20622 : -20615));
        var_15 = (!var_4);
        arr_5 [i_0] = (((arr_1 [i_0]) && ((min(((-1408798373301130017 ? 5374353898772538756 : 46770)), (((!(arr_1 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_16 = (arr_8 [1]);
        arr_9 [i_1] = ((((min((arr_8 [i_1]), (((arr_3 [10]) ? (arr_8 [5]) : 5374353898772538756))))) ? ((((min((arr_8 [i_1]), (arr_2 [10])))))) : ((min(var_4, (arr_3 [10]))))));
        var_17 = (min(var_17, (arr_6 [i_1])));
    }
    #pragma endscop
}
