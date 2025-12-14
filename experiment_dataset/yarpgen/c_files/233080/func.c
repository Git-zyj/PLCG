/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233080
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
    var_20 = ((/* implicit */signed char) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (-2147483647 - 1));
        var_21 = ((/* implicit */int) ((long long int) (unsigned char)7));
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(var_1)))), ((-(((/* implicit */int) (short)26015))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                arr_12 [i_3] [i_2] [i_1] &= ((((/* implicit */_Bool) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)26023)) : (((/* implicit */int) (signed char)-31))))))) ? (max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1])) <= (((/* implicit */int) (signed char)31))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)31))))));
                var_23 -= ((/* implicit */unsigned char) ((((((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)4412)))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_3))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-44))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [(_Bool)1] [i_3])) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-123)), ((unsigned short)4093)))) : (((/* implicit */int) (signed char)31)))))));
                var_24 |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_2]))))), (max((((/* implicit */unsigned long long int) (unsigned short)35337)), (18446744073709551615ULL)))));
                var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_6 [i_3]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))) >= (var_7))))))) ? (max((((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) arr_11 [(short)6] [i_2] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1])))))))));
            }
            var_26 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (short)-1675)) - (((/* implicit */int) (signed char)0)))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_27 = ((/* implicit */long long int) var_16);
                var_28 += ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-1675)), ((unsigned short)44468))))))) % ((-(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_5)))))))));
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_1] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)4412)))) % (max((((((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2] [8U] [i_4] [i_2])))), (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))))))))));
                var_30 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [1U] [i_2])) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_4]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (signed char)-18)))))));
            }
            for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                var_31 = ((/* implicit */_Bool) min(((~(((/* implicit */int) arr_13 [i_5] [i_5] [(signed char)6] [i_5])))), (((/* implicit */int) var_19))));
                var_32 = ((/* implicit */long long int) max((var_32), (arr_16 [i_1] [i_2] [i_5])));
                var_33 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (max((var_3), (var_7))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_15 [i_5] [i_2] [i_5])))))))) ? (((min((var_3), (((/* implicit */unsigned int) var_18)))) >> (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_5] [7U])) : (((/* implicit */int) (short)-26016)))) - (180))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (_Bool)1))), (var_13)))))));
                /* LoopSeq 4 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_34 -= ((/* implicit */_Bool) max(((signed char)-18), (((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) > (((/* implicit */int) (!(((/* implicit */_Bool) 67108863ULL))))))))));
                    arr_20 [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned char)0)))) << (((((/* implicit */int) (signed char)64)) - (63)))));
                    arr_21 [i_2] [i_2] [i_1] [i_5] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_17 [i_1])) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)35339)) : (((/* implicit */int) (unsigned char)0))))))));
                }
                for (long long int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    var_35 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2])) && (((/* implicit */_Bool) var_17)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 17; i_8 += 1) 
                    {
                        var_36 &= ((/* implicit */signed char) ((((/* implicit */int) ((max((((/* implicit */unsigned int) arr_17 [i_2])), (var_3))) < (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)1), (((/* implicit */unsigned short) var_13))))))))) == (((/* implicit */int) ((_Bool) arr_11 [i_1] [i_1] [i_1] [i_1])))));
                        arr_28 [i_8] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) min((var_17), (((/* implicit */int) arr_13 [i_5] [i_5] [(short)5] [(signed char)3])))))) % (arr_27 [i_1] [i_1] [i_5] [i_2] [i_1])));
                        var_37 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((unsigned short) var_14)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_14))))))))));
                        var_38 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (8388607U)));
                        arr_29 [i_1] [i_1] [(unsigned short)12] [(short)14] [i_7] [i_8] [i_5] &= ((/* implicit */unsigned int) (signed char)-68);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        arr_33 [i_1] [i_7] = ((/* implicit */short) min((max((((/* implicit */long long int) arr_32 [i_1] [i_2] [i_1] [i_1] [i_9])), (arr_16 [i_2] [i_5] [i_7]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_27 [i_1] [i_7] [i_5] [(unsigned short)4] [i_1])) ^ (arr_18 [i_1] [i_2] [15ULL] [i_7] [i_1]))))));
                        var_39 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_14 [i_9] [i_5] [i_2] [i_1]), (var_6)))) ? (var_17) : (((/* implicit */int) arr_10 [i_1])))));
                        arr_34 [i_1] [i_5] [i_5] [i_7] = ((((((/* implicit */_Bool) (+(16383U)))) ? (((/* implicit */int) (unsigned short)61171)) : (((/* implicit */int) max(((signed char)-15), (((/* implicit */signed char) (_Bool)1))))))) << (((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (unsigned short)4364)) : (((/* implicit */int) (signed char)127)))) - (4359))));
                    }
                }
                for (long long int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_5] [14ULL] [i_10] |= ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_10 [i_5])))), (max((((/* implicit */int) arr_32 [i_10] [i_5] [i_2] [i_1] [10])), ((+(((/* implicit */int) (short)2044))))))));
                    var_40 ^= max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_15) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) : ((+(arr_19 [i_1] [(_Bool)1] [i_1] [i_1]))))));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((((/* implicit */int) (((+(((/* implicit */int) var_18)))) <= (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)0)))))))) > (((/* implicit */int) ((min((3352763908U), (((/* implicit */unsigned int) (short)2044)))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))))))));
                    arr_38 [i_5] |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_9 [i_5] [i_2] [i_5] [i_10])) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1])))) & (((((/* implicit */_Bool) (short)2044)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))) < (((((/* implicit */_Bool) arr_18 [i_1] [(unsigned short)8] [i_5] [(_Bool)1] [i_2])) ? (((/* implicit */int) min(((unsigned short)32767), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) ((((/* implicit */int) var_19)) < (((/* implicit */int) (_Bool)1)))))))));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_42 += ((/* implicit */signed char) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_11 [i_1] [i_2] [i_5] [i_11]))));
                    arr_42 [i_1] [i_1] [i_5] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967296ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_13 [i_1] [i_2] [i_5] [i_11]))));
                }
            }
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_43 += ((/* implicit */int) ((0ULL) == (((/* implicit */unsigned long long int) ((long long int) var_10)))));
            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (+(var_7))))));
            arr_46 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_36 [i_1] [i_1] [7LL] [(_Bool)1] [7LL]))));
        }
        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (-(min(((~(((/* implicit */int) arr_8 [i_1])))), (((/* implicit */int) var_8)))))))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 1) 
                {
                    var_46 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_15] [i_14] [i_13] [i_1])) : (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) var_5))))))));
                    var_47 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                    arr_56 [i_14] [i_14] [(signed char)8] [i_14] &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)151)), (var_10)))) ? (((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                }
                var_48 = ((/* implicit */_Bool) ((unsigned int) ((var_7) % (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_14] [12ULL] [i_1]))))))));
            }
            var_49 = ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) ((arr_16 [9U] [i_13] [i_1]) % (((/* implicit */long long int) (-2147483647 - 1)))))))))));
        }
        for (short i_16 = 4; i_16 < 14; i_16 += 4) 
        {
            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) (~(((/* implicit */int) var_9)))))));
            var_51 = ((/* implicit */signed char) ((min((var_12), (arr_19 [i_16 + 2] [i_16 - 1] [(signed char)3] [i_1]))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_19 [i_16] [i_16 + 3] [i_1] [i_1])) == (0ULL)))))));
        }
        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [15U] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1])))))));
    }
}
