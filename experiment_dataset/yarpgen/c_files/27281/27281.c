/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (((!-7) % ((max((((!(arr_0 [i_2])))), (max(var_7, var_5)))))));
                    arr_6 [i_0 - 2] [i_0 - 2] = ((((min((max(var_0, var_10)), (((var_5 ? var_8 : var_2)))))) ? ((min(var_4, 205))) : var_3));
                    var_13 = max(((min(var_11, var_8))), (max(-var_2, var_7)));
                    var_14 = (min(var_14, var_2));
                }
            }
        }
    }
    var_15 = ((((max(((var_3 ? var_9 : var_11)), 1))) ? (!var_0) : ((-(min(var_6, var_2))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_4] = (((((((max((arr_10 [i_3]), var_10))) ? ((21 ? 32765 : 6803681936013094624)) : (~-1936824574)))) ? 12801 : (min(1, 9223372036854775805))));
                arr_15 [i_3 - 1] [12] |= (arr_8 [i_3 + 2]);
            }
        }
    }
    var_16 -= ((var_7 ? (((((max(var_11, var_0))) ? ((min(var_4, 32))) : var_10))) : (max(((min(-32762, var_4))), var_0))));
    #pragma endscop
}
