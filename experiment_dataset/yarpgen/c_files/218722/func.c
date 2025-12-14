/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218722
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) var_11);
                    var_21 += ((/* implicit */unsigned short) min((10269852351492115649ULL), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (10269852351492115622ULL)))));
                    var_22 ^= ((/* implicit */unsigned char) arr_2 [i_0 + 1]);
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 + 1]))) ? (arr_3 [i_0 - 1] [i_0 - 1] [i_2]) : (((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)20)))) | ((~(((/* implicit */int) var_12))))))));
                }
                for (int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (10269852351492115624ULL) : (((/* implicit */unsigned long long int) var_5))))) ? (var_19) : (((/* implicit */int) ((_Bool) arr_2 [i_0])))))) - (((0U) << (((((int) var_4)) - (57)))))));
                    var_25 = ((/* implicit */long long int) var_11);
                    var_26 = ((/* implicit */short) max((min((((((/* implicit */int) arr_8 [(unsigned short)4])) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_10 [i_1])))))), (((/* implicit */int) (_Bool)0))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_27 = ((((/* implicit */_Bool) var_8)) ? (((((var_5) + (2147483647))) << (((((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1390041840U))) - (1U))))) : (((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 + 1])))));
                            arr_20 [i_4] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((var_15) << (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (8176891722217435967ULL)));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned int) arr_1 [i_4])) : (4294967293U)));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (max((((((/* implicit */_Bool) arr_6 [(unsigned short)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1]))) : (1390041840U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 8285373642426178077ULL)) ? (-234792717) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_0))))))));
                            var_30 = ((/* implicit */int) arr_2 [i_1]);
                        }
                        var_31 |= ((/* implicit */signed char) arr_7 [i_0 + 1] [i_0 + 1]);
                        var_32 = ((/* implicit */unsigned long long int) var_9);
                    }
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        var_33 = ((/* implicit */int) arr_15 [i_0] [i_1] [9] [i_7]);
                        var_34 ^= ((min((max((((/* implicit */unsigned int) var_18)), (var_14))), (((/* implicit */unsigned int) var_10)))) << (((((/* implicit */int) arr_8 [i_7])) - (38))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        for (int i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            {
                                var_35 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 19U)) ? (((var_0) ^ (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) 4294967274U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9 - 1])) ? (min((((/* implicit */long long int) (unsigned short)20)), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))))))))));
                                var_36 = var_18;
                                var_37 = ((/* implicit */int) ((short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8468))) : (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) arr_29 [i_0 - 1] [i_0 - 1] [i_0] [(signed char)1] [i_4]))));
                    var_39 -= ((/* implicit */unsigned char) (signed char)127);
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_40 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (((long long int) arr_24 [i_1] [7] [i_10] [9U] [i_11]))))) >= (((((/* implicit */_Bool) 3582169218U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (var_19)))) : (((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0 - 1]))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned char) 790992826U);
                            arr_42 [i_10] [i_10] = ((/* implicit */_Bool) (unsigned short)8461);
                        }
                        for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned long long int) 3503974470U);
                            var_43 = ((/* implicit */int) max((max((-1195035455917327741LL), (((/* implicit */long long int) arr_43 [i_1])))), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_10))) > ((-(((/* implicit */int) arr_8 [i_11])))))))));
                            var_44 = 2904925440U;
                            var_45 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) 4294967277U))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23))) : (arr_19 [i_0] [i_1] [i_10] [i_11] [i_13]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 39U)) ? (((/* implicit */int) (unsigned short)59452)) : (((/* implicit */int) arr_4 [i_13] [i_10] [i_1])))))))));
                        }
                        for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                        {
                            var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned char) 13099964736352620523ULL)))))))));
                            var_47 += ((/* implicit */unsigned char) ((var_2) & (((/* implicit */unsigned long long int) max((1390041840U), (((/* implicit */unsigned int) var_19)))))));
                            var_48 = ((/* implicit */signed char) var_12);
                            arr_47 [i_10] [i_1] [i_10] [i_11] [i_14] [i_14] = var_2;
                        }
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned short) 3699717255U);
                            var_50 = (!((!(((/* implicit */_Bool) var_0)))));
                            var_51 = (~(((((/* implicit */_Bool) arr_37 [i_0 - 1])) ? (arr_37 [i_0 + 1]) : (arr_37 [i_0 + 1]))));
                            arr_52 [i_0] [i_0] [i_0] [i_10] [i_11] [i_0] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_44 [i_0 - 1] [i_1] [i_10] [(_Bool)0] [i_0 - 1] [i_1] [i_10]), ((unsigned char)212))))) : (((((((/* implicit */_Bool) (unsigned char)255)) ? (4294967295U) : (((/* implicit */unsigned int) 2004708331)))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_15])))))));
                        }
                    }
                    for (signed char i_16 = 3; i_16 < 8; i_16 += 1) 
                    {
                        arr_55 [i_0] [i_10] [i_10] [7U] = ((/* implicit */unsigned char) (unsigned short)28);
                        var_52 = ((/* implicit */unsigned long long int) var_12);
                        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) var_7))));
                        var_54 = (!(((/* implicit */_Bool) var_7)));
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((max((var_17), (((/* implicit */unsigned long long int) var_5)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((1390041846U) > (((/* implicit */unsigned int) arr_27 [i_0] [i_0 - 1] [i_1] [i_16 + 2] [i_16 + 3])))))))))));
                    }
                    arr_56 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46962))) : (var_3)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
                }
            }
        } 
    } 
    var_56 = ((/* implicit */short) ((long long int) var_12));
    var_57 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (-(var_17)))))));
    var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) (+(((long long int) ((unsigned char) var_8))))))));
}
