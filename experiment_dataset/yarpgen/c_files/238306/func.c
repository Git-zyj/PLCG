/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238306
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) max(((unsigned char)0), ((unsigned char)255))))))), (((((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (unsigned char)70)))))))));
    var_21 = var_16;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((0U), (((/* implicit */unsigned int) (unsigned short)0)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)51797)))))))) ? (((/* implicit */int) var_11)) : ((((_Bool)0) ? (((/* implicit */int) max(((unsigned char)254), (arr_8 [i_3] [i_0] [i_3])))) : (((/* implicit */int) var_3))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_23 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((short) 444966892))), (((4294967295U) << (0)))));
                            arr_11 [(signed char)18] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((((/* implicit */unsigned int) 0)), (0U))) : (((4294967295U) << (((2147483647) - (2147483638)))))))) ^ (((((/* implicit */_Bool) -3876942161029198409LL)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)14109)) + (((/* implicit */int) (unsigned char)136))))) : ((((_Bool)0) ? (3876942161029198408LL) : (var_19)))))));
                            var_24 = ((/* implicit */unsigned short) ((unsigned char) (+(8938909358882289711ULL))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_0])) : (((/* implicit */int) (_Bool)1))))), (max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)13738)))))))));
                            arr_15 [(unsigned char)6] [i_3] [(unsigned char)6] [i_3] [(unsigned char)23] [i_0] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [23U] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_12 [(short)1] [i_1 + 2] [i_1] [i_1 + 1] [i_1]))))) : (-3876942161029198409LL)))), (min((((((/* implicit */_Bool) (unsigned short)0)) ? (13816735788465259280ULL) : (8938909358882289711ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) : (0U))))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */long long int) var_14);
                            var_27 *= ((/* implicit */int) ((((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) % (arr_5 [i_1] [i_1] [i_1 + 3] [i_1]))))) >= (((/* implicit */int) min((min((arr_4 [i_0] [i_3]), (((/* implicit */unsigned short) arr_18 [i_3])))), (((/* implicit */unsigned short) arr_0 [i_3])))))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)47668)) ? (((/* implicit */int) ((8938909358882289711ULL) < (((/* implicit */unsigned long long int) -1368600931594976830LL))))) : (min(((+(((/* implicit */int) (signed char)-71)))), (((/* implicit */int) min(((unsigned short)11345), (var_16))))))));
                        }
                        var_29 = ((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)70)))), ((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((2147483616) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) < (2147483616))))));
                        arr_22 [i_0] [i_1 + 2] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0)))) << (((((/* implicit */int) var_16)) - (8679)))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) : (var_17))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) var_5)))))));
                        var_31 = ((/* implicit */unsigned short) var_5);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_32 &= ((/* implicit */unsigned char) (((-(1368600931594976830LL))) - (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)1))))))));
                        var_33 = ((/* implicit */unsigned int) (unsigned short)0);
                        arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min(((_Bool)0), ((_Bool)1)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_34 ^= ((((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) -7778528139810613635LL))))) ? (((/* implicit */int) (unsigned short)20450)) : (((/* implicit */int) var_11)))) == (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned int) var_5)), (3752164067U))))));
                            var_35 ^= ((/* implicit */unsigned char) var_19);
                        }
                        for (int i_11 = 2; i_11 < 21; i_11 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned short) ((long long int) max(((((_Bool)1) ? (140737488355327LL) : (-9044278127534880394LL))), (((/* implicit */long long int) ((arr_19 [i_1] [i_1 + 3] [i_1] [(_Bool)1]) != (((/* implicit */long long int) ((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_1] [(short)0] [i_1])))))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (2848899513088537514LL)))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)1918)))) : (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(var_13)))))) : (3752164067U)));
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])), (18446744073709551615ULL)))));
                            var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_11] [i_0] [i_11])) ? (((((/* implicit */int) (unsigned char)176)) ^ (((/* implicit */int) var_16)))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1))))))), (2251799813685248ULL)));
                        }
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((_Bool) max((((/* implicit */long long int) min(((unsigned char)3), ((unsigned char)78)))), (((((/* implicit */_Bool) 5147078947578028034LL)) ? (-9044278127534880394LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))));
                    }
                    var_38 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)14])) >> (((/* implicit */int) ((_Bool) arr_1 [(_Bool)1])))))), (((((/* implicit */_Bool) ((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))) : (0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11045503392580215845ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))))))));
                }
                for (signed char i_12 = 3; i_12 < 22; i_12 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        var_39 = ((/* implicit */_Bool) ((11045503392580215845ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_0])))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -289377055)) ? (9044278127534880394LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1 - 1] [i_1] [i_1 + 2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_9))))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_30 [i_0] [i_13 + 1])) : (((/* implicit */int) arr_46 [i_0] [i_0]))))))))) : (min((min((((/* implicit */unsigned int) (_Bool)1)), (2523947949U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_10)))))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -9044278127534880394LL);
                        arr_50 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */short) min((((((((/* implicit */int) arr_43 [i_0] [i_0] [i_13])) + (2147483647))) >> (((((/* implicit */_Bool) 0)) ? (arr_29 [i_0] [6U] [i_0]) : (((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32766)) ^ (((/* implicit */int) var_10))))) <= (3326861800U))))));
                    }
                    for (unsigned char i_14 = 1; i_14 < 23; i_14 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) ((_Bool) (unsigned char)128))) : ((~(((/* implicit */int) (_Bool)0)))))) - (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1771019347U)))))));
                        arr_53 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) 18444492273895866368ULL)) ? (-289377055) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */_Bool) ((signed char) 2523947949U));
                        arr_56 [i_12] [(_Bool)1] [i_12 + 1] [i_0] [i_12] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 281474976677888ULL)))))) : (((unsigned int) (unsigned char)255)))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned char) min((max((7431612720269411711ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)32767)), (((((/* implicit */_Bool) 4271127763U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_60 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 112U);
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 140737219919872LL))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0))))))) - (((arr_25 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                        var_45 = ((/* implicit */signed char) (_Bool)1);
                    }
                }
                arr_61 [i_0] [12LL] = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_15)), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)16320)) ? (-9044278127534880394LL) : (var_19))))));
            }
        } 
    } 
}
