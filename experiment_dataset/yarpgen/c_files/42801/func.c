/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42801
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [4U] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((_Bool) min((arr_4 [i_1] [6LL] [i_0]), ((-9223372036854775807LL - 1LL)))))), ((((!(arr_2 [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : (arr_4 [i_1] [i_1] [i_1])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
                {
                    var_13 = ((((((/* implicit */_Bool) var_3)) && (arr_2 [i_0]))) || (arr_2 [i_0 + 1]));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned short)2] [i_1] [i_0])) ? (arr_8 [i_2]) : (((/* implicit */int) arr_2 [i_0]))))) ? (arr_4 [(unsigned char)10] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) > (262143LL)))))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2] [i_0 - 1] [i_0 - 1])) ? (arr_0 [i_1]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (9223372036854775800LL))))));
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_18 [i_0 + 1] [(signed char)10] [i_0 + 1] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0]);
                                arr_19 [i_5] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_4] [i_5] [i_5])) / (((/* implicit */int) arr_9 [i_5 - 3] [(short)6] [i_3]))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775804LL))) + (13LL)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3] [2LL] [(unsigned char)1] [i_3]);
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [i_3]))))) : (((/* implicit */int) arr_16 [i_0 - 1] [4] [4] [i_3] [i_1])))))));
                    arr_20 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42870))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) arr_24 [i_0] [i_1]);
                                var_20 = ((/* implicit */unsigned long long int) (+(arr_7 [i_7 + 1] [i_0 + 1])));
                            }
                        } 
                    } 
                }
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
                {
                    arr_27 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) (signed char)122)), (3725022884U)))))));
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3494720646U)) ? (((/* implicit */int) arr_13 [i_8] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 + 1]))))) >= ((~(-9223372036854775792LL))))))));
                }
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    arr_30 [i_9] [i_1] [(_Bool)1] = ((/* implicit */int) ((((long long int) arr_28 [i_0 - 1])) & (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_2)) - (142))))))))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-112)) & (((/* implicit */int) (unsigned char)30))))) || (((/* implicit */_Bool) ((arr_28 [i_0 + 1]) ? (((/* implicit */int) arr_28 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 1])))))));
                    arr_31 [i_9] = ((/* implicit */unsigned short) (+(max(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)81)) || (((/* implicit */_Bool) (signed char)106)))))))));
                    var_23 -= ((/* implicit */unsigned char) arr_5 [i_0]);
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) max((arr_23 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_9] [i_9] [i_9]), (var_6))))) / (min((((((/* implicit */_Bool) arr_16 [8LL] [6U] [i_0] [8LL] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_28 [i_9])))), (((/* implicit */int) ((short) var_11)))))));
                }
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [2] [i_0] [2] [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 + 1] [12U] [i_0 + 1] [12U] [i_0 - 1])) : ((~(((/* implicit */int) (signed char)-122))))))) ? (((/* implicit */int) arr_29 [(_Bool)1] [10U] [(_Bool)1] [(short)1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)19052))))))))));
                arr_32 [11LL] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [(unsigned short)2] [i_0] [i_1] [i_0]))))) || ((_Bool)1)))) > (((/* implicit */int) arr_2 [i_1]))));
                arr_33 [i_1] = max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32724))))), (max((((/* implicit */long long int) (unsigned short)25545)), (var_3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1])) || (((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 1] [i_1] [i_0 - 1]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) var_2))))) : ((+(((/* implicit */int) min(((short)-32725), (((/* implicit */short) var_9)))))))));
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)5487))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))))));
}
