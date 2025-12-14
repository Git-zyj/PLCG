/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_9 ? var_7 : ((1 ? var_5 : var_13)))));
    var_16 = (max(((var_2 ? (max(var_5, var_13)) : -469455383)), var_3));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (min((((max(var_4, var_12)))), ((((min(32, -1481357331))) ? var_9 : ((var_7 - (arr_1 [i_0])))))));
                var_19 = (min(var_11, 622495361));
                var_20 = ((((76 >> (((min((arr_1 [i_0]), (arr_1 [i_0]))) + 7029436862428074962)))) - ((min(65453, ((max(0, (arr_3 [i_1] [i_0])))))))));
                var_21 = ((((!(arr_3 [i_1] [i_0]))) ? ((~(arr_1 [i_0]))) : (~0)));
            }
        }
    }
    #pragma endscop
}
