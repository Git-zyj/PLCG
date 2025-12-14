/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200573
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
    var_12 = ((/* implicit */unsigned int) -1905534344);
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2081983601U))))) : (((int) 16372754203738192921ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) < ((-(6477494621857107725ULL))))))) : (2673290193487939338LL)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 - 2])), (arr_0 [i_0 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_15 = min((max((((/* implicit */unsigned long long int) (signed char)-56)), (min((((/* implicit */unsigned long long int) 3221225472LL)), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_2])))) ? (((unsigned int) 1540185786)) : ((+(1543719225U)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 7; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (arr_11 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_4 - 2] [7U] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_4 + 1] [i_4] [(short)0] [i_4])))))) ? (min((((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_4 + 2] [i_4 - 2] [(signed char)3] [i_4])), (-1189463401))) : (((/* implicit */int) ((arr_11 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [1ULL] [i_0 + 2]) <= (arr_1 [i_0 + 2] [i_4 - 2]))))));
                                var_17 = (+((~(((((/* implicit */_Bool) (short)-31985)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) -2042369881))));
                                var_19 ^= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0]))))), (((((/* implicit */_Bool) 2042369880)) ? (((/* implicit */int) (signed char)-37)) : (425150907)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [(unsigned short)5] [(unsigned short)5]))) < (min((var_2), (arr_2 [i_0 - 2] [i_1] [i_2])))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) max((((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0])), (46517996))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1]))) : (((((/* implicit */_Bool) 2751248070U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) : (-6701898792803165503LL)))))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) + ((~(((/* implicit */int) (signed char)32)))))) << (((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) arr_10 [i_0] [i_0] [(signed char)6])))) - (65510)))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-56)) / (((/* implicit */int) (signed char)87))))) : (((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (var_9)))))) || (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_9 [i_0])), (7810340689708981751ULL))), (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1])))))));
    }
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) 2582343565U))) : (((/* implicit */int) var_10))))) : (var_6))))));
}
