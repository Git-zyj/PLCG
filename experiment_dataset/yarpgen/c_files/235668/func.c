/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235668
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
    for (short i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [23ULL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_8 [(unsigned short)2])), (min((3091281805U), (4294967295U)))));
                    var_12 = ((/* implicit */unsigned long long int) arr_2 [i_0 + 1]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((((int) ((unsigned short) var_0))), (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) 748552081)), (1203685490U)))), (arr_4 [i_3 + 1]))));
        var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_4 [i_3 - 1])), (max((((/* implicit */unsigned long long int) arr_12 [i_3])), (max((((/* implicit */unsigned long long int) arr_9 [i_3 + 1])), (arr_3 [17LL] [i_3])))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_17 [i_4] [i_4] = ((/* implicit */signed char) ((unsigned int) max((((unsigned short) arr_9 [i_4])), (((/* implicit */unsigned short) min((arr_7 [i_4] [i_4] [i_4] [i_4]), (arr_7 [i_4] [i_4] [i_4] [i_4])))))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 14; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_16 = arr_25 [i_4] [i_5] [i_6] [i_7];
                                arr_28 [i_5] [i_5] [i_6] [(short)4] [i_5] = ((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_4] [i_5] [i_5] [i_7] [i_8])), (((int) arr_6 [(signed char)3]))));
                                var_17 = ((/* implicit */long long int) arr_13 [i_6]);
                                var_18 = ((/* implicit */short) ((unsigned char) ((unsigned short) min((((/* implicit */unsigned char) arr_16 [i_4])), (arr_18 [i_4] [i_5] [i_5])))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_13 [i_5]))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((signed char) arr_18 [i_4] [i_5] [i_5]));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) ((unsigned int) min((((/* implicit */unsigned int) (_Bool)1)), (560159555U))));
}
