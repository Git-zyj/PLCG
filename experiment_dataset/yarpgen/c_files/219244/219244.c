/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1 + 2] = ((((((!(((~(arr_3 [i_0])))))))) * var_5));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_10 = (((11632728254662365558 ? 1 : 6814015819047186067)));
                    var_11 = (max(var_11, (~28479720964623022)));
                    arr_7 [i_1] [i_1] |= (var_2 | 1);
                }
                var_12 = 3397655354344512520;
            }
        }
    }
    var_13 = var_0;
    var_14 = var_1;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_15 = ((((min(6814015819047186080, (0 & 15049088719365039095)))) || ((((!206) ? var_5 : var_8)))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_16 [i_3] [6] [i_3] = (((50 || 41785) ? ((((var_0 ? 23757 : var_0)))) : (arr_2 [i_5])));
                    var_16 = ((var_9 || (((var_4 ? var_6 : (arr_6 [i_4] [i_4] [i_4]))))));
                    arr_17 [i_5] [i_4] [i_3] = (min(var_8, ((((15049088719365039097 ? 212 : 1610869059)) + var_9))));
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
