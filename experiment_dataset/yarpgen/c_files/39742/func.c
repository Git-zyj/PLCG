/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39742
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
    var_10 = ((/* implicit */int) var_2);
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1731033522U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5)))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) * (4017944804U)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */signed char) max((((/* implicit */long long int) 458752)), (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(-6873794223589635027LL))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_0)))))))));
                    arr_9 [i_2] [(signed char)1] [i_2] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (arr_5 [i_0 + 1] [i_2] [i_2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) + (arr_1 [(_Bool)1])))) == ((+(arr_7 [i_2])))))))));
                    arr_10 [i_2] [5U] = ((/* implicit */unsigned char) ((unsigned int) ((635197010U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7971))))));
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((528482304) / (((/* implicit */int) (signed char)-75))))) > (arr_11 [i_3 - 1] [i_3] [i_0])));
                    var_14 -= ((/* implicit */unsigned char) (_Bool)0);
                }
                for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_15 -= ((/* implicit */signed char) arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_1] [i_0 + 2] [i_4] [i_5] [i_5] [i_4]))))) || (((/* implicit */_Bool) arr_18 [i_0 - 3] [i_0 - 3] [i_4] [(_Bool)1] [i_4] [i_0 - 3]))));
                                arr_19 [i_5] [i_5] [i_4] [i_5 - 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(3475065788U)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (_Bool)1)))))) <= (((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((/* implicit */int) ((-5142486643810215195LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_0])))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    arr_24 [i_1] [i_7] = ((unsigned int) ((((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0 - 1] [i_0] [i_7]))) / (((/* implicit */int) arr_21 [i_0] [i_0]))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-97))))), (((long long int) var_5)))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_21 [i_7] [i_1])) == (((/* implicit */int) arr_18 [i_1] [i_1] [i_7] [i_1] [i_7] [i_1])))) && (((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [5U] [i_0 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [1] [1])))))))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) var_4);
                                arr_30 [i_9] [i_7] [i_7] [i_7] [i_7] [i_0 + 2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) 3348379398U)) - (var_9)))) ? (min((var_8), (((/* implicit */long long int) arr_25 [2ULL] [2ULL])))) : (((/* implicit */long long int) ((/* implicit */int) ((15714678709901890493ULL) != (arr_5 [i_8] [i_7] [i_0]))))))), (((long long int) 3659770285U))));
                                arr_31 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_25 [i_9] [i_7]), (arr_25 [i_8] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0 - 3] [i_0 + 2] [i_0 + 2] [i_8])) && (((/* implicit */_Bool) arr_25 [i_9] [i_0])))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_7] [i_0 - 2])) ? (arr_5 [i_0] [i_7] [i_0 - 1]) : (arr_5 [i_0] [i_7] [i_0 - 1])))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((arr_34 [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0 + 1]), (((/* implicit */short) (signed char)78))))))));
                            var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (max((arr_32 [(unsigned short)0] [i_1] [i_10]), (((/* implicit */unsigned int) (unsigned short)23663)))))), (((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_1] [i_10] [i_10]))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((var_3) <= (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                            arr_37 [4U] [4U] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((signed char) (((~(var_3))) + (((/* implicit */long long int) ((arr_0 [i_0]) ^ (((/* implicit */int) (signed char)-111))))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)41885))))) % ((+(2156955462U))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_9);
}
