/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = 7637309594136312900;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] &= var_0;
        arr_4 [i_0] [i_0] = (7637309594136312900 ? var_10 : var_3);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_9 [6] [i_0] [6] = ((var_13 ? var_4 : 7637309594136312900));
            arr_10 [i_1] = ((var_6 ? var_14 : var_13));
            arr_11 [i_1] = var_14;
        }
    }
    var_18 = (!var_5);
    #pragma endscop
}
