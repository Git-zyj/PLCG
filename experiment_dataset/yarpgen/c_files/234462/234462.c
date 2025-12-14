/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((((var_0 + 2147483647) << ((((max(var_11, var_5))) - 16)))), ((var_7 & (var_8 >= var_10))))))));
    var_14 = var_12;
    var_15 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 = ((((var_9 ? var_1 : var_1)) ^ ((var_6 ? -67 : var_12))));
            arr_4 [i_1] = (var_10 | var_12);
        }
        arr_5 [i_0] = (var_11 > var_0);
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] = (max(((((var_9 ? var_7 : var_9)) << ((((var_7 ? var_2 : var_8)) - 30)))), var_3));

        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            arr_12 [i_2 - 2] = (~-var_9);
            arr_13 [i_2] = ((-67 ? ((-70 ? ((min(79, 73))) : (-53 / -93))) : (34 == 20)));
            arr_14 [i_3] [i_3] = (max((max(((max(var_3, var_12))), var_3)), ((-((max(var_4, var_9)))))));
            var_17 = (max(-70, (max(var_3, var_6))));
        }
        var_18 -= ((~((-59 ? -85 : 80))));
    }
    #pragma endscop
}
