/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max(var_11, (((var_7 ? -var_9 : ((max((457506355 && -26694), var_5))))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_12 = 281470681743360;
        var_13 = 457506360;
        arr_4 [1] = ((((arr_0 [i_0]) / (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((~(((!(((var_9 ? 201326592 : (arr_6 [11]))))))))))));
        arr_7 [15] [i_1] = max((max((arr_3 [i_1]), (arr_3 [i_1]))), -457506355);
        arr_8 [i_1] |= ((((max(((((arr_1 [i_1]) || (arr_3 [i_1])))), -6))) && ((var_1 && ((!(arr_0 [5])))))));
    }
    var_15 = var_7;
    #pragma endscop
}
