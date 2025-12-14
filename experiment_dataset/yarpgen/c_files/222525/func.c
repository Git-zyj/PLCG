/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222525
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1] [i_1 + 1]) < (arr_4 [i_0] [i_1])))), (max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))))));
                    var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) (short)5350)) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1])))), (((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)53762)) : (((/* implicit */int) (unsigned short)53793))))));
                    var_12 *= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((-1844877681), (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)53789)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_9)))) + (((/* implicit */int) var_2))))) : (((((var_7) < (((/* implicit */long long int) arr_4 [i_0] [i_2])))) ? (max((((/* implicit */unsigned long long int) var_7)), (5295486991355216800ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (var_1))))))));
                    var_13 += ((/* implicit */unsigned int) min((13151257082354334816ULL), (((/* implicit */unsigned long long int) 799844255U))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (unsigned short)41186)))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53784))) : (2363066705U)))), (((((/* implicit */_Bool) (short)-28217)) ? (((/* implicit */long long int) 2363066701U)) : (9169246697089438493LL)))))) ? (((-1372039071) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_8)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_16 ^= (!(((/* implicit */_Bool) var_3)));
                            var_17 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned short)11727))));
                            var_18 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) var_3)));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13643)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14152193405154806892ULL)));
                        arr_16 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_14 [i_0])))));
                        arr_17 [i_0] [i_0] [i_1] [i_2 - 1] [i_1] = ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1])) ? (5295486991355216800ULL) : (((/* implicit */unsigned long long int) arr_10 [i_1 + 1] [i_1 + 1])));
                        var_20 = ((/* implicit */long long int) var_2);
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (unsigned char)204);
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((unsigned short) var_0))) : (((((/* implicit */_Bool) -1563081211)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)11727))))) : (((/* implicit */int) max((var_8), (((/* implicit */signed char) arr_0 [2ULL])))))))));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)561)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))))));
        var_22 = ((/* implicit */int) ((unsigned char) arr_1 [i_0]));
    }
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((536805376) < (((/* implicit */int) (short)496))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(arr_0 [i_6])))), ((+(((/* implicit */int) (unsigned short)57587))))));
    }
    var_24 = ((/* implicit */long long int) var_3);
    var_25 = ((/* implicit */unsigned long long int) (unsigned short)53824);
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((((int) var_8)) + (((((/* implicit */int) var_9)) + (((/* implicit */int) var_3))))))));
}
