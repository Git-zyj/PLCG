/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-(var_3 + 18061552496736610217)))) ? var_7 : ((13 ? (65535 - -2657073906492479167) : (min(2657073906492479167, 127))))));
    var_11 = ((-((65535 ? var_0 : var_4))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((65535 ? (0 >= var_2) : (max(18446744073709551603, (arr_1 [i_0]))))) >> ((((~((((arr_1 [i_0]) <= var_9))))) + 27))));
        arr_3 [i_0] [i_0] = var_6;
        arr_4 [i_0] = 1229932240;
    }
    #pragma endscop
}
