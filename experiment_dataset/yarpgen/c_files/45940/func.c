/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45940
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) (!(((var_10) == (((/* implicit */long long int) ((/* implicit */int) (short)18880)))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) min(((unsigned short)384), (((/* implicit */unsigned short) (short)-1570))));
                        arr_13 [(unsigned char)0] [i_0] [i_2] [i_2] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */unsigned char) arr_4 [8LL] [(signed char)0]);
        /* LoopSeq 3 */
        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) != ((~(((/* implicit */int) var_15))))));
            arr_17 [i_0] = ((((/* implicit */_Bool) ((short) arr_11 [i_0] [i_0] [i_4] [7ULL] [i_4] [i_4]))) ? (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_14)))) - (((/* implicit */int) var_1))))) : (444713253133756387ULL));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_17))));
            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_6))))) | ((~(2147483646LL))))))));
            arr_20 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_2)), (max((((/* implicit */unsigned long long int) arr_6 [i_0])), (0ULL)))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    {
                        arr_27 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0 - 2]), (((/* implicit */short) arr_18 [i_0 + 2]))))) ? (((/* implicit */int) max((arr_18 [i_0 + 2]), (((/* implicit */signed char) var_3))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0 - 2])) <= (((/* implicit */int) (short)2397)))))));
                        arr_28 [i_0] [i_0] [i_0 - 2] [(short)4] = ((/* implicit */int) 18002030820575795229ULL);
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 70368744177648ULL))))), (max((((((/* implicit */_Bool) 1388155441U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1966080U))), (min((((/* implicit */unsigned int) var_15)), (561726703U)))))));
                            var_25 = ((/* implicit */short) ((signed char) ((((unsigned int) var_14)) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) -811885134)) : (4128723467U))))));
                        }
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                        {
                            arr_34 [i_0] [i_9] [i_6] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1388155441U)))) ? (max((((/* implicit */unsigned long long int) ((short) var_11))), (max((((/* implicit */unsigned long long int) (signed char)108)), (7195092491613004226ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0 - 2]))))))));
                            var_26 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (8679530468507372367ULL)))) ? (arr_25 [i_0] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_17))))));
                            arr_35 [i_0] [i_5] [i_0] [i_7] [(signed char)10] = ((/* implicit */unsigned char) var_10);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_2))));
            arr_40 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 16726874173869126723ULL))));
            arr_41 [i_0] [i_0] [i_10] = ((/* implicit */long long int) arr_1 [i_0]);
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_33 [i_0 - 2] [i_0] [i_0 + 2] [13U] [i_0]))));
        }
        arr_43 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) - (max((((/* implicit */unsigned int) max((var_3), ((_Bool)0)))), (((((/* implicit */_Bool) arr_18 [i_0])) ? (var_12) : (1966080U)))))));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_28 -= ((/* implicit */signed char) var_1);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            arr_48 [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_18 [i_12]);
            /* LoopSeq 1 */
            for (unsigned short i_13 = 3; i_13 < 15; i_13 += 3) 
            {
                arr_51 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) var_1);
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8444249301319680LL)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) 1388155441U))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)74))))) : (((/* implicit */int) ((short) (_Bool)1)))));
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    arr_54 [i_11] [i_12] [i_12] [i_11] [i_12] = (+(arr_14 [i_13 - 1] [i_13] [i_13 - 1]));
                    var_30 *= ((/* implicit */unsigned long long int) (signed char)108);
                    var_31 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_12]))) ^ (18342389120043104458ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24136))));
                }
            }
            arr_55 [i_12] |= ((/* implicit */unsigned long long int) var_9);
            /* LoopSeq 1 */
            for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 17; i_16 += 4) 
                {
                    for (short i_17 = 1; i_17 < 15; i_17 += 1) 
                    {
                        {
                            arr_66 [i_11] [i_17] [i_11] [i_16] = ((/* implicit */long long int) arr_46 [i_16 - 1] [i_11] [i_17 + 3]);
                            arr_67 [i_17 + 3] [i_11] [i_15] [i_11] [(short)9] = ((/* implicit */short) arr_65 [i_11] [i_12] [i_12] [i_12]);
                            var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_12)))) ? (((/* implicit */int) (unsigned char)88)) : (((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) arr_16 [i_16])) : (((/* implicit */int) (_Bool)1))))));
                            arr_68 [i_11] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_33 [i_11] [i_11] [i_11] [i_16] [i_17 + 2])) | (((/* implicit */int) arr_47 [i_11] [i_15])))));
                        }
                    } 
                } 
                arr_69 [i_11] [i_15] [i_12] [i_11] = ((/* implicit */unsigned int) 2509526236122973179LL);
                var_33 = (short)28489;
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */int) (_Bool)0);
                            arr_74 [i_18] [i_11] [i_15] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)86)) == (-1663586674)));
                            arr_75 [i_18] [i_18] [i_18] [i_11] [i_18] [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) var_13)))));
                            var_35 -= ((/* implicit */unsigned int) ((arr_12 [i_11] [i_11] [i_11] [i_11] [i_11]) + (((/* implicit */unsigned long long int) 3733240592U))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 3095631768598020029LL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_12] [i_12]))) | (arr_45 [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11]))))))));
            }
        }
        var_37 = ((/* implicit */_Bool) max((var_37), (((((((((/* implicit */int) arr_39 [(_Bool)1] [i_11])) + (2147483647))) >> (((((/* implicit */int) arr_39 [(_Bool)1] [i_11])) + (3560))))) <= (((/* implicit */int) ((((/* implicit */int) arr_39 [(_Bool)1] [i_11])) > (((/* implicit */int) arr_39 [(_Bool)1] [i_11])))))))));
    }
    var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
}
