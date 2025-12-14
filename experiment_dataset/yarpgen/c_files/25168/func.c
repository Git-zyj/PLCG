/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25168
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_6))));
        var_17 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) max((1805243018246888654LL), (((/* implicit */long long int) arr_0 [i_0]))))) ^ (((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 790293152U)) || (((/* implicit */_Bool) 790293152U))))) == (((/* implicit */int) arr_2 [i_1] [i_1] [i_1]))));
            var_19 = var_2;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]);
                        var_21 -= var_14;
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((int) ((arr_12 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))))));
            var_23 *= ((/* implicit */short) arr_13 [i_0]);
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
        {
            var_24 -= ((/* implicit */short) ((unsigned char) arr_14 [i_0]));
            /* LoopNest 3 */
            for (short i_6 = 3; i_6 < 15; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */long long int) max((arr_21 [i_6] [i_6 + 3] [i_6 + 4] [i_6 - 1]), (var_15)));
                            arr_27 [i_0] [(short)9] [i_6] [i_7] [i_6] |= ((/* implicit */short) ((((/* implicit */int) (short)1472)) | (((/* implicit */int) (signed char)-22))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) var_3)))))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    for (int i_11 = 1; i_11 < 18; i_11 += 2) 
                    {
                        {
                            arr_37 [i_0] [i_0] [i_10] [i_0] [i_0] = ((unsigned long long int) ((short) arr_35 [i_0] [i_0] [i_10] [2ULL] [1U] [i_0]));
                            var_27 = ((((/* implicit */long long int) ((/* implicit */int) var_11))) | (-1805243018246888655LL));
                        }
                    } 
                } 
                var_28 ^= var_2;
            }
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                var_29 = arr_18 [i_0] [i_0] [i_5] [i_12];
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) ((-7557525184851304487LL) < (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_24 [i_12] [i_0] [i_5] [i_0] [i_12] [i_12]))))));
                    var_31 += ((/* implicit */unsigned char) arr_40 [i_0]);
                }
                arr_43 [(unsigned char)1] [i_5] [(short)1] [i_5] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (~(((/* implicit */int) arr_42 [i_12] [i_5] [i_0]))))), (min((((/* implicit */long long int) (signed char)37)), (-1805243018246888655LL))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)184)))));
            }
            for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
            {
                arr_46 [i_0] [i_14] = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) arr_8 [i_14] [i_5] [i_5] [i_0])))));
                arr_47 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned char)7);
                var_32 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_28 [i_0] [(short)4])))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_33 -= ((/* implicit */unsigned short) (signed char)-22);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_35 [i_5] [i_5] [i_0] [i_5] [i_15] [i_15])))) | (((/* implicit */int) ((unsigned char) var_13))))))));
                    arr_53 [i_15] [i_5] [i_15] [i_16] = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_0] [(short)5] [i_15] [i_16]));
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    arr_58 [i_0] [i_0] [i_15] [i_15] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_0] [i_15] [i_17])) > (((/* implicit */int) arr_8 [i_0] [i_0] [6ULL] [i_0]))));
                }
                for (unsigned char i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    arr_61 [i_0] [i_5] [i_18] [i_15] = ((/* implicit */short) arr_49 [i_18] [(short)16] [(unsigned short)5]);
                    var_36 = min((((/* implicit */short) (signed char)23)), ((short)-8249));
                }
                /* LoopSeq 3 */
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) (+(((/* implicit */int) arr_57 [i_5] [i_5] [i_15])))))), (-9223372036854775802LL)));
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_31 [i_19] [i_15] [i_5]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 19; i_20 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)198)) && (((/* implicit */_Bool) arr_35 [i_20] [i_20] [i_15] [i_15] [i_5] [i_0])))));
                        var_40 = ((/* implicit */unsigned int) arr_51 [i_0] [12LL] [i_15]);
                        var_41 = ((/* implicit */unsigned int) var_0);
                        arr_69 [i_0] [i_0] [i_15] [i_0] [i_15] &= ((/* implicit */short) ((unsigned short) (short)26894));
                    }
                    for (unsigned char i_21 = 0; i_21 < 19; i_21 += 4) /* same iter space */
                    {
                        arr_74 [i_15] [i_5] [i_15] [i_19] = ((/* implicit */unsigned char) arr_72 [i_0]);
                        arr_75 [(unsigned short)14] [i_5] [i_15] [i_15] [i_19] [i_19 + 1] [i_21] = ((/* implicit */signed char) arr_5 [i_19 + 1] [i_19 + 1] [i_15]);
                        var_42 = ((/* implicit */unsigned char) arr_35 [i_0] [i_0] [i_15] [i_0] [i_0] [i_0]);
                    }
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 19; i_22 += 1) 
                    {
                        arr_78 [i_15] [i_15] = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_2 [i_15] [(unsigned char)5] [i_22]))))))));
                        arr_79 [i_15] [(_Bool)1] [(short)10] [i_15] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) ((long long int) var_15))))));
                    }
                    var_43 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)41066)) >= (((/* implicit */int) arr_59 [i_19 + 1] [i_19] [i_19] [i_19 + 1])))));
                }
                for (unsigned char i_23 = 1; i_23 < 15; i_23 += 3) 
                {
                    var_44 = ((/* implicit */unsigned short) (!(arr_22 [i_0] [(short)6] [i_15] [(short)5] [i_23] [i_23 + 4])));
                    arr_84 [i_15] [i_15] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93))) != (arr_1 [i_23 - 1]))))));
                }
                for (unsigned short i_24 = 0; i_24 < 19; i_24 += 2) 
                {
                    var_45 = ((/* implicit */_Bool) arr_3 [i_0] [i_5] [i_15]);
                    arr_87 [i_0] [i_15] = ((/* implicit */unsigned char) (unsigned short)2047);
                }
                var_46 = ((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_5] [i_15] [i_15] [i_15]);
            }
            var_47 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(3297165865U)))) * ((~(((((/* implicit */_Bool) 1805243018246888669LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : ((-9223372036854775807LL - 1LL))))))));
        }
        var_48 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) 1805243018246888639LL)) ? (((/* implicit */int) (short)32454)) : (((/* implicit */int) (signed char)-118)))), (((/* implicit */int) ((((/* implicit */_Bool) 137438953471ULL)) && (((/* implicit */_Bool) (short)32755)))))));
        var_49 = arr_38 [i_0] [(unsigned char)0] [i_0];
    }
    var_50 = ((/* implicit */int) (unsigned char)241);
    var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))))) >> (((((/* implicit */int) var_15)) + (21803)))));
}
