/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208794
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned short)0)))))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (unsigned char)1))))) / (((/* implicit */int) arr_1 [i_0 + 2]))));
        var_19 = ((/* implicit */long long int) arr_1 [i_0 + 1]);
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) max(((unsigned char)251), (((/* implicit */unsigned char) arr_3 [(unsigned short)14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 766684424U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)47031))))) : (max((var_13), (var_5))))) >> (((arr_4 [i_1]) - (4477301709959878996LL))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (unsigned short)65535))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 4) 
        {
            for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_11 [i_1] = max(((-(((/* implicit */int) (unsigned short)21)))), (((/* implicit */int) (!((_Bool)1)))));
                    var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((arr_7 [i_3 + 1] [i_2 + 1]) / (((/* implicit */int) arr_9 [i_3 - 3] [16ULL] [i_1]))))) > (4282141594U)));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_23 = min((((/* implicit */unsigned long long int) (((-(var_8))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23099)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)6] [i_2 - 1] [i_2 + 4]))) : (9223372036854775808ULL))));
                                var_24 = ((((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)12)), ((unsigned short)22305))))))) >> (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3]))))) : (((/* implicit */int) (unsigned short)2551)))));
                                var_25 = ((/* implicit */int) arr_10 [(short)4] [i_3 + 2] [i_4]);
                                var_26 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) var_12)))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_6))))) & (((/* implicit */int) arr_16 [i_2 - 3] [i_4] [i_4] [i_3] [(unsigned short)9] [i_2 - 3] [i_1])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) arr_5 [i_3 - 1]);
                                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_17)), (((unsigned char) arr_17 [i_6] [i_3 + 2] [i_2])))))) <= (min((((/* implicit */unsigned long long int) (unsigned char)11)), (14960840022599839378ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) var_3);
    var_30 -= ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_10)), (((((/* implicit */int) (unsigned char)129)) * (((/* implicit */int) var_3))))))));
}
