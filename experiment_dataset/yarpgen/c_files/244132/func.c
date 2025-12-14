/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244132
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
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [(signed char)16] [(signed char)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((70368744177656ULL), (((/* implicit */unsigned long long int) (unsigned short)2938))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204))) % (arr_3 [i_1]))) : (((((/* implicit */_Bool) (unsigned short)62586)) ? (18446673704965373960ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (arr_8 [i_0])))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [(unsigned char)8] [i_4] [i_4] [23ULL] [(unsigned char)23] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) == (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)21])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0] [i_0])), (arr_6 [(unsigned char)15] [i_1] [i_1]))))) : (min((7708618859278718619ULL), (5073099239333030337ULL))))) == (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_4] [i_4])), (9223372036854775807LL)))), (((((/* implicit */_Bool) 1037318739)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11359)))))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)40366)), (5U)))) ? (((((((/* implicit */_Bool) (unsigned char)220)) || (((/* implicit */_Bool) (signed char)-88)))) ? (min((12039031226736551783ULL), (((/* implicit */unsigned long long int) arr_1 [17LL])))) : (5073099239333030337ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [20] [i_4] [(_Bool)1])))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) min((arr_4 [(unsigned short)5]), (((/* implicit */unsigned char) arr_6 [i_0] [(unsigned char)18] [(_Bool)1]))))), (((((/* implicit */_Bool) 801169859)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) arr_0 [(unsigned short)2]))))))) ? (max((((/* implicit */unsigned long long int) (signed char)0)), (((((/* implicit */_Bool) 2452458432536368751ULL)) ? (2452458432536368729ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1LL]))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0])), (1037318756)))), (arr_8 [i_0])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) ((2452458432536368751ULL) / (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-81)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)18))))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_13)))) : (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        for (long long int i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) min((arr_6 [i_6 - 1] [i_6 - 2] [i_6 - 1]), (arr_6 [i_6 + 1] [i_6 + 1] [i_6 - 2])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6 - 3] [i_6 - 1] [i_6 + 1])) || (((/* implicit */_Bool) arr_6 [i_6 - 2] [i_6 + 1] [i_6 - 2]))))) - (1)))));
                arr_19 [i_5] [i_5] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_6 - 1] [i_6 - 3] [i_6 - 3])) ? (((/* implicit */int) arr_1 [i_6 - 3])) : (((/* implicit */int) (_Bool)0)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6 - 1])) && (((/* implicit */_Bool) arr_1 [i_6 - 2])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (min((((((((/* implicit */int) (signed char)-96)) + (2147483647))) << (((((/* implicit */int) var_4)) - (27))))), (((/* implicit */int) var_6))))));
}
