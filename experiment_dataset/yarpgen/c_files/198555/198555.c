/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_4 ? var_12 : (511 != var_3)))) ? var_10 : ((((((min(4798777668927599437, 4798777668927599437))) || var_10))))));
    var_20 = ((((((-4798777668927599437 ? 4798777668927599461 : -4798777668927599437))) ? 4798777668927599437 : 4798777668927599450)));
    var_21 = (var_12 | var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = (((arr_4 [i_0] [i_0]) < ((-(arr_4 [i_1] [i_1])))));
                var_23 = ((((-(4798777668927599450 <= 4798777668927599432))) >> ((((-4798777668927599451 ? -4798777668927599438 : -4798777668927599437)) + 4798777668927599449))));
                var_24 = var_7;
                var_25 = ((var_8 != (((~4798777668927599440) % ((((!(arr_4 [1] [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
