/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26334
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) min((14356351076567339213ULL), (((/* implicit */unsigned long long int) (((~(7395427457630308963LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241)))))))))));
                                arr_12 [i_1] [i_1] [i_2] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_0 [i_0] [i_1 + 1])));
                                arr_13 [i_1] [i_1] [(unsigned char)7] = ((/* implicit */int) 482526665351744369ULL);
                                arr_14 [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) / (2592267660U)));
                            }
                        } 
                    } 
                    arr_15 [i_1] [6U] [2ULL] [i_1] = ((/* implicit */int) (-(0ULL)));
                    var_20 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_13)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (min((var_3), (((/* implicit */unsigned int) ((signed char) var_16)))))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_12)) ? (var_2) : (min((var_2), (((/* implicit */unsigned long long int) 297062096)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) -664785557)) || (((/* implicit */_Bool) var_12)))))))))))));
}
