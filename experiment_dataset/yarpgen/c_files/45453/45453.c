/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (~var_3);
    var_13 = (((1 << 0) ? ((((max(57, -20))) ? var_8 : (((235317545 ? 1 : 1))))) : var_5));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = arr_6 [i_0] [i_1] [i_2];
                    var_15 = ((((arr_8 [i_2] [i_0] [i_0]) ? 0 : (arr_9 [i_1] [i_1] [i_1] [9]))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_16 = min(3233874239, (((((0 ? 1 : 14620))) ? (!64) : ((min(12, 244))))));

        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            var_17 = (max(((-3196 ? (((min(1, 1)))) : ((65535 ? (arr_13 [i_3]) : (arr_14 [i_3] [i_4] [i_3]))))), (arr_13 [i_3])));
            var_18 = ((-(!192)));
        }
        arr_17 [1] = (min(19, 36));
        var_19 = 4294967281;
        var_20 &= -8966414811099975059;
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        arr_22 [i_5 - 1] [i_5 - 1] = 117;
        var_21 = (((arr_21 [i_5] [1]) << (((arr_20 [i_5] [i_5 + 1]) - 53))));
    }
    var_22 &= (min(39060, (((min(9223372036854775807, var_5)) << ((((min(19127, -16209))) - 19099))))));
    #pragma endscop
}
