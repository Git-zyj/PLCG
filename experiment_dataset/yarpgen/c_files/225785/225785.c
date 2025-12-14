/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 -= (~(((arr_0 [i_0 - 2] [i_0 - 2]) ? (arr_0 [i_0 + 1] [i_0]) : var_7)));
        arr_3 [6] [5] = (!var_15);
        var_19 = 0;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_20 = 455720578;
        var_21 = (min(var_21, (((~(((!(((var_16 + (arr_0 [12] [12]))))))))))));
        arr_6 [i_1] = (((((max(var_0, (!-2102196681))))) >= var_2));
        var_22 = (((arr_4 [i_1] [i_1]) ? (~17298142596543845287) : (((var_9 ? (arr_4 [i_1] [i_1]) : (arr_4 [10] [4]))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_23 -= ((+(max((arr_4 [i_2] [i_2]), var_1))));
        arr_10 [i_2] = ((-((var_3 ? (arr_1 [i_2] [i_2]) : (((var_1 << (var_7 - 5404075146059976025))))))));
    }
    var_24 ^= 36;
    #pragma endscop
}
