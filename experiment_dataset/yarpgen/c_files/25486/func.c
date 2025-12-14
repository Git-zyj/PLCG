/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25486
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */unsigned int) 120842693)) : (arr_0 [i_1 + 3]))) >= (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 + 3]))))))));
                    var_16 = var_3;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 &= ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) (+(120842692)))) : (-6941749227538040667LL));
                                arr_11 [i_0] [i_0] [i_2] [13] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_2])))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) arr_4 [i_3] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_3] [i_4])) : (((((/* implicit */unsigned long long int) 120842699)) / (arr_2 [i_0]))))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_13)))) - (((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned char)140)))))))));
                                arr_13 [i_0] [i_3] = ((/* implicit */unsigned short) max(((_Bool)0), ((_Bool)1)));
                                arr_14 [(unsigned short)6] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) 1898353586U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                arr_21 [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_5 + 1]) != (3933461926U))))) : (((((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_5 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) : (arr_8 [i_6] [0LL] [i_5 + 2])))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) arr_10 [i_5 - 1] [i_6] [i_5 + 3] [i_7] [0U])))))));
                    arr_25 [6ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)26976)), (arr_1 [i_5 + 2] [i_6]))))));
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_32 [i_8] [16U] [(short)4] [i_9] [i_9] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (8983308518797996867ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62085)))))))));
                        var_19 = ((_Bool) ((arr_16 [i_5 + 3] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5 + 3])) && (((/* implicit */_Bool) arr_0 [i_5 + 1]))))))))));
                        var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((((/* implicit */_Bool) arr_18 [i_5])) || (((/* implicit */_Bool) arr_16 [i_6] [(_Bool)1])))))))));
                    }
                    var_22 = ((/* implicit */short) arr_6 [i_5] [i_5] [i_5 + 2] [i_5 + 3]);
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) arr_16 [i_6] [i_6]);
                                arr_39 [i_8] [i_8] [i_6] [i_8] [i_10] [i_11] [i_11] = ((/* implicit */signed char) arr_17 [i_5] [i_11]);
                                arr_40 [i_5 + 3] [i_8] = ((/* implicit */int) (+(((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)79))) : (((((/* implicit */_Bool) 2618634332U)) ? (var_2) : (((/* implicit */long long int) arr_8 [i_8] [(unsigned char)16] [12U]))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_26 [(unsigned char)10] [(unsigned char)10] [i_8] [2])) ? (((arr_34 [i_5] [i_5] [i_6] [i_8]) ? (arr_1 [i_5 + 3] [(unsigned short)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33042))))) : (((/* implicit */long long int) arr_18 [i_5])))) : (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_5] [i_5 + 2] [i_5]))) <= (var_5))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
                }
                for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    arr_45 [i_12] [i_12] [i_6] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)112))))) != (((((/* implicit */_Bool) ((9223372036854775804LL) | (((/* implicit */long long int) 120842693))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((5757524254752100529ULL) << (((((/* implicit */int) var_14)) + (15248)))))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            var_25 += ((/* implicit */unsigned int) (short)-7384);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_3 [i_13]), (arr_3 [i_13])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_6] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(signed char)20] [i_13] [i_12] [i_13] [(unsigned short)5]))) : (arr_27 [i_6] [i_13] [i_14])))), (((((/* implicit */_Bool) -934981063)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (5757524254752100529ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_18 [i_13])) ? (arr_27 [i_13] [i_6] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)21972))))))))));
                        }
                        for (short i_15 = 0; i_15 < 18; i_15 += 2) 
                        {
                            var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (14676267275981167985ULL)))) ? ((~(((/* implicit */int) arr_17 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_5] [i_12] [i_6] [i_6]))) == (arr_24 [i_15] [i_6]))))))) ? (((/* implicit */int) (!(((-1105952717) == (((/* implicit */int) arr_42 [i_5] [i_5] [i_12]))))))) : (((/* implicit */int) arr_23 [i_5] [i_5]))));
                            arr_55 [i_6] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_5 - 1] [i_5 + 3]), (arr_1 [i_5 + 2] [i_5 + 2])))) ? ((+(arr_1 [i_5 + 2] [i_5 + 1]))) : (max((arr_1 [i_5 - 1] [i_5 + 1]), (arr_1 [i_5 + 1] [i_5 + 2])))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            var_28 = ((((((/* implicit */_Bool) var_5)) ? (max((1281284873U), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49876))))) : (((/* implicit */int) arr_17 [i_5 + 1] [i_5 + 2]))))));
                            var_29 = ((((/* implicit */_Bool) max((arr_43 [i_5 + 2] [i_5 + 2] [i_5 + 2]), (arr_43 [i_5 - 1] [i_5 + 2] [i_5])))) && (((min((((/* implicit */unsigned int) (unsigned short)43563)), (arr_18 [i_6]))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))))));
                        }
                        arr_60 [i_5] [i_5] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_15 [i_6] [i_12])))))))) % (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [(_Bool)1]))))) ? (max((((/* implicit */unsigned long long int) var_12)), (arr_2 [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32563)))))));
                }
                var_31 += ((/* implicit */unsigned long long int) arr_7 [i_5]);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_1))))) <= (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)141)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) max((3013682423U), (((/* implicit */unsigned int) (unsigned char)141))))))))) : (((((/* implicit */_Bool) var_7)) ? (max((var_8), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-4)) * (((/* implicit */int) (unsigned char)253)))))))));
}
