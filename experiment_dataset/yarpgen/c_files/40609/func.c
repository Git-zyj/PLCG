/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40609
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23936)) ? (((/* implicit */int) ((_Bool) (unsigned short)203))) : (((/* implicit */int) ((unsigned short) (short)1008)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((10677405389302266990ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))))));
                                var_14 = ((/* implicit */unsigned short) (!((_Bool)0)));
                                arr_12 [i_0] [(signed char)5] [(unsigned short)2] [(_Bool)1] [i_4] [(short)9] = ((/* implicit */_Bool) ((long long int) (_Bool)0));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_5] [(unsigned short)3] [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= ((-(1789989433U)))));
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (_Bool)1)))));
                        var_17 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)13229)) : (((/* implicit */int) (short)-3))));
                        var_18 = ((/* implicit */signed char) ((3995294865228550513ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9)))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (unsigned char)131)))));
                        var_20 = (_Bool)0;
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)43873))));
                                var_21 = ((/* implicit */short) ((((/* implicit */int) (short)20)) ^ (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] = ((((/* implicit */long long int) 1335191010U)) <= ((-9223372036854775807LL - 1LL)));
        var_22 = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 5298362870272270282LL))));
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) max(((((!((_Bool)0))) || ((_Bool)0))), (max(((_Bool)1), ((!(((/* implicit */_Bool) -1812391931))))))));
        arr_29 [i_9] = ((/* implicit */unsigned short) min(((((((_Bool)1) || ((_Bool)0))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31)))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) (short)-2262)))))));
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-24545)), (((1500584732U) | (420621189U)))))) : (4503599627370495ULL)));
}
