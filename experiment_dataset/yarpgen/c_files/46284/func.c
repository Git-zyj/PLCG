/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46284
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_14 = ((((/* implicit */unsigned long long int) max(((+(arr_2 [i_1] [i_1]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_3] [i_1] [i_1])))))))) % (min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1] [i_3 + 2])), (((((/* implicit */_Bool) 17LL)) ? (576460752286646272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)76)) ? (arr_5 [i_1] [i_2] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1]))))), (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_1] [i_1]))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) (unsigned char)0);
                    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_5 [i_0] [i_0] [i_0] [i_1])))))))));
                    arr_12 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [(signed char)1] [i_0] [(signed char)1] [i_1])) ? (((long long int) var_4)) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_1] [i_4] [i_1])) % (((/* implicit */int) (unsigned char)149)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1 + 1] [i_4] [i_5] [(signed char)2] [i_6] = ((/* implicit */unsigned char) (-(var_10)));
                                var_17 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_5] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1 + 1] [i_1] [i_1 + 1])), (arr_10 [i_1] [i_1] [7LL])))) ? (6306667750699362815LL) : (arr_5 [i_0] [i_0] [i_1] [i_1])));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 - 1])) : (arr_4 [i_1] [i_1 + 1] [i_1 + 1])));
                    arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 1]);
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-30571)))) : (2054108054)))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_22 [i_1 - 1] [i_1] [i_1 + 1])))) ? (((((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))))) ^ ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) && (((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))));
                    arr_25 [i_0] [i_1] [(signed char)9] = ((/* implicit */signed char) min(((+(((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_11 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_10 [i_8] [i_1] [(_Bool)1])))))))));
                    var_21 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_0 [(unsigned char)11] [i_0]))))));
                }
                for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    var_22 = ((((/* implicit */_Bool) (+(arr_22 [i_0] [i_1] [i_9])))) ? (min((arr_22 [i_0] [i_1 + 1] [i_9]), (((/* implicit */unsigned long long int) var_11)))) : (min((arr_22 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (signed char)-90)))));
                    arr_30 [i_1] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0] [i_1]);
                    var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_9] [i_9])) ? (arr_5 [i_0] [i_0] [i_0] [i_9]) : (((/* implicit */long long int) 2575717114U))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (short)-30961)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_1 + 1] [(unsigned short)9])))) : ((+(((/* implicit */int) (signed char)69))))));
                    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) arr_7 [i_0] [i_1] [2ULL] [i_0])))))) / (((((/* implicit */_Bool) (unsigned short)16757)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_9]))) : (var_4))))) : (((/* implicit */unsigned long long int) min((((long long int) arr_20 [i_0] [i_0] [i_0])), (var_10))))));
                }
                arr_31 [i_1] = ((/* implicit */_Bool) -1LL);
                var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_0] [i_1] [(_Bool)1] [i_1 + 1])), (min((((/* implicit */int) (unsigned char)235)), (var_2)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) : (268435392U)))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_9);
    var_27 = ((/* implicit */short) (~((((~(var_3))) | (var_2)))));
    var_28 *= ((/* implicit */signed char) max((var_0), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1)))))));
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_4))), (((/* implicit */unsigned long long int) var_6))))) ? (max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) (signed char)12)))))) : (((/* implicit */int) ((var_3) > (((/* implicit */int) min((var_8), (var_8)))))))));
}
