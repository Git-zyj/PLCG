/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216539
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)36610))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
                {
                    arr_10 [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_2])) : (-2008177697)))));
                    var_15 |= ((/* implicit */unsigned long long int) (+(((long long int) var_9))));
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */short) 2040);
                }
                for (int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_1 - 3] [(unsigned char)6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (((((/* implicit */_Bool) 2008177696)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_2 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0])) ? (4292063823U) : (1U)))))) & (((/* implicit */unsigned long long int) (~(min((0), (((/* implicit */int) (signed char)-118)))))))));
                    var_16 = ((/* implicit */signed char) arr_3 [i_3] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) min((33554432U), (((/* implicit */unsigned int) (unsigned short)65531))));
                                var_17 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 3] [i_1 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1370518981U)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (_Bool)1))))) : (min((2710837354009342456ULL), (17370888060314983977ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                                arr_20 [i_0] [i_0] [i_0] [(short)0] [i_0] = ((/* implicit */unsigned short) (((~(arr_4 [i_0] [i_0] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0))))))));
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_3]))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((arr_12 [i_5 - 1] [i_5 - 1] [13ULL] [i_5 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                }
                for (int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    arr_24 [i_0] [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) (+((~(var_2))))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_23 [i_0] [i_6])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0] [i_1 - 2] [i_0]), (((/* implicit */unsigned short) (signed char)-98)))))) - (min((((/* implicit */unsigned long long int) (short)-1102)), (arr_2 [i_1])))))));
                    arr_25 [i_0] [i_0] [i_1] [i_6] = (+(((int) (signed char)-107)));
                    arr_26 [i_6] [(_Bool)1] [i_1] [i_0] = ((/* implicit */int) var_10);
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+((+(arr_16 [i_0] [i_1 - 3] [i_6] [(short)1]))))))));
                }
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) (signed char)125))));
                        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1 + 1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) var_11)) : (var_7)));
                        arr_33 [i_0] [i_0] [i_7] [i_8] |= ((/* implicit */short) ((2776074324232564440ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1 - 2])))));
                    }
                    arr_34 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_27 [i_0] [(unsigned short)10] [i_1 - 3]))))), (arr_1 [i_1])));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_1]) & (((/* implicit */int) ((_Bool) (unsigned char)59)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1])) ? (arr_15 [i_0] [i_1] [i_1] [i_7]) : (((/* implicit */int) arr_5 [i_0] [4ULL] [i_7])))))) : (((/* implicit */int) (unsigned short)36610)))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_27 [i_7] [i_1] [i_0]))));
                    var_25 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_18 [9ULL] [i_7] [i_0] [(short)15] [i_7] [(short)16])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [8ULL] [i_1] [i_7]))))) ? (((/* implicit */int) arr_30 [i_1] [i_1] [i_0])) : ((+(((/* implicit */int) (_Bool)1))))))));
                }
                arr_35 [i_1] = ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) var_12))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_1 - 2])), (var_7)))) : (15670669749476987183ULL));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_11)) ? (arr_23 [i_0] [(unsigned short)6]) : (((/* implicit */long long int) 3752932099U))))))) | (max((((((/* implicit */_Bool) 8190U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8064))) : (arr_27 [i_1 + 1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_1 - 2] [i_0] [i_0]))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_6);
}
