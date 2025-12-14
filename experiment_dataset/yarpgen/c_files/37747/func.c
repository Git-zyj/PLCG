/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37747
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1]))) : (0ULL))) << (((((/* implicit */int) ((short) var_7))) - (23987)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) ((short) 49735002783333420LL)))))) ? (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_6 [i_2])))))) : (((/* implicit */int) var_12))));
                                arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((var_11) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32631)) ? (((((/* implicit */_Bool) (unsigned short)23470)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-21147)))) : (((((/* implicit */_Bool) (short)-5683)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)8064)))))))));
                    var_19 = ((/* implicit */unsigned int) arr_6 [i_1]);
                    var_20 ^= ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
        var_21 = ((/* implicit */long long int) (~(((unsigned long long int) arr_0 [i_0]))));
    }
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (short)32767))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_6]))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 2; i_9 < 18; i_9 += 4) 
                        {
                            arr_25 [i_9 - 2] [i_8] [i_7] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_20 [i_9] [i_9] [i_9 - 1] [i_9]))));
                            var_24 -= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (short)21164)))))))));
                        }
                        for (short i_10 = 2; i_10 < 18; i_10 += 4) /* same iter space */
                        {
                            arr_29 [i_5] [i_5] [i_5] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_6])))) << (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) : (var_8))) != (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)21128))))))))));
                            var_25 = ((/* implicit */int) (short)1016);
                            var_26 ^= ((/* implicit */short) (+((+(arr_5 [i_6] [i_5] [i_5])))));
                        }
                        for (short i_11 = 2; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            arr_34 [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1033))) : (arr_27 [i_5] [i_6] [i_7 + 1])))) & (((/* implicit */int) arr_12 [i_6] [i_8] [i_7] [i_6] [i_6]))));
                            arr_35 [i_5] [i_7 + 1] [(_Bool)1] = ((/* implicit */unsigned short) arr_22 [i_7]);
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_11]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) /* same iter space */
                    {
                        arr_39 [i_5] [i_6] [i_7 + 1] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_12] [i_5] [i_6] [i_5] [i_5] [i_5]))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(1488438649U))))));
                        var_28 = arr_38 [i_12] [i_12] [i_7 - 1] [i_7 + 1] [i_6] [i_5];
                    }
                }
            } 
        } 
    } 
}
