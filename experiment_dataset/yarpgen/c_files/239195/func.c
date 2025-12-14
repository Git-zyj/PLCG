/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239195
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) : (var_7)))) < (((var_4) - (((/* implicit */unsigned long long int) -24))))))));
                var_10 = min((((22) - (-555525116))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (-555525116))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    var_11 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_2]) : (arr_4 [i_3]))), (((((/* implicit */int) arr_10 [i_2] [i_2] [i_4])) >> (((arr_4 [i_2]) - (491911621)))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)31439))) : (-6605035532969351761LL))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -555525116)) ? (((/* implicit */int) (signed char)-63)) : ((~(((/* implicit */int) (short)-31427))))));
                            arr_20 [i_2] [i_2] [4U] [i_2] [i_5] [i_6] = ((/* implicit */int) var_9);
                        }
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8785191970309998176LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 213605668)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_8))))) : (536739840U)))) ? (max((((/* implicit */unsigned int) (_Bool)0)), (536739852U))) : (arr_13 [i_2] [i_2] [i_2])));
                            var_15 |= ((/* implicit */signed char) ((max((arr_11 [i_3]), (((/* implicit */unsigned int) ((signed char) var_1))))) < (((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? (arr_19 [i_4] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))))) : (((/* implicit */unsigned int) arr_21 [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 1]))))));
                            var_16 *= ((/* implicit */_Bool) max((max((4167153778U), (3758227455U))), (((((/* implicit */_Bool) arr_18 [i_3] [i_7] [i_7] [i_7 + 2] [i_3] [i_3])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (536739840U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) arr_2 [i_3] [i_2])))))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_12 [i_5 - 2] [i_5 - 2] [i_5 - 2]), (var_2)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -8785191970309998181LL)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (_Bool)1))))));
                            var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((int) var_2))))) ? (max((5660944644281733628LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (((~(((/* implicit */int) var_1)))) - (((int) var_9)))))));
                        }
                        var_19 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_2] [i_2] [i_2] [i_2])) ? (arr_16 [i_5 - 1] [i_2] [i_5] [i_2] [i_4]) : (arr_16 [i_5 - 1] [i_2] [i_5] [i_2] [i_5])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17841))) : (-6452937298624016135LL)))));
                        arr_27 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) -980897950)) ? (((var_0) ? (536739839U) : (((((/* implicit */_Bool) (short)14423)) ? (536739839U) : (((/* implicit */unsigned int) -1050264888)))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        var_20 += ((/* implicit */short) (~(((/* implicit */int) ((-327381012) != (((/* implicit */int) var_3)))))));
                        var_21 = ((/* implicit */int) min((var_21), (arr_9 [9LL])));
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 12; i_11 += 2) 
                        {
                            var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_11] [(unsigned short)2] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1])) ? (((/* implicit */int) arr_23 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1])) : (arr_16 [i_4] [i_4] [i_11 + 1] [i_2] [i_4])));
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 844353340)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967293U)));
                        }
                        var_24 += ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) 536739838U))));
                        var_25 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) var_0)))), (((arr_16 [i_2] [i_3] [i_4] [i_2] [i_3]) >> (((arr_16 [i_2] [i_2] [i_2] [i_2] [i_10]) - (2010822804)))))));
                    }
                    var_26 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_4] [(_Bool)1] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)-107)) | (((/* implicit */int) (short)17766)))))));
                    var_27 |= (_Bool)1;
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */short) max((((/* implicit */long long int) var_1)), (var_7)));
}
