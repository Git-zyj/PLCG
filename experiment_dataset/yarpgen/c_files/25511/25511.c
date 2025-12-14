/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_13));
    var_19 = (max(var_19, var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (197 == 5775703743560586753);
                var_20 = (+-7313202967144945060);
                arr_7 [i_0] = (arr_1 [i_0]);
                var_21 = ((((((var_8 & 13135) ? var_17 : ((((arr_5 [i_0] [i_0]) && 1152920954851033088)))))) ? ((((!(arr_2 [i_0 + 2]))))) : (min((arr_3 [i_1] [i_0 - 1] [i_1]), (arr_5 [i_0 + 1] [i_0 - 1])))));
                var_22 = (max(var_22, (((!((max(var_9, (arr_2 [i_0 + 2])))))))));
            }
        }
    }
    var_23 = (((((((-9223372036854775807 - 1) ? 55 : var_3)) - var_12)) != (var_2 == var_4)));
    var_24 = (max((var_6 != var_5), (!var_2)));
    #pragma endscop
}
