/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1989293283;
    var_13 -= ((((max(1, 1)))) ? ((56283 ? var_8 : var_1)) : 1);
    var_14 -= ((((!((min(var_4, 442135076)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((min((((56256 ? 16634 : (~124)))), ((-((1012443484 ? -4876217578669363922 : 56254)))))))));
                                var_16 = (((((1 ? 1836062028 : 2))) ? var_11 : ((3982644699309721217 ? (!99) : 21333))));
                                var_17 = max(((min(((1339400353 ? 87 : 1)), ((29755 ? 319249467 : 65535))))), ((var_4 ? 32767 : 1)));
                            }
                        }
                    }
                    var_18 *= 1;
                }
            }
        }
        arr_13 [i_0] [13] = 89;
    }
    var_19 = ((max(1, 56256)));
    #pragma endscop
}
