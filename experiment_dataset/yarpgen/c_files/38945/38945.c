/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_17 += ((min(3107362754, (14570047659919715440 / 16383))));
            var_18 |= (max(611259746253145582, -5720119642990440129));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = -5720119642990440129;
                            var_20 = var_14;
                            var_21 = var_1;
                        }
                    }
                }
            }
            arr_15 [i_0] [i_0] [i_0] = 688545066;
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_22 = -688545070;
            var_23 = ((min(4294967291, (~var_9))));
        }
        arr_18 [i_0] = (((((~(~6319359737321293296)))) ? (((~2) ? (((177 ? -17370 : var_15))) : -4617182316878250954)) : -688545072));
        var_24 = var_12;
    }
    var_25 = ((var_8 ^ ((max(-83, 236)))));
    #pragma endscop
}
