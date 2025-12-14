/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240583
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_0))));
    var_20 *= ((/* implicit */int) var_15);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((9223372036854775806LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) ? (max((5988378322538826417ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))) : (5988378322538826402ULL)));
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) arr_0 [i_0 + 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)63488)) : (((/* implicit */int) (_Bool)1))))) : (max((12458365751170725217ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((12458365751170725214ULL), (((/* implicit */unsigned long long int) var_14))))) ? (max((((/* implicit */unsigned int) arr_0 [i_0])), (2662033398U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (1015105402)))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 12458365751170725214ULL))))));
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) / ((+(((/* implicit */int) arr_0 [i_0]))))))) ? (5988378322538826426ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39202))) >= (((unsigned long long int) (_Bool)0))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 4; i_1 < 23; i_1 += 1) 
    {
        for (unsigned int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 24; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        for (int i_5 = 4; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_25 = max(((+(((/* implicit */int) min((arr_10 [(unsigned char)8] [(unsigned char)8] [i_5] [i_5] [5U]), (((/* implicit */unsigned short) (short)-32149))))))), (2147483640));
                                arr_16 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12458365751170725214ULL)) ? (arr_5 [i_3 + 1] [i_2 + 1] [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32769)) ? ((-(((/* implicit */int) (signed char)75)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)32768)) / (((/* implicit */int) (short)4105))))))));
                }
            } 
        } 
    } 
    var_26 = ((long long int) var_14);
}
