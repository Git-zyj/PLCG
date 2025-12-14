/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29411
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
    var_15 += ((/* implicit */long long int) min((((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))), ((+(540283446))))))));
    var_16 = ((/* implicit */long long int) max((18446744073709551600ULL), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_2))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576))) - (7242001004150094653ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((unsigned long long int) max((arr_4 [i_1]), (arr_4 [i_1])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_17 ^= (((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_0] [i_1] [6] [i_3]))))) : (((/* implicit */unsigned long long int) 3563358087U)))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)54)) + (((/* implicit */int) max((var_7), ((_Bool)1))))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (unsigned char)0)), (2565468860U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (!(((/* implicit */_Bool) 2803537539U))))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(max((arr_1 [i_2 + 2] [i_2 - 1]), (((/* implicit */int) arr_9 [i_3] [i_2] [i_2 + 1] [i_2 + 2] [i_2 + 1])))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_3] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (min((((/* implicit */int) arr_6 [9])), (-1669741860)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((-452662739), (((/* implicit */int) arr_6 [i_0]))))), (11241438948490020371ULL))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                            {
                                arr_17 [i_1] [10ULL] [i_3] [i_1] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_5]);
                                arr_18 [i_1] [(signed char)9] [i_0] [i_1] [i_2] [i_0] [i_1] = max((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_14 [i_1]))), (((/* implicit */long long int) arr_1 [i_2 + 1] [i_2 + 2]))))), (arr_7 [i_0] [i_2 - 1] [i_3]));
                                arr_19 [i_0] [i_1] [i_1] [i_2 + 2] [i_1] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) (((-(882455427U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2 + 2] [i_3] [i_5])))))), (((((((/* implicit */_Bool) 2801794857U)) ? (arr_14 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))) - (((/* implicit */long long int) -2057005425))))));
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) max(((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_0] [i_1] [(_Bool)1] [i_1]))) * (0U))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_4 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18170)))))) + ((+(((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
}
