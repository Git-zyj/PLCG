/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201464
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
    var_12 += ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-85)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 597619226)) ? (max((((/* implicit */unsigned long long int) (unsigned short)41752)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10237)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_7 [i_0] [(unsigned short)22] = (~(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)23804)) : (((/* implicit */int) var_0))))), (arr_5 [i_0 - 1]))));
            var_13 ^= ((/* implicit */unsigned long long int) ((int) ((int) 1870395892)));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) / (6842586900907771176LL)))) ? (((/* implicit */int) var_11)) : (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) var_8)) - (99)))))))), (536870911U))))));
                            arr_16 [(unsigned char)10] [i_1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)179)), (arr_6 [i_1] [i_3] [i_4]))));
                            arr_17 [2U] [20U] [i_1] = ((/* implicit */unsigned short) var_4);
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */long long int) ((2803544837U) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) arr_5 [i_0])), (arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15092836486426082227ULL)) ? (arr_15 [i_1] [i_1] [i_2] [i_3 - 2] [i_4]) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (max((128U), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [7U] [16U])))) : ((~(((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) 6842586900907771170LL)))))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 1; i_5 < 21; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) 
                {
                    arr_23 [i_0] [i_1] [i_0] [9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23799)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (unsigned short)65535))));
                    var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_5] [(unsigned char)12])))) && (((/* implicit */_Bool) (~(9U))))));
                    arr_24 [(unsigned char)4] [i_1] [i_5 - 1] [20] = ((/* implicit */int) (((-(35184372088704ULL))) / (((/* implicit */unsigned long long int) 2947198392U))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                {
                    arr_29 [i_7] [16LL] = ((/* implicit */short) (((+(((/* implicit */int) var_0)))) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_5 + 2] [i_0]))));
                    arr_30 [4U] = ((/* implicit */unsigned int) var_8);
                    var_17 = ((/* implicit */unsigned int) var_8);
                }
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                {
                    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 915272183U)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_2 [i_5])));
                    arr_33 [(unsigned short)20] [i_1] [i_5] [i_0] [(unsigned short)20] [i_0] = ((/* implicit */unsigned long long int) -7725532960240684784LL);
                }
                arr_34 [i_0] [7] [i_1] [0LL] = ((/* implicit */unsigned char) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 2]);
                var_19 = ((/* implicit */int) var_6);
                arr_35 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 - 1] [i_0 - 1] [i_5 + 2] [i_0 - 1] [i_5 + 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 67108864U)) ? (((/* implicit */int) (unsigned short)41763)) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (long long int i_9 = 3; i_9 < 22; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (293326206U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18046)))));
                        var_21 = ((((/* implicit */_Bool) ((((3063487673U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [(_Bool)1]))))))))) ? ((~(((9223372036854775801LL) + (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11] [i_10] [(_Bool)1] [i_0]))))))) : (((max((-3596768522415543510LL), (((/* implicit */long long int) var_0)))) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1723972227U)) : ((-(min((10489394936500857000ULL), (((/* implicit */unsigned long long int) arr_37 [12] [12])))))))))));
                        arr_48 [i_12] [i_12] [i_12] [i_1] [i_12] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_9 - 3] [i_0]))) != (((unsigned int) arr_47 [i_1] [i_9 + 1] [i_1]))))) - (((/* implicit */int) arr_21 [i_12] [i_10 - 1] [i_9 - 1] [6ULL]))));
                        arr_49 [i_0] [i_0] [i_9 - 2] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_44 [19U] [i_12] [i_10 + 1] [i_9 - 3] [i_12] [i_12] [i_0])))))) ? (min((536870912U), (((/* implicit */unsigned int) (unsigned short)65521)))) : (((((/* implicit */_Bool) (-(1006632960U)))) ? (((/* implicit */unsigned int) 1069154802)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1840947830U)))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (-(((arr_6 [(_Bool)1] [i_1] [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-87)) + (((/* implicit */int) (unsigned char)128))))))))))));
                    }
                    for (int i_13 = 3; i_13 < 22; i_13 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127)))))));
                        arr_54 [i_1] [i_1] [i_9] = ((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_9 - 2] [i_0] [i_13] [(unsigned char)4]);
                    }
                    for (int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        arr_57 [i_0] [(signed char)17] [i_1] [(signed char)17] [(signed char)17] [i_1] [i_14] = ((/* implicit */_Bool) var_7);
                        arr_58 [i_0] [(short)4] [i_0] [i_10] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)130), (((/* implicit */unsigned char) var_7)))))))) <= (((((/* implicit */int) arr_38 [i_0 - 1] [i_1] [i_9 + 1] [i_14])) - (((/* implicit */int) ((unsigned char) arr_10 [i_0] [2U] [i_0] [(short)15])))))));
                        var_25 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 428926067)) - (18446744073709551615ULL)))))));
                    }
                    arr_59 [i_10] [i_9] [1] [1] = ((/* implicit */int) max((((/* implicit */long long int) -916092089)), (144115188075855872LL)));
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 23; i_16 += 2) 
                    {
                        {
                            arr_64 [i_0] [i_1] [18LL] [i_9 + 1] [i_15] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (short)16932)) & (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2280535845U))))) != (var_3)));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_21 [i_0 + 1] [i_1] [i_16] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1526886681U))))) : (var_5))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */long long int) 511ULL);
                var_28 += ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) (signed char)60)) : (-1114444774))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47489))) > (((unsigned int) (_Bool)1)))))));
            }
        }
        for (long long int i_17 = 2; i_17 < 20; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (short i_18 = 4; i_18 < 19; i_18 += 3) 
            {
                for (unsigned char i_19 = 2; i_19 < 21; i_19 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) ((((_Bool) min((((/* implicit */long long int) var_0)), (arr_55 [i_0] [10U] [i_18] [i_19 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (5425294412284765120ULL)))))))) : (((((/* implicit */_Bool) arr_2 [i_18 - 3])) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24834)))))));
                        var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(9198045390170681559LL)))), (max((((/* implicit */unsigned long long int) (unsigned short)18046)), (13021449661424786495ULL)))));
                    }
                } 
            } 
            arr_72 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (min((609574653U), (((/* implicit */unsigned int) -1157699701)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? ((+(((/* implicit */int) (unsigned short)47490)))) : (((/* implicit */int) ((unsigned short) 831101100)))));
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                for (long long int i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    {
                        arr_77 [i_17] [i_21] [i_20] [(short)9] [i_17] [i_17] = ((/* implicit */unsigned short) 2250700302057472LL);
                        arr_78 [i_0] [i_17] [i_17] [i_21] [i_21] [i_20] = ((/* implicit */_Bool) max((((/* implicit */int) var_2)), (2147483643)));
                    }
                } 
            } 
        }
        arr_79 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
    }
    var_31 = ((/* implicit */signed char) (~(9198045390170681559LL)));
}
