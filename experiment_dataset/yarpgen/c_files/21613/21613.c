/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((867817965 ? 0 : 511)) & 48))) ? -128 : (((((1626196806 >> (9223372036854775807 - 9223372036854775783)))) ? 2668770489 : -207)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = -49;
                                arr_12 [i_3] [i_0] = ((((((min(512, 867817972)) ^ -2668770501))) || ((max((arr_10 [i_4]), (24598 * 1626196806))))));
                                arr_13 [6] [3] [i_2] [9] [i_2] = (-((65 << ((((-4801 ? 207 : (arr_11 [i_0] [i_1] [i_2] [i_3]))) - 191)))));
                                arr_14 [1] [i_1] [i_1] [i_1] [i_1] = ((-((((791473866 ? 867817972 : 9179242176475578835)) + ((((arr_2 [i_0]) ? 208 : (arr_11 [6] [i_1] [i_2] [i_3]))))))));
                                var_16 = ((-(((((-(arr_7 [i_2] [22] [22] [14])))) ? -651385676 : ((2016845640 ? 48 : 47))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, (((-(((((min(0, 208))) != (arr_8 [i_0] [i_0])))))))));
                }
            }
        }
    }
    #pragma endscop
}
