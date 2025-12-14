/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31096
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
    var_15 = ((/* implicit */unsigned int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) min((316459928U), (((/* implicit */unsigned int) -937246701))));
                var_16 = ((/* implicit */_Bool) arr_1 [i_1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 17; i_2 += 2) 
                {
                    arr_10 [i_0] [i_2] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) -937246704)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 937246704)) : (var_9)))) && (((/* implicit */_Bool) 3978507397U))));
                        arr_15 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) var_14);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3978507397U)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)127)))))));
                        arr_16 [i_2] = ((/* implicit */unsigned char) ((unsigned int) (~(-937246718))));
                        var_18 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 2] [i_1] [i_2] [i_3]))) / (6741136510299463128LL))) / (((/* implicit */long long int) ((937246678) - (var_11))))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_19 [(signed char)1] [i_1] [i_4] = ((/* implicit */short) (signed char)64);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294967281U)))) <= ((+(arr_3 [i_4]))))))) == (((unsigned long long int) (signed char)-80)))))));
                    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) min((((/* implicit */short) arr_5 [(_Bool)0] [i_1] [(signed char)1])), ((short)0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    var_21 = ((/* implicit */int) max(((signed char)-63), ((signed char)-22)));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)0))));
                    arr_24 [i_0] [i_0] [i_1] [(unsigned char)10] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 3978507372U))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 2; i_6 < 16; i_6 += 1) 
                    {
                        arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) (+(-222734405)));
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_31 [i_6] [i_7] [(unsigned char)3] [i_5] [i_5] [i_1] [i_6] = ((/* implicit */short) ((arr_25 [i_1] [i_0] [i_1] [i_0]) ? (arr_9 [(short)0] [i_1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                            var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [(unsigned short)1] [16ULL] [i_5] [16ULL] [(signed char)11])) ? (((/* implicit */int) ((((/* implicit */int) (short)20779)) == (((/* implicit */int) (short)5011))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [(signed char)15] [(signed char)15] [i_0 - 2])) || (arr_25 [i_6] [i_5] [i_1] [i_0]))))));
                            arr_32 [i_0 + 3] [i_6] [(unsigned char)10] [i_6] [i_7] = ((/* implicit */int) ((arr_29 [i_0 + 4] [i_1] [i_5] [i_5] [i_0 + 4]) % (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            var_23 &= ((/* implicit */unsigned long long int) arr_20 [(unsigned char)5] [i_0 - 2]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) 937246696);
                            var_25 = ((/* implicit */short) var_9);
                            var_26 *= ((/* implicit */signed char) var_2);
                            var_27 += arr_17 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_6 + 1];
                        }
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((signed char) var_12))), (((((/* implicit */unsigned long long int) var_4)) * (var_9)))))));
    var_29 = ((/* implicit */_Bool) ((-937246704) / (((/* implicit */int) (signed char)-55))));
}
