/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231164
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)32169)) : (-1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3989564839U)) || (((/* implicit */_Bool) 2701247552765710881ULL)))))) : ((-(arr_0 [i_2])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned long long int) -1032172121);
                        arr_12 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 808428237U)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (unsigned char)172))))) : (((var_9) - (((/* implicit */unsigned long long int) 1032172121))))))) ? (((/* implicit */unsigned long long int) (((-(1739803674))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))) != (arr_4 [i_1] [i_3]))))))) : ((~(var_9)))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) 2147483647))));
                    }
                    for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) (((~(-1032172109))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8595)))))) > (((((/* implicit */_Bool) (unsigned short)41909)) ? (9223372036854775807LL) : (9223372036854775807LL))))))));
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_8 [i_4 + 1] [i_4 + 1] [i_4 - 2]))))) == (((/* implicit */int) ((var_0) != (arr_8 [i_4 + 1] [i_4 - 1] [i_4 + 1]))))));
                    }
                    for (long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        arr_20 [i_0] [i_1] [9ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) arr_6 [i_5 + 1])) : (-1032172111))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7701776942244030951ULL)))))));
                        arr_21 [6U] [6U] [6U] [9LL] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)69))))) != (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1116892707587883008LL)) : (var_14)))))) << (((min((((/* implicit */long long int) var_17)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (7233542956646227501LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))))))) - (34181LL)))));
                    }
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (-1032172122) : (((/* implicit */int) ((((/* implicit */_Bool) 8061279140151392561LL)) || (((/* implicit */_Bool) var_7)))))))) - (((((/* implicit */_Bool) (unsigned char)200)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)40)), (var_11)))) : (var_7)))));
}
