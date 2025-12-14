/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19847
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            arr_5 [i_0] [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))));
            var_11 = ((/* implicit */unsigned int) (signed char)56);
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_12 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) / (4103733401U)))));
            arr_8 [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_2]);
        }
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    var_13 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32766))))), (min((((/* implicit */unsigned long long int) var_4)), (6331274574865075467ULL))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)38592)) : (((/* implicit */int) (signed char)1)))))))));
                    var_14 &= ((/* implicit */signed char) ((_Bool) arr_10 [i_0]));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_18 [i_3] [i_4] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (267386880)));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) < ((-(arr_7 [(unsigned char)10] [i_3] [i_0]))))))));
                    arr_19 [i_4] = ((/* implicit */_Bool) arr_11 [i_0]);
                }
                arr_20 [i_0] [i_0] [1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4 + 1]))))) ^ ((~(((/* implicit */int) (short)-32742))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_16 *= (!(((/* implicit */_Bool) max((arr_6 [(signed char)0] [i_3]), (((/* implicit */long long int) (short)32767))))));
                    arr_23 [(unsigned char)6] [i_3] [i_3] &= ((/* implicit */long long int) (short)-32766);
                    arr_24 [i_4] [i_7] = ((/* implicit */unsigned char) (((~(-707980804))) ^ (max((((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) min(((short)-32756), (((/* implicit */short) (unsigned char)9)))))))));
                    var_17 |= ((/* implicit */long long int) ((signed char) ((arr_17 [i_3] [(signed char)2] [i_7] [i_7] [i_7]) ? ((-(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (short)32758)) ? (-707980804) : (((/* implicit */int) arr_12 [i_0] [i_3] [i_4 + 1] [i_7])))))));
                    arr_25 [i_0] [(_Bool)1] [6] [2] |= ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)14))))));
                }
            }
            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 2) 
            {
                arr_28 [i_8] [(signed char)11] [(unsigned char)8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((unsigned char) (short)-128))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 707980818)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) (short)-20114))))) : (((((/* implicit */_Bool) 2580401508U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (10LL)))))));
                arr_29 [i_8] [i_8] [i_8 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)14992))))))));
                arr_30 [(short)4] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) 10LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17099))) : (9584605834441755555ULL))));
            }
            arr_31 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) var_4);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (-10LL) : (((/* implicit */long long int) -1724073630)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14992)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)9)) * (((/* implicit */int) var_7)))), (((((/* implicit */int) (short)-32765)) / (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) 2580401511U)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_0]), (var_6))))) : (min((((/* implicit */long long int) var_4)), (516666292426545203LL)))))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((signed char) ((_Bool) var_3))))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_9)))), ((-(((/* implicit */int) (short)32767))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)-63)))))) != (((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (18446744073709551613ULL)))))) : (((/* implicit */int) (short)-32757))));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-32762)))), (((/* implicit */int) min((var_4), (((/* implicit */short) arr_0 [i_9])))))))) != (((((((/* implicit */_Bool) (short)-32743)) || (((/* implicit */_Bool) (signed char)98)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) : ((~(var_0)))))));
                arr_35 [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) (signed char)78);
            }
            /* vectorizable */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_0] [(unsigned char)3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [(signed char)2])) % (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (2580401511U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63)))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (8346830051517385797ULL)))));
                var_22 |= ((/* implicit */unsigned long long int) (short)0);
            }
        }
        for (short i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) (signed char)127))) <= (((/* implicit */int) arr_37 [i_0] [i_0] [i_0]))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) ^ (((/* implicit */int) arr_27 [i_0] [i_0] [i_11] [i_11]))))));
            var_24 = ((/* implicit */_Bool) (short)-32758);
            arr_41 [(signed char)7] [i_11] &= (short)-21545;
            arr_42 [i_0] [i_0] = ((/* implicit */int) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 1; i_14 < 12; i_14 += 2) 
                {
                    arr_50 [i_0] [i_12] [i_13] [i_14] = ((/* implicit */signed char) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32758)) | (((/* implicit */int) (short)127)))))));
                        arr_54 [i_0] [i_12] [12U] [i_13] [(signed char)12] [12U] = ((/* implicit */int) var_0);
                        arr_55 [i_0] [(unsigned short)14] [i_0] [i_0] [i_0] = arr_47 [i_13];
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) 654305952))));
                    }
                }
                var_27 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (short)-3161)) : (((/* implicit */int) (_Bool)1))));
            }
            arr_56 [(unsigned char)9] [i_12] [(short)0] = var_6;
        }
        for (int i_16 = 1; i_16 < 11; i_16 += 2) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (((((/* implicit */int) ((short) var_2))) >> (((((((/* implicit */_Bool) 654305952)) ? (((/* implicit */int) arr_58 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)13)))) + (274)))))));
            arr_59 [i_16] [i_16] [i_16] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_34 [i_16] [i_16 + 3]), (arr_34 [i_16 + 4] [i_16 + 1]))))));
            arr_60 [i_0] [i_16] [i_16 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)32760)) : (arr_33 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (var_3))))) : (min((1340556473294720271ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))) ? ((~((-(9223372036854775807LL))))) : (((/* implicit */long long int) ((int) arr_7 [i_16] [12ULL] [10])))));
        }
        arr_61 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) min((arr_7 [2ULL] [(signed char)12] [(signed char)12]), (((/* implicit */unsigned int) var_9))))))));
    }
    var_29 = ((/* implicit */unsigned char) var_1);
    var_30 = ((/* implicit */unsigned char) (short)-118);
}
