/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215761
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    arr_6 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    var_19 = ((/* implicit */unsigned long long int) (short)-17403);
                    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 4294967295U)) : (2775481398164933355LL)));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_0))));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned short) ((unsigned char) max((((unsigned short) arr_7 [i_3] [i_1] [(unsigned char)10])), (((unsigned short) var_10)))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (var_10))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) -2775481398164933355LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_3] [(unsigned short)0])))))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) min((max((2775481398164933355LL), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)0))))) & (((unsigned int) 6661897125524484423ULL)))))));
                        var_24 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((11784846948185067188ULL) >= (((/* implicit */unsigned long long int) 2775481398164933354LL)))))) : (((unsigned int) 16U)))), (((/* implicit */unsigned int) min(((((_Bool)0) ? (-1113119187) : (((/* implicit */int) var_13)))), (arr_4 [i_0] [i_0] [i_3] [i_0]))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((((unsigned int) var_5)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_1 - 1]))) >= (arr_10 [i_0])))))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_16 [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */long long int) 0U)) : (-2775481398164933355LL)))))) : (((((/* implicit */unsigned long long int) 3428457244281374405LL)) + (11784846948185067193ULL)))));
                        var_26 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (short)11757)) >> (((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) 1969786437U))), (15103357854607496061ULL))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) var_8))))))))))));
                        var_29 ^= ((/* implicit */short) (+(min((1461287734U), (((/* implicit */unsigned int) (_Bool)0))))));
                        var_30 ^= ((/* implicit */short) var_8);
                    }
                    for (short i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        arr_22 [i_0] [i_7] [i_0] = min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((unsigned short)44830), (var_0))))))));
                        var_31 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) 1U))), (min((((((/* implicit */_Bool) (short)-19376)) ? (arr_19 [i_0] [i_1 - 1] [i_0] [i_0] [i_3] [(unsigned short)8]) : (((/* implicit */int) var_13)))), ((-(((/* implicit */int) (unsigned short)20706))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) 3655990955665591254ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20706))) : (arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                            var_33 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)44832)) : ((~(((/* implicit */int) var_16)))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 1U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1]))))) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
                            arr_30 [i_10] [i_0] [i_3] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (short)27431)) : (((/* implicit */int) (unsigned short)17010))));
                            var_36 -= ((/* implicit */unsigned long long int) var_7);
                            arr_31 [i_0 + 1] [i_0] [(short)3] [i_3] [i_8] [i_8] [i_8] = (-(((/* implicit */int) var_17)));
                        }
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_37 *= ((/* implicit */int) (-(-3238837196882527947LL)));
                            var_38 = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                            var_39 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_40 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31977)) ? (11784846948185067188ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_41 += ((/* implicit */short) (!(((/* implicit */_Bool) ((4649934573644931697LL) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1 - 1]))))))));
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((int) (signed char)20)))));
                        }
                        for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
                        {
                            arr_41 [i_13] [i_1 - 1] [i_13] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17010))) : (4894951717163160528ULL))));
                            arr_42 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (9) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))) : (6033488961402032175LL)));
                            arr_43 [i_13] [i_8] [i_8] [i_8] [i_8] [i_1 - 1] [i_0] &= ((((/* implicit */_Bool) (unsigned short)48525)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) : (4645455207627516084LL));
                        }
                        var_43 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_1 - 1]))));
                    }
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                {
                    arr_46 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */int) (short)-17390)) != (((/* implicit */int) (unsigned short)26618)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 4; i_15 < 9; i_15 += 4) 
                    {
                        var_45 = ((/* implicit */short) (_Bool)1);
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (((((/* implicit */_Bool) 10723087170793548312ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17021)))))));
                        arr_50 [i_1 - 1] [i_1 - 1] = ((/* implicit */signed char) 4503599627370495ULL);
                        arr_51 [i_15] [i_1] [i_14] [i_1] = ((/* implicit */_Bool) (unsigned short)53248);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_3 [i_16])));
                                var_48 = ((/* implicit */signed char) (unsigned char)199);
                            }
                        } 
                    } 
                }
                arr_59 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-((-(max((((/* implicit */long long int) (short)-21164)), (-2900748367318352341LL)))))));
                var_49 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6661897125524484428ULL)) ? (arr_45 [i_1 - 1] [i_1 - 1] [i_1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) : ((-(arr_45 [i_1 - 1] [i_1 - 1] [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_50 ^= ((/* implicit */signed char) var_0);
    var_51 |= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
    var_52 = ((/* implicit */int) min((((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (1704308962)))) ? (min((3405456791260131564ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (var_5))), (var_5)));
}
