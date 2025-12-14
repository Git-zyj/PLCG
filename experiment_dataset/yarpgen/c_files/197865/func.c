/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197865
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2 - 2])) | (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_2])) - (((/* implicit */int) (unsigned char)114))))), (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * ((+(((/* implicit */int) var_9)))))))));
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)64368)) ? (((/* implicit */int) (unsigned short)64368)) : (((/* implicit */int) (short)-27197))));
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_14))));
                }
                var_18 = ((/* implicit */int) ((short) ((((/* implicit */int) var_7)) + ((-(((/* implicit */int) (unsigned short)64393)))))));
                /* LoopSeq 4 */
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 2) 
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)64364);
                    var_19 += (unsigned short)1627;
                    var_20 = ((/* implicit */_Bool) ((unsigned char) (unsigned short)1176));
                }
                for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2] [i_4]))) != (arr_10 [i_0] [i_1 + 3] [i_1 + 3] [i_0])))))));
                    var_22 -= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_6 [i_1 + 2] [i_1 - 1] [i_0]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (((var_8) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64364)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)1172)))))))));
                }
                for (signed char i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    var_23 |= ((/* implicit */unsigned char) (short)-16956);
                    var_24 = ((/* implicit */short) var_8);
                    var_25 = ((/* implicit */unsigned char) var_1);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_26 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (~(arr_14 [i_0] [i_1 + 3] [i_1 + 3] [i_0])))) ? (((var_0) * (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64364)))))))));
                    var_27 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        var_28 += var_12;
                        var_29 -= ((/* implicit */unsigned int) ((int) var_8));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (((((/* implicit */_Bool) var_14)) ? (var_5) : (var_8)))));
                            arr_23 [i_0] [i_0] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1] [i_7])) ? (((/* implicit */int) (unsigned short)64372)) : (((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2] [i_6] [i_7]))));
                            var_31 = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0]);
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_1 + 3] [i_7])) : (((/* implicit */int) ((var_12) != (var_8))))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)64368)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)64336))))))));
                        }
                        var_34 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_6] [i_6])))))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_7))));
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (97027949U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_14)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_9 - 1])))))))) : ((-(((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned short)64372))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56775))) <= (((long long int) (unsigned short)58020))))) << (((((((/* implicit */_Bool) (short)-14111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1164))) : (642501147U))) - (1137U)))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) var_13)))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((2883666066U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-25556)))));
                        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((arr_19 [14LL]), (((/* implicit */unsigned int) (unsigned short)64360)))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))) ? (((((/* implicit */_Bool) (unsigned short)1176)) ? (1041128989U) : (134217216U))) : (((/* implicit */unsigned int) ((((int) arr_20 [i_10] [i_10] [i_6] [(unsigned short)22])) & (((/* implicit */int) ((_Bool) 2626322545U)))))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_33 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned short)7)), (92793946U)));
                        var_39 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-17338)) + (((/* implicit */int) var_9))))) + (((unsigned int) (unsigned short)64336))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)21)) - (((/* implicit */int) var_14))))))))));
                    }
                    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) -221852853)) <= (92733167U)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)64372)) : (((/* implicit */int) var_13))))));
                        var_42 = (~(((/* implicit */int) (unsigned short)47035)));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (92793946U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51)))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1168))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_12] [i_0])) || (var_3))))))) / ((((+(var_6))) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                    }
                }
                arr_36 [i_0] = ((/* implicit */unsigned short) (signed char)86);
            }
        } 
    } 
    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8))))))) && (((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_3)), (var_6))), (var_6)))))))));
}
