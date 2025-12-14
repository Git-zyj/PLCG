/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32786
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (~(var_12))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))) ? (max((((/* implicit */unsigned long long int) 3385076040U)), (17179869183ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16383))) ^ (0LL)))))) - (17179869170ULL)))));
    var_20 = ((_Bool) var_0);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((3490573454U), (((/* implicit */unsigned int) var_9)))))));
        var_22 *= ((/* implicit */unsigned char) (unsigned short)0);
    }
    for (long long int i_1 = 4; i_1 < 6; i_1 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_3), (4LL))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 7; i_2 += 1) 
        {
            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) var_18))) ? (min((((/* implicit */long long int) arr_2 [(unsigned char)1] [i_2])), (2548248679107531310LL))) : (arr_0 [i_1 - 4]))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_1] [i_1 - 2] [i_1]) != (3490573466U)))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 7; i_3 += 1) 
            {
                var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_0))) ? ((-(var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 909891255U)) > (17179869183ULL)))))));
                var_26 &= ((/* implicit */short) arr_1 [i_1 + 2]);
                /* LoopSeq 1 */
                for (short i_4 = 1; i_4 < 6; i_4 += 4) 
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2] [i_2] [i_3] [i_3 - 3] [i_3])) >> (((((/* implicit */int) arr_11 [i_1 - 2] [i_2 + 1] [i_4] [i_3 - 1] [9U])) - (148)))))) / (max((arr_1 [i_4 + 3]), (((/* implicit */unsigned long long int) (unsigned short)15110)))))))));
                    arr_14 [i_4 + 4] [(unsigned short)9] [i_3] [i_3] [i_2] [3U] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 1009512630)), (-101282259205204027LL)));
                    var_28 = ((((/* implicit */int) (signed char)73)) % ((-(((/* implicit */int) (short)-26998)))));
                }
            }
            var_29 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned char) 18446744056529682433ULL))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [(short)2] [i_1 + 2] [i_2 - 2] [i_2 + 3]))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) - (-9223372036854775804LL)))))));
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 1; i_5 < 8; i_5 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((int) ((unsigned char) min((((/* implicit */int) var_10)), (var_11)))));
            arr_18 [i_1 + 4] [i_5] = ((/* implicit */long long int) min((4162255688636163482ULL), (((/* implicit */unsigned long long int) 3766098308U))));
        }
        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)6] [i_1] [i_1 - 4] [(unsigned short)6])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [4] [i_1] [i_1] [i_1 - 2])) ^ (((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_1] [i_1 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) + (528868988U)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_32 *= ((/* implicit */unsigned int) ((arr_6 [i_1 - 3] [i_1 + 2] [i_1 + 1]) < (arr_6 [i_1 - 2] [i_1 - 4] [i_1 - 2])));
            var_33 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) var_15)) & (var_12))));
        }
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [i_1])) && (((/* implicit */_Bool) var_11))));
            arr_25 [i_1] [i_1 - 2] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) 0LL))));
        }
    }
    var_35 = ((/* implicit */unsigned char) var_2);
    /* LoopNest 2 */
    for (unsigned int i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        for (unsigned short i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            {
                arr_31 [i_8] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_27 [i_9 - 1])) ? (((/* implicit */unsigned long long int) (-(804393858U)))) : (arr_30 [i_8] [i_8]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (arr_30 [i_8] [i_8])))))));
                /* LoopSeq 3 */
                for (unsigned char i_10 = 3; i_10 < 13; i_10 += 3) 
                {
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) (unsigned short)45209))))) < (arr_32 [i_8 + 1])))) != (((/* implicit */int) (short)914)))))));
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (-(((arr_32 [i_8 - 1]) - (arr_32 [i_8 - 1]))))))));
                }
                for (int i_11 = 4; i_11 < 12; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        arr_38 [i_8] [i_8] [i_8] [i_8] = max(((~(var_11))), (var_5));
                        var_38 = ((/* implicit */short) min((1335521073U), (((/* implicit */unsigned int) (unsigned short)49159))));
                        var_39 = ((/* implicit */unsigned long long int) ((_Bool) 17179869204ULL));
                        var_40 = ((/* implicit */unsigned int) ((short) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) ((unsigned long long int) ((804393858U) | (2864425896U))));
                        arr_43 [(short)4] [i_8] [i_11 + 4] [i_8] = ((/* implicit */unsigned short) ((signed char) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (-5680409753351262538LL))))));
                    }
                    arr_44 [i_8] [i_8] [i_8] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) -238744621)) : (-1LL)));
                    var_42 = ((/* implicit */unsigned char) arr_36 [i_8] [i_8 + 1] [(_Bool)1] [i_8] [i_8] [i_8 - 1]);
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_11] [2LL] [i_11] [i_11 - 4]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8 + 1]))))))) ^ (max((1090715534753792ULL), (((/* implicit */unsigned long long int) var_3))))))))));
                }
                for (unsigned int i_14 = 1; i_14 < 12; i_14 += 1) 
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) -8444221935073744320LL))) || (((/* implicit */_Bool) ((signed char) arr_41 [i_8 - 1] [i_8] [i_8 + 1] [i_8 - 1])))));
                    var_45 *= ((/* implicit */unsigned short) ((_Bool) ((long long int) var_0)));
                    var_46 += ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned short) var_11))) & (((((/* implicit */int) arr_29 [10U] [10])) & (((/* implicit */int) (_Bool)0)))))) | ((~(((((/* implicit */int) (unsigned short)6820)) ^ (((/* implicit */int) var_4))))))));
                }
                var_47 = ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)209)), (((short) 2147483647))));
                /* LoopSeq 1 */
                for (short i_15 = 3; i_15 < 15; i_15 += 2) 
                {
                    arr_51 [i_8] [(_Bool)0] [i_15 - 2] &= ((/* implicit */signed char) (~(((((/* implicit */int) arr_40 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_9 - 2])) ^ (((/* implicit */int) arr_40 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_9 - 2]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 2; i_16 < 15; i_16 += 3) 
                    {
                        for (unsigned char i_17 = 2; i_17 < 15; i_17 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_8 + 2] [i_9 + 3] [i_15 - 2] [i_16 - 2] [i_17 + 1] [i_17 - 2])) ? (((/* implicit */long long int) (~(var_15)))) : ((+(((((/* implicit */_Bool) arr_46 [i_9] [i_17 - 1])) ? (var_12) : (((/* implicit */long long int) arr_28 [i_8] [i_9] [1U])))))))))));
                                var_49 = (unsigned short)58715;
                                arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned short) var_1))) : (((int) (unsigned short)32643)))) : ((~(((/* implicit */int) arr_26 [i_16 + 1]))))));
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */short) 3385076050U);
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 3; i_18 < 14; i_18 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((short) ((arr_30 [i_8 - 1] [(unsigned short)8]) | (((/* implicit */unsigned long long int) var_3))))))));
                        var_52 = ((/* implicit */int) var_18);
                        var_53 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))))) - (((/* implicit */int) ((unsigned char) 1588026246))))) < (((/* implicit */int) ((((909891266U) >> (((var_6) - (4194138997821498121ULL))))) == (((/* implicit */unsigned int) ((((/* implicit */int) arr_59 [(unsigned short)2] [i_9 - 2] [i_15] [(unsigned short)2] [i_8 + 2] [4])) >> (((var_15) - (1671057220U)))))))))));
                        /* LoopSeq 1 */
                        for (int i_19 = 2; i_19 < 14; i_19 += 3) 
                        {
                            var_54 |= ((int) ((((/* implicit */_Bool) arr_55 [i_8 - 1] [i_9 - 2])) ? (arr_49 [i_8 - 1] [i_9 - 2]) : (((/* implicit */int) var_4))));
                            arr_65 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) var_17);
                        }
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) 871491442U))));
                    }
                }
            }
        } 
    } 
}
