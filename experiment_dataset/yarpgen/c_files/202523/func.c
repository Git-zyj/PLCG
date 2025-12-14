/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202523
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_13)), (-3779444691342203509LL)))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16))))));
    var_21 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned char)6] [i_2] = ((/* implicit */int) ((_Bool) ((arr_3 [i_0]) && (((/* implicit */_Bool) min((3U), (((/* implicit */unsigned int) (unsigned char)69))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (var_4)))) ? (((((((/* implicit */_Bool) var_16)) ? (arr_5 [i_0] [i_1] [i_0 - 1]) : (((/* implicit */long long int) 2147483638)))) % (((/* implicit */long long int) ((arr_1 [13ULL]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)55456), (((/* implicit */unsigned short) (short)-9827))))) ? (((/* implicit */int) (short)32767)) : (-2147483638))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_0] [i_0] [(signed char)14] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((short) -3779444691342203509LL))) / (((/* implicit */int) max(((unsigned short)47307), (((/* implicit */unsigned short) arr_3 [i_0])))))))), (max((min((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_1 [(_Bool)1]))), (((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_2)))))));
                                arr_16 [i_0] = ((/* implicit */int) min((((((((/* implicit */_Bool) 469518024)) ? (268431360U) : (((/* implicit */unsigned int) arr_13 [i_2 - 1] [i_0])))) * ((-(var_2))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)64)))))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (-(((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4]))) > (var_2))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) (((+((~(((/* implicit */int) (_Bool)1)))))) / ((+(((/* implicit */int) arr_4 [i_0]))))));
                                var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_7 [i_4])), (var_1)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (~(2147483636)));
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_17)), (max((((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_19 [i_6] [(unsigned char)0] [i_2 - 1] [i_5])))))))));
                            var_25 *= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_15) : (var_5)))))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((((/* implicit */_Bool) arr_21 [i_1] [i_5] [i_6] [i_1] [i_6] [i_0] [i_0])) ? (arr_22 [i_0] [i_1] [i_2] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) - (((/* implicit */unsigned long long int) max((arr_14 [(_Bool)1] [i_1] [i_2 - 2] [4LL] [i_1] [i_6]), (((/* implicit */long long int) -267093514)))))))));
                            arr_23 [2ULL] [i_1] [i_2] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), ((unsigned short)65506))))) : (var_19)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (2147483647ULL)))) ? (arr_21 [1U] [i_2] [i_2] [i_2 + 4] [i_0] [1U] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 372106591)) == (var_10))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (unsigned short)65531)) : (((((/* implicit */_Bool) -2074636783)) ? (((/* implicit */int) (unsigned short)65506)) : (((/* implicit */int) (_Bool)1)))))))));
                            arr_24 [i_2] [i_1] [i_0] [i_1] [i_6] = (~(-3779444691342203509LL));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_28 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_5] [i_2 + 4] [i_0])) | (2147483647))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) 945716548))));
                        }
                        arr_29 [i_0] [i_5] [i_2] [i_5] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2] [i_2 + 4] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_27 [i_1] [i_1] [i_2] [i_2 - 3])) : (arr_22 [i_5] [i_5] [i_2 - 2] [i_2 - 3] [2])))));
                        arr_30 [i_0] [i_1] [i_1] [i_5] = ((/* implicit */int) (short)10087);
                    }
                    for (long long int i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -113337984)) ? (((/* implicit */long long int) ((/* implicit */int) ((-152483395037593642LL) == (((/* implicit */long long int) 268431360U)))))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */long long int) 178438670))))))) : (((((/* implicit */_Bool) (short)22270)) ? (16116748436621050058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_37 [i_0 - 1] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_0) && (((/* implicit */_Bool) var_5))))) & (((((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0])) ? (((/* implicit */int) (short)-32760)) : (((/* implicit */int) (short)32760)))) - ((-(((/* implicit */int) (unsigned short)5848))))))));
                            arr_38 [i_0] = ((/* implicit */int) min((min((((/* implicit */unsigned int) max((635756418), (((/* implicit */int) (_Bool)1))))), (arr_6 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 267093506)))))));
                            arr_39 [i_0] [i_0] [i_2] [i_8 + 3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)10372))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) >> (((338399958U) - (338399954U)))))))))));
                        }
                        arr_40 [i_0] [i_1] [i_2 + 3] [i_0] [i_0] = ((/* implicit */short) ((((min((((/* implicit */long long int) 2147483632)), (1992773427313613447LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-867)) >= (((/* implicit */int) arr_2 [i_1] [i_2])))))))) / (arr_14 [i_2 - 3] [i_2] [i_2 - 3] [i_2 - 1] [i_2] [i_2 - 3])));
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */int) (unsigned short)32768);
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) max((((/* implicit */long long int) -1025302642)), (((((/* implicit */_Bool) ((signed char) arr_22 [i_10] [i_10] [i_10] [i_10] [i_10]))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51628))) : (arr_41 [10]))))))));
            arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((_Bool) (_Bool)1))))) - (((((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_17))))) << (((((((/* implicit */_Bool) -267093510)) ? (2147483632) : (((/* implicit */int) (_Bool)1)))) - (2147483631)))))));
        }
        for (int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_45 [i_0] [i_11])), (((((/* implicit */_Bool) (-(-267093513)))) ? (((/* implicit */long long int) ((int) (unsigned char)56))) : (((arr_5 [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_11])))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 3; i_12 < 21; i_12 += 2) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)229)))) ? (((((/* implicit */_Bool) arr_32 [i_0 + 1] [i_11] [i_12] [i_12 - 1])) ? (max((var_5), (((/* implicit */unsigned int) (unsigned char)97)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-867)) : (2147483647)))))) : ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -267093513)) : (2390526007U)))))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) max((max((min((349695794126361382ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_11] [i_11] [i_12] [i_12] [12U])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)10355)), (var_15)))))), (max((((var_19) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))), (((/* implicit */unsigned long long int) ((-8689573336946018840LL) ^ (((/* implicit */long long int) 267093513))))))))))));
            }
        }
        arr_49 [i_0] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
        /* LoopSeq 2 */
        for (short i_13 = 2; i_13 < 20; i_13 += 1) /* same iter space */
        {
            var_34 &= ((/* implicit */unsigned int) min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [(unsigned short)21] [i_13] [(_Bool)1] [9])) && (((((/* implicit */_Bool) arr_47 [i_13] [i_13] [i_0] [i_13])) && (((/* implicit */_Bool) arr_22 [13LL] [i_0] [i_0] [i_0] [i_0])))))))));
            arr_53 [i_0] [i_13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16116748436621050088ULL)) ? (((/* implicit */unsigned int) 1903813847)) : ((~(4095U)))));
        }
        for (short i_14 = 2; i_14 < 20; i_14 += 1) /* same iter space */
        {
            arr_56 [i_0] = ((/* implicit */unsigned long long int) (-(((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [(_Bool)1] [i_14 + 1] [i_14 - 2])))))));
            arr_57 [i_0] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0])), (18446744073709551612ULL)))) ? (((((/* implicit */_Bool) 8445053978909330357LL)) ? (((/* implicit */unsigned long long int) 1243802087)) : (7643431034071666273ULL))) : (((/* implicit */unsigned long long int) (+(1830840850U))))));
            arr_58 [16U] [i_14] [i_14 - 2] |= ((/* implicit */_Bool) (+(max((((((/* implicit */unsigned long long int) 580261284U)) ^ (10522062571346863510ULL))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0 + 1] [i_14 + 2] [i_0] [i_14]))) : (18446744073709551605ULL)))))));
        }
    }
    var_35 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)119))))) ? (min((4095LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) var_18))));
}
