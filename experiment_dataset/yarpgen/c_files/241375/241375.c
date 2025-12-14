/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_1] [i_1] = -var_8;
            var_10 += ((-(arr_5 [i_0])));
        }
        var_11 = (arr_0 [i_0]);
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = (min(22209, ((((arr_2 [i_2]) && (arr_2 [i_2]))))));
        arr_12 [i_2] = (min((((!8969319423868131268) ? var_9 : 4376672708628692625)), 2415650418));
    }
    var_12 = ((((min(((var_8 ? var_7 : var_9)), var_0))) ? (((!var_5) ? 75 : var_7)) : var_0));
    #pragma endscop
}
