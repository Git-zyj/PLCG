/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((-(min(((min(46377, 15))), -1)))))));
    var_20 = 1;
    var_21 = (min(var_21, (((1 ? (var_5 << 1) : (((~var_10) ? -4294967295 : var_15)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 ^= (((~17322075598773716404) ? (1 % var_10) : 1));
        var_23 = (max((((!(40689 < 1)))), ((-((max(8749, 1)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_24 = (max(var_24, 3));
        arr_4 [i_1] [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_25 = ((((!((max(var_7, var_12))))) ? (min((arr_0 [i_2]), (((arr_5 [i_2] [i_2]) ? 3518822489 : 62857)))) : ((max(1, ((24846 ? 2678 : 62853)))))));
        var_26 = (max(var_26, (((((((((var_3 ? (arr_0 [i_2]) : (arr_5 [i_2] [9])))) ? 4294967280 : (arr_3 [i_2] [1])))) ? 65534 : (((!((max(var_2, 0)))))))))));
    }
    #pragma endscop
}
