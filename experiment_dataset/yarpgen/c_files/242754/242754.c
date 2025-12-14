/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((((!(5044204413605133719 & -5044204413605133720))))) * (max(-var_7, (min(var_0, var_0))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0] [i_0]) != ((((-95 == var_5) << (arr_0 [i_0] [i_0]))))));
        var_13 += ((((((~(arr_1 [9] [9]))) % (min((arr_2 [i_0] [i_0]), (arr_1 [1] [1]))))) + (((5044204413605133720 != (arr_0 [i_0] [i_0]))))));
        var_14 = (max(var_14, (((((((min((arr_0 [i_0] [i_0]), (arr_0 [10] [10]))))) == ((1 ? var_0 : (arr_2 [i_0] [i_0])))))))));
    }
    var_15 += (((((max(117, var_5)))) ? (0 == var_6) : var_3));
    #pragma endscop
}
