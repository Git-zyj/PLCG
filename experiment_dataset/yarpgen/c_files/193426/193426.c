/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (max(15, 183093039090929763));
    var_16 &= (min(((((((var_8 ? var_9 : var_3))) >= (min(var_4, 22179))))), var_6));
    var_17 = (min(-609850029, (min((max(var_0, var_5)), ((max(4243854655, -1249639421)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((+(((!((min((arr_1 [i_0] [12]), 111))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 |= (min(((((min(555359257780200284, 73))) ? -18263651034618621852 : var_0)), ((+(max((arr_7 [1] [i_1] [i_2] [14] [1] [i_1]), 183093039090929753))))));
                            var_20 = 63007;
                        }
                    }
                }
                var_21 -= (arr_0 [i_1 - 2] [i_1 - 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_16 [i_5] [i_5] = ((~((121 ? 2 : 5837))));

                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_21 [i_5] [i_4] [i_5] = arr_5 [i_4] [i_5] [i_5] [17];
                    arr_22 [i_5] = (~2442);
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    arr_25 [0] [i_5] [0] = (((min((arr_24 [i_7 + 2] [i_7 + 1] [i_7 - 1]), (max(var_11, (arr_2 [i_4] [17])))))) ? var_4 : 134);

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_22 -= 183;
                        var_23 += ((((max(0, 144))) & (min(1442385057, 1280085219))));
                    }
                }
                var_24 = (arr_18 [i_5]);
                var_25 = ((((min(15050132893371827776, var_7))) ? ((max((arr_12 [i_5]), (arr_12 [i_4])))) : ((1 ? 71 : 48))));
            }
        }
    }
    #pragma endscop
}
