/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_3, var_14));
    var_21 = (min(var_21, (((var_16 ? (min(var_15, -var_7)) : ((max(-37, ((-1770343321592323585 ? var_13 : var_15))))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((((min((arr_1 [i_0]), 3241337971768470688))) ? var_6 : ((((0 * 31446) != (arr_0 [i_0]))))));
        var_22 = (max(var_22, 0));
        var_23 = ((((((arr_1 [i_0]) ? 1 : (arr_1 [i_0])))) ? ((((arr_1 [i_0]) ? (arr_1 [i_0]) : 1))) : (((arr_1 [i_0]) - var_9))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_24 = max(((var_0 ? (arr_5 [i_1]) : var_13)), 1);
            arr_8 [i_1] = var_3;
        }
        arr_9 [i_1] |= 1;
        var_25 = ((((max(1, var_5))) == (((arr_7 [i_1]) / (arr_6 [i_1] [i_1])))));
        var_26 &= (((arr_7 [i_1]) ? (min((arr_7 [i_1]), (arr_7 [i_1]))) : 0));
    }
    #pragma endscop
}
