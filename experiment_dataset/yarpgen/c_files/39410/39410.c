/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_6, var_6));
    var_19 = ((-((~(!var_2)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_20 ^= var_2;
        var_21 ^= var_17;
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((((!(!56694))) ? ((-((min(8842, 39))))) : (((!((!(arr_0 [i_1]))))))));
        arr_8 [i_1] [i_1] &= 2305843009213693952;
        var_22 = (!56694);
        var_23 ^= (((-(((!(arr_5 [i_1] [i_1])))))));
    }
    #pragma endscop
}
