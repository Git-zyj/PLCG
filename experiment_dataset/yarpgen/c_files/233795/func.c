/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233795
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (short)0))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)8064)) || ((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15)) ? (((((/* implicit */_Bool) arr_0 [4])) ? (536870848LL) : (((/* implicit */long long int) arr_2 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0]) : (((/* implicit */int) var_13))))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] [i_3] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3]))))) ? (((/* implicit */int) min(((unsigned short)0), ((unsigned short)34042)))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_1] [i_2] [(_Bool)1] [i_2])) ? (((/* implicit */int) (unsigned short)34042)) : (((/* implicit */int) var_6))))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)12)), (var_4)))) ? (((/* implicit */unsigned long long int) ((arr_11 [(signed char)8]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) : (min((((/* implicit */unsigned long long int) (short)-31785)), (16380ULL))))))));
                        var_20 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((+(((/* implicit */int) (unsigned short)31515)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (arr_3 [i_0] [i_3])))) ? (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned int) (short)0))))) : ((-9223372036854775807LL - 1LL))))));
                    }
                } 
            } 
            arr_13 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) || (((/* implicit */_Bool) (signed char)-66))))), (((((/* implicit */_Bool) 2397120168U)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) var_1))))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) % (1897847127U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_1)))))))));
        }
        /* LoopNest 2 */
        for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned short) (short)-16384)), ((unsigned short)6)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) ^ (arr_16 [i_0])))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)31500)) ^ (((((/* implicit */int) (short)-19060)) ^ (((/* implicit */int) arr_6 [i_7]))))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_5]))))) & (min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_5])), (var_4)))))));
                            }
                        } 
                    } 
                    arr_22 [i_5] &= min((((/* implicit */long long int) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) min((arr_7 [i_0] [i_5] [i_5]), (((/* implicit */unsigned short) (unsigned char)251)))))))), (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_14 [i_5]))));
                    arr_23 [(unsigned short)14] [i_0] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) 0)) && (var_13))) ? (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_5 [i_5]))))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_0] [i_4 - 1])), (var_10))))))), (max((((/* implicit */long long int) min((1897847121U), (((/* implicit */unsigned int) (short)2244))))), (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_5] [i_5] [i_4 + 1] [i_0] [i_4])) ? (arr_14 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))))))));
                    arr_24 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_9 [i_0])))), (((((/* implicit */_Bool) 2397120168U)) || (((/* implicit */_Bool) (unsigned short)65529))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                {
                    var_23 *= min((((/* implicit */unsigned int) min((var_15), (var_11)))), (((((/* implicit */_Bool) (signed char)-90)) ? (min((((/* implicit */unsigned int) 709660081)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [12] [i_9])) > (((/* implicit */int) (short)21513)))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)0)), (67108862))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_12)) < (arr_29 [i_0] [i_0] [i_0])))) > (((/* implicit */int) ((((/* implicit */unsigned int) var_15)) < (1897847121U))))))), (max((((/* implicit */long long int) (+((-2147483647 - 1))))), ((-(var_8))))))))));
                            }
                        } 
                    } 
                    var_26 &= ((/* implicit */unsigned char) min((((var_9) ^ (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) max((1920U), (0U))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            for (unsigned int i_14 = 3; i_14 < 24; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_15] [i_15]))) % (arr_41 [i_13] [i_13] [i_14])));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_41 [i_12] [i_14] [i_14])))) ? ((-(arr_44 [i_14] [i_13] [i_13] [i_14] [i_13] [i_14]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)57)) | (((/* implicit */int) (short)21513)))))));
                        var_29 = ((/* implicit */long long int) (-(arr_44 [(signed char)21] [i_14 - 1] [i_14 - 1] [i_13] [(signed char)21] [i_12])));
                    }
                } 
            } 
        } 
        arr_46 [i_12] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_12]))));
    }
    for (unsigned char i_16 = 2; i_16 < 23; i_16 += 1) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */unsigned long long int) min((max((0U), (((/* implicit */unsigned int) arr_38 [i_16])))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */int) (_Bool)1)))))))) : (max((max((((/* implicit */unsigned long long int) arr_38 [i_16 + 2])), (arr_45 [i_16 - 1] [(short)20]))), (((/* implicit */unsigned long long int) (unsigned char)7))))));
        /* LoopNest 2 */
        for (short i_17 = 3; i_17 < 23; i_17 += 1) 
        {
            for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        for (int i_20 = 4; i_20 < 24; i_20 += 4) 
                        {
                            {
                                arr_60 [i_16 - 1] [i_17] [(_Bool)1] [i_18] [i_19] [i_19] [i_18] &= ((/* implicit */short) ((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))), (-4348618224185992740LL))) | (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 8855098207300026416LL)) && (((/* implicit */_Bool) 287667426198290432LL))))) / (((/* implicit */int) min((((/* implicit */short) var_12)), (arr_48 [i_19])))))))));
                                var_31 &= ((/* implicit */long long int) (~(max((var_3), (((/* implicit */unsigned int) arr_47 [i_17 - 2] [i_20 - 1]))))));
                                arr_61 [i_17] [i_19] [i_17] [i_17] [i_16] = ((/* implicit */short) min((((/* implicit */int) max((max((((/* implicit */short) (signed char)-99)), (var_7))), (min((((/* implicit */short) (unsigned char)249)), (var_7)))))), (max((((((/* implicit */_Bool) arr_57 [i_16] [i_17] [i_17 + 2] [i_18] [i_17] [i_20])) ? (32505856) : (-2147483619))), (max((((/* implicit */int) (short)32125)), (32505828)))))));
                                var_32 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((arr_52 [i_18] [i_17 - 3]) < (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_16)) ? (-67108863) : (532676608)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 25; i_21 += 3) 
                    {
                        for (short i_22 = 2; i_22 < 24; i_22 += 3) 
                        {
                            {
                                arr_68 [i_16] [i_16] [i_21] [i_21] [i_21] [i_21] [i_22] = ((/* implicit */_Bool) min(((+(arr_54 [i_22 + 1] [i_22 + 1] [i_22] [i_22]))), ((-(((((/* implicit */int) (short)-6548)) - (-2147483619)))))));
                                var_33 *= ((/* implicit */unsigned int) min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)0)))), (((/* implicit */long long int) ((532676608) > (var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned short) var_4);
}
