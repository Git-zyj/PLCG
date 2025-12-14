/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240806
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (-4316834814601613822LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4316834814601613829LL)) ? (5U) : (((/* implicit */unsigned int) 1314569266)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 + 1])));
    }
    var_13 = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_0)) - (59141))))) ^ (var_8))));
    /* LoopSeq 3 */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) ((-1314569282) != (((/* implicit */int) (unsigned char)191))));
        var_15 = ((/* implicit */int) ((-10LL) > (((/* implicit */long long int) -1314569282))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned short) (unsigned char)191);
                            var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_1] [i_2] [(signed char)2])) : (((/* implicit */int) (_Bool)1)))), (((arr_6 [i_1]) ? (-1314569282) : (((/* implicit */int) (unsigned char)183)))))))));
                            var_18 = ((((/* implicit */int) (unsigned char)53)) * (((/* implicit */int) (unsigned char)65)));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 11; i_6 += 2) 
                        {
                            var_19 -= ((/* implicit */unsigned short) ((long long int) var_9));
                            arr_16 [i_1] [(_Bool)1] [i_3] [i_3] [(_Bool)1] [i_1] = ((((/* implicit */_Bool) arr_14 [i_6 - 1] [i_6 + 1] [i_4] [i_4 + 1] [i_4 + 1])) ? (((arr_6 [i_1]) ? (var_1) : (var_6))) : ((~(((/* implicit */int) (unsigned char)65)))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3779396938U)) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_3] [(unsigned short)0] [i_2])) : (((/* implicit */int) ((unsigned char) var_3))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_5 [i_4 - 1] [i_4 - 1])), (-22LL))), (((/* implicit */long long int) min((arr_7 [i_4 - 1]), (arr_7 [i_4 + 1]))))));
                            arr_20 [i_3] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (arr_0 [i_3])));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(((arr_13 [(unsigned short)6] [4ULL] [i_4] [(unsigned short)6] [i_4 + 1] [i_4 + 1] [i_4]) >> (((/* implicit */int) arr_6 [i_4 - 1])))))))));
                            var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) & (-4LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((3432971626U), (((/* implicit */unsigned int) (signed char)82))))) || (((/* implicit */_Bool) (-(359579409))))))))));
                        }
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_4 + 1] [11] [i_3] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_3])) : (((((/* implicit */int) (signed char)57)) & (var_6))))) : (((/* implicit */int) (!(arr_6 [i_4 - 1]))))));
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) arr_6 [i_1]))))), (((unsigned long long int) (signed char)-55))))) ? (max((515570373U), (((/* implicit */unsigned int) 1314569281)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_6))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_26 [1U] [i_8] = ((/* implicit */signed char) arr_4 [i_1]);
            var_25 = ((/* implicit */unsigned int) arr_14 [i_8] [i_8] [i_1] [i_1] [i_1]);
        }
    }
    for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_29 [i_9] [i_9 + 1]))))))), (((((/* implicit */_Bool) min((391926161), (((/* implicit */int) (signed char)-55))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11194))) : (((unsigned long long int) 8932314771012102225ULL))))));
        /* LoopSeq 2 */
        for (unsigned char i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((int) ((-1LL) >= (arr_0 [i_10])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 4) 
                    {
                        arr_40 [i_9 + 1] [i_9 + 1] [i_12] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((signed char) arr_37 [i_9 + 2] [i_9] [i_9] [i_9] [i_9] [i_9]))) ? (((((/* implicit */_Bool) arr_35 [i_10])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned char)4] [(unsigned char)4]))))) : (((/* implicit */unsigned long long int) min((-1076673696933247051LL), (((/* implicit */long long int) 521600806))))))), (((((/* implicit */_Bool) (~(-4316834814601613818LL)))) ? (((((/* implicit */_Bool) arr_36 [i_10] [i_10] [i_10] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) != (((/* implicit */int) var_0))))))))));
                        var_28 = ((/* implicit */unsigned short) ((((min(((((-2147483647 - 1)) | (((/* implicit */int) (unsigned char)57)))), (((/* implicit */int) arr_39 [i_9 + 1] [i_9 + 1])))) + (2147483647))) >> (((min((((unsigned int) 1533638227357913350ULL)), (((/* implicit */unsigned int) (unsigned char)255)))) - (245U)))));
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)52086)) && (((/* implicit */_Bool) (unsigned short)0)))))));
                    }
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    arr_43 [i_14] [i_14] [i_11] [6ULL] [i_14] [i_9] = ((/* implicit */unsigned long long int) ((signed char) arr_31 [i_14]));
                    arr_44 [i_14] [(_Bool)1] [i_14] [i_14] [i_9 + 3] [i_9 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_30 [i_9 - 1])) : (((/* implicit */int) arr_28 [i_9 - 1]))));
                    arr_45 [i_14] [i_11] = ((/* implicit */unsigned long long int) -741802836);
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_42 [i_10] [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10 + 2])))))));
                }
                arr_46 [i_9] [i_10 + 2] [i_10 + 2] = ((/* implicit */unsigned long long int) (-((~(((int) arr_34 [i_9] [(signed char)4] [i_11] [i_9]))))));
            }
            for (long long int i_15 = 4; i_15 < 10; i_15 += 3) 
            {
                var_31 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_27 [i_10])), ((+(((unsigned long long int) arr_39 [i_9] [i_9]))))));
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    for (int i_17 = 3; i_17 < 12; i_17 += 4) 
                    {
                        {
                            var_32 -= ((/* implicit */unsigned int) ((signed char) 4294967295U));
                            arr_59 [i_9 - 1] [8] [8] [5] [i_9] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) var_8)) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14007873058674824757ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min(((unsigned char)6), (((/* implicit */unsigned char) (signed char)-77)))))))) : (max((((/* implicit */unsigned long long int) (unsigned char)22)), (((((/* implicit */_Bool) -2131876850)) ? (0ULL) : (((/* implicit */unsigned long long int) var_1))))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */int) (unsigned char)44))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_57 [i_9] [i_10] [i_10] [i_15 - 4] [i_15 + 2]) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_9))))))), (((((/* implicit */_Bool) min((arr_49 [i_9]), (((/* implicit */int) var_4))))) ? (min((arr_48 [i_9 - 1] [i_10] [i_9 - 1]), (var_8))) : (((((/* implicit */_Bool) arr_31 [i_15])) ? (((/* implicit */int) (_Bool)0)) : (var_8)))))));
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_9)), (4316834814601613825LL))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)226))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) arr_56 [i_9 + 3] [i_10 + 2] [i_15 + 1] [i_9 + 3] [i_15 - 3]))))) ? (min((var_2), (((/* implicit */unsigned long long int) arr_57 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_15 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_38 [i_9 - 2] [i_9 - 1] [8U] [i_9 - 2])))))))))));
                /* LoopSeq 1 */
                for (int i_18 = 2; i_18 < 10; i_18 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_19 = 4; i_19 < 9; i_19 += 2) /* same iter space */
                    {
                        arr_65 [i_15] [i_15] [i_15 + 1] [i_15] [i_15 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_18 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_9 + 3] [(_Bool)1] [i_10 - 1] [i_15 + 2] [i_18 + 2]))) : (((17410708555578758928ULL) >> (((((/* implicit */int) arr_27 [i_15 - 2])) + (133)))))));
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_61 [i_10 - 1] [i_18 + 2] [i_19 + 2] [i_19 + 4] [i_19 - 2] [i_19 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9 - 2]))) : (arr_32 [i_15 + 2] [i_18 + 3] [i_19 + 3])));
                        var_36 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_30 [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (3U))) / (((/* implicit */unsigned int) ((var_8) / (-1625931833))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_20 = 4; i_20 < 9; i_20 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) ((unsigned char) var_4));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30891)) | (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) -2559371314578201736LL)) & (12001664342561676691ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */int) (unsigned short)56676)) : (((/* implicit */int) var_0)))))));
                        var_39 = ((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))));
                    }
                    for (long long int i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        var_40 = ((/* implicit */signed char) min((var_40), (max(((signed char)40), ((signed char)43)))));
                        var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4316834814601613831LL)) ? (arr_38 [i_9] [i_9 + 1] [i_9 - 1] [(unsigned char)4]) : (arr_38 [i_18] [i_15 + 1] [i_10] [i_9 + 2])))) ? (((/* implicit */int) ((short) arr_63 [i_9 + 3] [i_10] [i_15] [i_18 + 2] [i_15]))) : (((((/* implicit */_Bool) arr_1 [i_15 - 2])) ? (((/* implicit */int) arr_1 [i_18 + 1])) : (var_1)))));
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (4316834814601613831LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10 + 1]))) : (8388607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2349043410869196345LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-87)))))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_75 [i_9 - 1] [9] [i_15 + 3] [i_15 + 3] = ((/* implicit */unsigned long long int) (signed char)-106);
                        arr_76 [i_9 - 2] [i_22] [i_15] [i_18] [i_9 - 2] [i_18] [i_15] |= ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned short)27725)), (-735960523)));
                    }
                }
            }
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_71 [i_10] [i_10 - 2] [i_9] [i_9])) ? (((/* implicit */int) arr_47 [i_9] [i_9] [i_9 + 2] [i_10])) : (var_6))), (((((/* implicit */_Bool) arr_53 [i_10] [i_9] [i_10 - 1] [i_9] [i_9] [i_9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) arr_68 [i_10 - 2] [i_9] [i_9] [2U] [i_9])) ? (((/* implicit */unsigned long long int) arr_37 [i_9 - 2] [i_9 - 2] [i_10] [i_10 - 2] [i_10 + 1] [i_9 - 2])) : (arr_35 [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [2] [i_9 - 1]))))) : (((/* implicit */unsigned long long int) ((unsigned int) min((arr_35 [i_9]), (((/* implicit */unsigned long long int) arr_70 [i_10] [i_10] [i_9 - 2] [i_9 - 1] [i_10 + 2])))))))))));
        }
        for (unsigned char i_23 = 2; i_23 < 11; i_23 += 4) /* same iter space */
        {
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8452057221064686135LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)83))) : (-716545394037957LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_60 [i_23] [i_9 + 3] [i_9] [i_9 - 1] [i_9])) : (((/* implicit */int) (signed char)-1)))) : (min((650345887), (((/* implicit */int) arr_69 [i_9 - 1]))))));
            arr_80 [i_9] [i_9 - 1] [i_9 - 1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_71 [i_9 + 1] [i_9 - 2] [i_23 + 2] [i_9 - 2])) ? (var_6) : (1336624150))));
        }
    }
    for (unsigned long long int i_24 = 2; i_24 < 10; i_24 += 2) /* same iter space */
    {
        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_24 - 1] [i_24 - 1] [i_24 + 1] [i_24 - 1] [i_24 - 1]))) & (((18446744073709551615ULL) >> (((4983811531255365397ULL) - (4983811531255365346ULL)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (arr_32 [i_24] [i_24] [i_24]) : (arr_34 [i_24 + 3] [i_24 - 1] [i_24] [i_24])))) ? (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */unsigned int) arr_48 [i_24] [i_24 + 3] [i_24])) : (4237191697U))) : (max((((/* implicit */unsigned int) arr_28 [i_24])), (57775613U)))))) : (min((((/* implicit */long long int) arr_53 [i_24] [i_24 - 2] [i_24] [i_24] [i_24 + 2] [i_24])), (min((((/* implicit */long long int) var_4)), (8905712465879420344LL))))))))));
        var_46 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (-1139268239)));
    }
}
