/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212241
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_14 [(signed char)6] [9ULL] = ((/* implicit */unsigned int) arr_13 [(_Bool)1] [11] [0] [(_Bool)1] [(short)0]);
                                var_17 = ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 2] [(unsigned short)5]))) / (var_15));
                            }
                        } 
                    } 
                    var_18 = ((((arr_5 [1U] [(signed char)2] [4LL]) ? (((/* implicit */int) (unsigned short)7558)) : (((/* implicit */int) var_6)))) == (((((/* implicit */int) arr_10 [(_Bool)0] [(_Bool)1])) | (((/* implicit */int) arr_11 [3U] [1U] [1] [11LL] [10LL])))));
                    var_19 = ((unsigned char) var_13);
                }
                for (int i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (long long int i_7 = 3; i_7 < 11; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_22 [(unsigned short)10] [1U]))));
                            var_21 = ((/* implicit */long long int) (short)-992);
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_5 - 3] [(_Bool)1] [(_Bool)1])) ? (var_8) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))));
                            var_23 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                            var_24 = ((/* implicit */int) arr_11 [i_5 + 1] [3] [10U] [i_5 - 3] [i_5 - 3]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            arr_32 [(_Bool)0] [(_Bool)1] [(unsigned short)11] [(_Bool)1] [i_5] [6U] [(unsigned short)6] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_20 [(_Bool)1] [i_5 - 1] [(_Bool)0] [(unsigned char)0])) != (((/* implicit */int) arr_20 [(unsigned short)3] [i_5 - 3] [4U] [(_Bool)1]))))), (((long long int) 3508454044U))));
                            var_25 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(arr_5 [(unsigned short)8] [(signed char)9] [3ULL]))) && (((/* implicit */_Bool) ((long long int) 2672114428U))))))) : (min((arr_3 [5ULL]), (((/* implicit */unsigned int) arr_29 [10ULL] [i_1] [(unsigned char)1] [3U] [(_Bool)1]))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1]);
                        }
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) ((max((min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_17 [3ULL] [i_5 - 3] [(_Bool)1])))) & (((/* implicit */unsigned long long int) min((((3906851783U) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (2672114428U))))));
                            arr_35 [0U] [(short)6] [(_Bool)1] [(unsigned short)10] [i_5] = ((/* implicit */int) arr_21 [i_5 - 3] [5U] [(signed char)11]);
                            var_28 = ((/* implicit */signed char) (~(var_15)));
                        }
                        var_29 = ((/* implicit */long long int) ((unsigned int) ((arr_2 [i_0]) >= (arr_34 [(unsigned char)5] [i_6] [i_5 + 1] [(unsigned char)5] [4] [2LL]))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [11] [11] [11U])) * (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((((var_6) && (((/* implicit */_Bool) arr_21 [10U] [(_Bool)1] [(signed char)7])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned short)57335)) : (((/* implicit */int) (unsigned char)108))))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [8U] [(_Bool)1] [(short)0] [0ULL] [(unsigned char)11] [i_5] [(unsigned short)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_31 [3ULL] [i_5] [(unsigned char)2] [i_5] [7ULL]), (2672114430U)))) ? ((-(arr_31 [1ULL] [i_5] [2U] [i_5] [(_Bool)1]))) : (((arr_31 [(unsigned char)0] [i_5] [(unsigned short)7] [i_5] [(short)11]) ^ (arr_31 [(signed char)0] [i_5] [10U] [i_5] [3LL])))));
                            var_31 = ((/* implicit */int) min((var_31), (max(((+(((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_3))))));
                        }
                        var_32 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [2U])) ? (((/* implicit */int) (unsigned short)54235)) : (var_9))) >> (((((/* implicit */int) arr_1 [3U])) >> (((var_11) - (13232606460903681684ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_39 [7LL] [(signed char)0] [5ULL]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11287))) + (1622852865U)))))));
                    }
                    var_33 = ((((/* implicit */_Bool) ((signed char) max(((short)23121), (((/* implicit */short) arr_7 [(_Bool)1] [(_Bool)0] [(_Bool)1])))))) ? ((-(((/* implicit */int) arr_11 [i_5 - 2] [i_5 - 2] [(short)4] [i_5 - 1] [1U])))) : (((min((((/* implicit */int) (_Bool)1)), (var_9))) >> (((var_10) - (825810097U))))));
                }
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_34 ^= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_11 [i_0] [7U] [i_1] [i_1] [4ULL])), (568345300U))) / (4238562230U)));
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(_Bool)0] [10ULL] [2U] [(short)4] [(_Bool)1])) ? (arr_31 [(signed char)8] [(unsigned char)0] [i_13] [(unsigned short)8] [i_1]) : (((/* implicit */unsigned int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) ((arr_40 [(unsigned char)3] [(unsigned short)0] [1ULL] [(_Bool)1] [(unsigned char)2]) ? (var_11) : (((/* implicit */unsigned long long int) arr_4 [6LL] [6LL] [(_Bool)1]))))) ? ((-(1622852888U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [0U]), (var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 2; i_14 < 9; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */short) (_Bool)1);
                                var_37 = ((/* implicit */long long int) max(((unsigned short)54244), (((/* implicit */unsigned short) (_Bool)1))));
                                var_38 = ((/* implicit */int) 3013804595U);
                                arr_52 [i_15] [(_Bool)1] = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                    arr_53 [(unsigned short)5] [3LL] [0] [(unsigned short)5] = (+(((/* implicit */int) (_Bool)1)));
                }
                var_39 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((5543703725554123343LL) / (((/* implicit */long long int) arr_25 [(_Bool)1] [(_Bool)1] [(unsigned char)5] [(unsigned char)6] [11LL] [(short)8] [(short)9])))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                arr_54 [4U] [11U] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1622852869U)) && (((/* implicit */_Bool) 182689522U))));
                var_40 = ((/* implicit */long long int) min((((arr_9 [i_1]) ? (((/* implicit */int) arr_27 [8LL] [(_Bool)1] [8ULL])) : (((/* implicit */int) arr_9 [i_1])))), (((/* implicit */int) arr_27 [8ULL] [6] [(signed char)2]))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) ((var_0) >= (((/* implicit */unsigned long long int) var_9))));
    var_42 = ((/* implicit */unsigned char) var_5);
}
