/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1 - 2] [i_0] [i_0] = var_7;
                var_14 = (i_0 % 2 == zero) ? ((max(((min((arr_3 [i_0]), (18500 - var_7)))), (max((max(var_5, var_12)), (((var_4 >> (((arr_0 [i_0]) + 256883040)))))))))) : ((max(((min((arr_3 [i_0]), (18500 - var_7)))), (max((max(var_5, var_12)), (((var_4 >> (((((arr_0 [i_0]) + 256883040)) - 1336834556))))))))));
                var_15 = (max((((!(arr_2 [i_0] [i_1 + 2])))), ((((57344 != (arr_2 [i_0] [i_1])))))));
                var_16 = (min(((~((var_1 ? var_6 : var_10)))), (197 * -16)));
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
