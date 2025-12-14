/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207181
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
    var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) 2475437984U)))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) max((var_1), (((/* implicit */signed char) var_9))))), ((unsigned char)1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) var_8);
                            var_16 += ((/* implicit */short) min((min((((var_3) | (var_10))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-22498)), (var_12)))))), (((/* implicit */unsigned long long int) var_1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)11834)) : (((/* implicit */int) var_9)))))))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] &= max((((/* implicit */short) (signed char)-93)), ((short)-11817));
                            arr_17 [i_4] [i_5] = ((/* implicit */long long int) 923395561U);
                            arr_18 [i_5] [i_4] [i_1] [i_0 + 1] = (short)22478;
                            arr_19 [i_1] [i_1] [i_1] [i_1] [(short)6] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) || (((var_7) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) | ((+(min((var_5), (((/* implicit */unsigned long long int) (unsigned char)151))))))));
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 20; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            {
                arr_26 [(unsigned char)7] [i_6] = ((/* implicit */unsigned int) (unsigned short)16384);
                arr_27 [i_7] = ((((((/* implicit */_Bool) (+(-448169450311014093LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)124)))))) : (var_13))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) * (((/* implicit */unsigned long long int) 9223363240761753600LL))))) ? (((((/* implicit */_Bool) (short)22498)) ? (((/* implicit */int) (short)-22479)) : (((/* implicit */int) (unsigned char)151)))) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        {
                            arr_33 [i_6 + 1] [i_9] [i_9] [i_9] [i_8] [i_6] = ((/* implicit */long long int) max((((380768568946475725ULL) ^ (((/* implicit */unsigned long long int) -8933045055004641107LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)16)))) == (((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) -8933045055004641107LL))) + (2147483647))) << (((((((/* implicit */int) min((((/* implicit */short) (signed char)-116)), ((short)-28604)))) + (28629))) - (25))))))));
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)29741)), (var_6))), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) min((((/* implicit */int) (short)-11821)), (((-505950429) + (((/* implicit */int) (short)-22479)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
