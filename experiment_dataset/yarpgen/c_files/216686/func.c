/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216686
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)116)), ((short)7433)));
                            var_18 -= ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_6 [i_2 - 1] [(short)10] [i_2 - 1])), (0U))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_6 [i_2 + 1] [i_3] [12U]))))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */signed char) ((((/* implicit */int) (short)32750)) < (((/* implicit */int) (unsigned char)132))))), (arr_7 [i_4 + 1] [i_4 + 1])))), (var_1)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_4] [i_5] [18LL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [(short)1] [i_5])) > (((/* implicit */int) var_8))))) : (max((arr_14 [i_6] [i_1] [i_6] [i_5]), (((/* implicit */int) (signed char)-116))))))), (((unsigned long long int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)45028), (((/* implicit */unsigned short) (unsigned char)16))))) ? (max((arr_11 [i_5] [2LL] [i_4] [i_4 + 1]), (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (short)-32747)))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5668181793863317473LL)) || (((/* implicit */_Bool) (unsigned short)46576)))))));
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 863100430);
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((max((((/* implicit */int) arr_21 [i_0])), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned short)7])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_14)))))) - (236)))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_30 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_1] [7ULL]);
                        var_24 = ((max(((_Bool)1), ((!(((/* implicit */_Bool) 18446744073709551615ULL)))))) ? (((/* implicit */unsigned int) 2147475456)) : (((unsigned int) ((((/* implicit */_Bool) -9223372036854775782LL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)16)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36)))));
                            var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_8])) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_8])) : (((/* implicit */int) arr_20 [i_0] [11LL] [i_8] [i_9])))), (((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) arr_20 [i_10] [i_1] [i_8] [i_9])) : (-1)))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_11 [i_11] [(short)14] [i_8] [i_9])) ? ((((_Bool)1) ? (4035225266123964416ULL) : (((/* implicit */unsigned long long int) 2147475447)))) : (((/* implicit */unsigned long long int) ((var_7) ? (arr_2 [i_0]) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1)))))));
                            arr_39 [8] [i_9] [i_8] [i_1] [8] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1518668659)) != (15746900492030348284ULL)));
                            var_27 ^= ((/* implicit */short) (_Bool)1);
                        }
                        /* vectorizable */
                        for (long long int i_12 = 1; i_12 < 20; i_12 += 3) 
                        {
                            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1831651452)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7223))) : (4035225266123964389ULL)))) ? (8176U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (signed char)-116)))))));
                            var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (unsigned char)1))));
                        }
                        arr_42 [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_30 ^= ((/* implicit */unsigned short) arr_5 [(unsigned short)20]);
                        var_31 = ((3686433896011020297ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (short i_14 = 4; i_14 < 20; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3072)) && ((_Bool)1))))));
                            var_33 ^= arr_25 [i_1] [i_1] [i_8];
                            var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_0] [i_0] [i_8] [i_14 - 3] [i_14 - 2]))));
                            var_35 -= ((/* implicit */long long int) ((short) arr_38 [i_14 + 1] [i_1] [i_1] [i_13] [i_8]));
                        }
                    }
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
                {
                    var_36 *= ((/* implicit */unsigned int) ((unsigned short) 0U));
                    arr_52 [i_0] [i_0] = arr_0 [i_15] [i_1];
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_58 [i_0] [i_1] [i_15] [i_1] [i_17] [i_1] [i_16] = ((/* implicit */short) ((_Bool) arr_34 [i_17] [i_17 - 1] [i_17] [i_17] [i_17 - 1] [14]));
                                arr_59 [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [i_16] [2LL] [i_17] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [6] [i_16] [6] [i_16] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))) : (arr_32 [16LL] [16LL] [i_15] [i_16] [i_17])));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_65 [i_0] [i_18] [i_18] [i_18] = ((/* implicit */int) arr_33 [i_0] [9] [i_18] [9] [i_18] [i_1]);
                            var_37 = ((/* implicit */unsigned int) 8598187043666771428LL);
                            var_38 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_44 [(unsigned short)3] [(unsigned short)7] [(unsigned short)3] [i_19] [(unsigned char)15])), ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_18] [i_1]))))));
                        }
                    } 
                } 
                var_39 *= ((/* implicit */unsigned char) ((17425396336430445742ULL) + (17425396336430445729ULL)));
                arr_66 [i_0] [i_0] [i_0] = (unsigned char)116;
            }
        } 
    } 
    var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) 8176U))));
    var_41 = ((/* implicit */int) var_3);
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-2147483647 - 1))), (0U))))));
}
