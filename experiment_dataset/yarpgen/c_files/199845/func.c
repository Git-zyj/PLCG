/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199845
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
    var_16 = ((long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)22)));
    var_17 = ((/* implicit */unsigned short) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247)))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (var_9) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) min((var_2), (var_0)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))))) == (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) : (max((var_13), (((/* implicit */long long int) var_5))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)247))));
                        arr_12 [i_1] [i_2] &= ((/* implicit */_Bool) ((arr_8 [(short)3] [(unsigned char)12]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)89), (arr_7 [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) (unsigned short)36162)))))));
                        var_19 = ((/* implicit */unsigned long long int) arr_0 [(short)20]);
                    }
                    for (unsigned char i_4 = 3; i_4 < 19; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), ((-(arr_2 [i_4 + 2])))));
                        arr_17 [i_0] [i_1] [i_0] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_0 - 4]))))) << (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)63)) ? (6511408445610046880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))))) <= (max((((/* implicit */unsigned long long int) (unsigned char)2)), (10721654864189555027ULL)))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((_Bool) arr_6 [i_4] [i_4 + 2] [i_2] [i_0])) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)10639)) : (((/* implicit */int) (signed char)31))))) ? (((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */int) (unsigned short)6237)) / (((/* implicit */int) (unsigned short)21731)))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((max((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])), (var_13))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 511U)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (unsigned short)2074))))))) ? (max((arr_16 [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0]), (arr_16 [i_0 + 1] [i_0 - 3] [i_0] [i_0 - 2]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)89))))), (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))))))))));
                        var_23 = ((/* implicit */_Bool) min((((((arr_3 [13U] [i_0]) % (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))) * (((/* implicit */unsigned long long int) (-(arr_2 [(unsigned short)19])))))), (((unsigned long long int) (-(237995952))))));
                        arr_20 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1] [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_1] [i_5] [i_5] [i_5]))) : (((unsigned int) max((((/* implicit */unsigned long long int) (unsigned short)6074)), (arr_3 [i_1] [(unsigned char)5]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), ((~(((((/* implicit */_Bool) min(((unsigned short)6074), (((/* implicit */unsigned short) (short)-19598))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)219), (((/* implicit */unsigned char) (signed char)-29)))))) : ((~(3413952871U)))))))));
                            var_25 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) <= (max((((/* implicit */unsigned int) var_2)), (var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) 2399592326U)) / (arr_9 [i_5])))))) : (((unsigned long long int) (unsigned short)43301))));
                            arr_24 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))) & (15U)))))));
                            arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)31867))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [3LL] [i_5])) ? (576460752303423487ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
