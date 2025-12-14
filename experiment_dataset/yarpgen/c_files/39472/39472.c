/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((+(((arr_8 [i_0] [i_1] [i_1]) ? 26084 : (arr_1 [i_2 + 1])))))));
                                var_15 = (min(var_15, ((((max(((-2147483642 ? (arr_0 [i_3]) : (arr_1 [i_0]))), (arr_7 [i_1])))) ? ((-((min((-127 - 1), (-127 - 1)))))) : ((((46 ? -21706 : 2757361737))))))));
                                var_16 = 21705;
                            }
                        }
                    }
                    var_17 = (((((((((-127 - 1) ? 2757361733 : 2747633491))) ? (~3510026479) : -10678))) ? ((min((max((arr_4 [i_0] [i_1] [i_2 + 1]), 1963341531)), -1))) : 5));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_18 -= ((~(((((arr_10 [i_1] [i_2] [i_1] [i_6]) ? 15278546666398721823 : 1))))));
                                arr_21 [i_0] = (((((1537605559 ? 0 : -8366412038494569887))) + (((21705 | 236) ? (!-19954) : -18275))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, var_4));
    var_20 ^= var_8;
    #pragma endscop
}
