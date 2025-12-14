/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203268
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
    var_19 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_0 [i_0 + 3]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_21 = ((/* implicit */short) -9223372036854775792LL);
                    var_22 += ((/* implicit */unsigned short) -2147483638);
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [(short)2] [i_3] [i_4])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_5 [i_3] [i_2 - 1] [i_0 - 1] [i_2])));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1] [i_0 + 3])) ? (((/* implicit */int) ((signed char) (_Bool)1))) : ((~(var_10)))));
                        var_25 = ((/* implicit */signed char) var_6);
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = arr_11 [i_0] [i_0] [i_2] [i_0 + 1] [i_3];
                        var_26 = ((/* implicit */signed char) var_10);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((signed char) 1104331985U)))));
                        arr_20 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
                        var_28 = ((/* implicit */unsigned short) (short)-8231);
                    }
                    for (short i_6 = 2; i_6 < 13; i_6 += 3) 
                    {
                        arr_24 [i_0 + 1] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_4 [i_0] [i_6] [i_3]);
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((3190635311U) - (3190635282U))))))));
                    }
                }
                arr_25 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_1 [i_2 - 1]))));
            }
            var_30 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 2] [(unsigned char)10] [i_0])) % (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [(short)2] [i_0 + 1]))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (3190635311U)));
            arr_26 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 33546240)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)11))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 3] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_0 + 2] [i_0 + 1] [8] [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0 + 3] [i_0 + 2] [i_0] [i_0] [i_0]))));
        }
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 2) 
        {
            var_33 ^= arr_16 [i_7] [i_0] [i_0] [i_7 + 2] [i_0 + 1] [i_0] [i_0];
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [(short)0] [(short)0] [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8231))) : (var_11))))));
            arr_31 [i_0] = ((/* implicit */signed char) var_2);
            arr_32 [2ULL] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_7 - 1] [i_0 - 1] [i_0 + 3])) & (((/* implicit */int) arr_4 [i_7 - 1] [i_0 - 1] [i_0 + 3]))));
            var_35 = ((/* implicit */unsigned int) arr_7 [i_0] [(short)4] [i_7 + 1] [i_7]);
        }
    }
}
