/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42613
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
    var_19 = ((/* implicit */unsigned int) min(((short)-12344), (((/* implicit */short) var_12))));
    var_20 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 2])))) ? (max((((/* implicit */int) (short)12321)), (((((/* implicit */int) (short)12343)) | (((/* implicit */int) (short)12343)))))) : (((/* implicit */int) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-12344))))))))));
                    var_22 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((signed char) (unsigned char)16))))), (((/* implicit */int) max((arr_5 [i_1 - 2] [i_1] [i_2 - 1] [i_2 - 2]), (arr_5 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_2 - 2]))))));
                    var_23 &= ((/* implicit */signed char) max((min((((/* implicit */long long int) (short)12344)), (max((var_16), (((/* implicit */long long int) (short)12321)))))), (((/* implicit */long long int) (-(((/* implicit */int) min(((short)-12318), (arr_4 [i_0] [i_0] [i_0])))))))));
                    var_24 += ((/* implicit */long long int) var_14);
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 737705934U)) ? (10317073204113510512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12322)))))) && (((/* implicit */_Bool) (unsigned char)112)))) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) >> (((((/* implicit */int) (short)12358)) - (12350)))))), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                }
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (3223870250U))), (((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 - 1] [i_0]))));
                var_26 = ((/* implicit */unsigned long long int) (short)-12336);
                var_27 = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 4 */
                for (long long int i_3 = 2; i_3 < 22; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1 + 2] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_14 [i_4] [i_4] [i_4] [i_4]);
                                var_28 = ((/* implicit */unsigned long long int) min(((-((+(((/* implicit */int) (short)12339)))))), (((arr_15 [i_0] [i_3] [i_5 + 1]) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_3] [i_4])) ? (((/* implicit */int) (short)12336)) : (((/* implicit */int) arr_6 [i_0] [i_4] [i_3])))) : (((((/* implicit */_Bool) (short)12343)) ? (((/* implicit */int) (short)-12336)) : (((/* implicit */int) (short)-12344))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12344)) ? (((/* implicit */int) arr_15 [i_3 + 2] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) ? (((/* implicit */int) (short)15639)) : (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) (short)1507)) : (((((/* implicit */_Bool) (short)12336)) ? (((/* implicit */int) (short)12321)) : (((/* implicit */int) (short)12344))))));
                    arr_18 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [13U] [i_1] [i_3])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12346))) : (10748826387880079367ULL)))))) ? (var_7) : (((min((arr_11 [i_0] [i_0] [i_0]), (((/* implicit */int) (short)-12343)))) / (((/* implicit */int) min((((/* implicit */short) arr_7 [i_1 + 3] [i_3 - 2])), ((short)-12336))))))));
                }
                for (unsigned char i_6 = 1; i_6 < 23; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (short)-12324)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (short)12350)))), ((~(((/* implicit */int) arr_7 [i_6] [i_7])))))), (((/* implicit */int) var_9))));
                                arr_26 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)254)) ? (9223372036854775807LL) : (((/* implicit */long long int) -481703144)))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12344)) ? (((/* implicit */int) arr_22 [i_7] [i_7 + 2] [i_7] [i_7 + 2])) : (((/* implicit */int) (short)1507)))))));
                                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((short) (_Bool)1)))));
                                arr_27 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) arr_10 [i_0] [i_8] [i_6]);
                                var_32 += ((/* implicit */unsigned long long int) -481703132);
                            }
                        } 
                    } 
                    arr_28 [9U] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_1 - 2] [i_6 + 1])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-12343))))));
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_6] [i_0] [i_0])), (((((/* implicit */_Bool) 481703152)) ? (3935138369U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25142))) : (max((arr_24 [i_0] [i_0] [i_0] [i_6] [i_6]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3935138378U)) ? (var_7) : (((/* implicit */int) (short)-12336)))))))));
                }
                for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    var_34 = (((_Bool)1) ? (3935138378U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    var_35 = ((/* implicit */signed char) max((((/* implicit */int) min((arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 2]), (arr_4 [i_1 - 2] [i_1] [i_1 - 1])))), (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 3])));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_36 = ((/* implicit */_Bool) (short)-25122);
                    var_37 = ((/* implicit */short) min((var_37), ((short)-12342)));
                }
            }
        } 
    } 
}
