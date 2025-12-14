/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47391
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
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) max((arr_2 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 - 1] [i_0 - 1]))))));
        var_18 = ((/* implicit */unsigned long long int) var_16);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */int) (~((-(((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)16]))) : (arr_6 [i_1] [i_1])))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) arr_1 [17LL]);
                        var_20 = arr_5 [i_0 - 1];
                    }
                } 
            } 
            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))), ((-(arr_9 [10U] [20ULL] [i_0])))))) ? (max((var_10), (((/* implicit */unsigned int) (-(arr_9 [6ULL] [i_1] [16ULL])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 1]))))))));
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2147483647), (((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_11 [9U] [i_1] [19U] [17]))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))) + (arr_13 [i_0 + 1] [(unsigned char)6] [i_0] [i_0] [i_0] [(unsigned char)6]))) : ((((~(arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0 - 1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11))))))))));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? ((~(((/* implicit */int) (signed char)71)))) : (((/* implicit */int) arr_4 [i_0 - 1]))))));
            var_24 = ((/* implicit */short) arr_16 [i_0 + 1] [i_0]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                arr_20 [i_0] [i_0] [(unsigned char)21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [(_Bool)1]))) : (var_16)))) ? (3139085646U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)16] [i_4] [i_4])))));
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_19 [i_0 + 1] [i_0 - 1] [i_0 - 1]) << (((((/* implicit */int) arr_12 [i_0 + 1] [i_4])) - (43)))));
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1])) || (((((/* implicit */_Bool) arr_3 [i_4])) || (((/* implicit */_Bool) 1284844430))))));
            }
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                arr_24 [i_0 + 1] [i_0] [(unsigned char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [12ULL] [i_0 + 1] [22]))) : (arr_14 [(unsigned short)7] [i_0]))), (((/* implicit */unsigned int) (signed char)-75))))) ? (((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_4] [i_0] [i_0 + 1] [i_0 + 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_0 - 1])) : (((arr_15 [i_0] [i_0 - 1]) ? (11826538318694011608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [(unsigned short)20] [i_0 - 1]))))))) : (((/* implicit */unsigned long long int) ((arr_18 [i_6] [i_6] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [9LL] [i_4] [i_4] [i_4]), (((/* implicit */short) arr_16 [i_0 - 1] [i_0 - 1])))))) : (min((((/* implicit */long long int) arr_19 [i_0] [i_0] [(short)10])), (arr_0 [12ULL] [i_4]))))))));
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned short)4] [i_7]))) == (((arr_6 [i_4] [i_0 + 1]) / (((/* implicit */unsigned long long int) var_11))))));
                    var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_11 [i_0 + 1] [(short)3] [16LL] [i_0 - 1])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [(signed char)11])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) max((arr_17 [i_0 - 1] [(unsigned char)2] [(short)15]), (((/* implicit */unsigned char) arr_15 [i_0 + 1] [i_0 + 1])))))))) ? (arr_3 [i_0]) : (max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_15 [3U] [3U])) : (arr_25 [i_0] [i_0] [i_0] [i_0 - 1]))), ((-(arr_9 [i_4] [(unsigned char)10] [i_6])))))));
                    arr_30 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(arr_19 [i_0 + 1] [i_0] [i_0 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)44)), ((unsigned short)55907)))))))) ? (arr_6 [i_4] [(unsigned short)22]) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(_Bool)1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                }
                for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    var_29 *= ((((/* implicit */_Bool) max((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 + 1])))) || ((!(((((/* implicit */_Bool) (signed char)36)) && (((/* implicit */_Bool) 4294967290U)))))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (-(((((((/* implicit */int) arr_29 [i_0] [i_0 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_29 [21ULL] [i_0 + 1])) + (11518))))))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [i_0])) < (((/* implicit */int) min((arr_8 [i_0] [22LL] [i_9] [i_0]), (((/* implicit */unsigned short) arr_17 [i_0] [i_0 - 1] [2U]))))))))) - (max((((var_3) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((-489193433406163059LL), (((/* implicit */long long int) var_5))))))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 3; i_10 < 20; i_10 += 3) 
                {
                    var_32 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))) : (var_16)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_32 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [(signed char)22])))))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [15] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) 11876852528163238167ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (6381367474289053347ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0 + 1]))) == (arr_6 [i_4] [i_4])))))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_4])) && (((((/* implicit */_Bool) arr_9 [i_4] [(_Bool)1] [(_Bool)1])) || (arr_18 [i_0] [i_0] [i_0])))));
                    /* LoopSeq 4 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_10 + 2] [i_10] [i_10 - 1] [(unsigned char)22] [i_10 + 1] [i_10]))));
                        var_36 = ((/* implicit */signed char) (~(arr_9 [i_4] [i_4] [i_4])));
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_0 - 1] [i_0 + 1])) & (((/* implicit */int) arr_32 [i_10] [i_10 - 1] [i_10 - 1] [8LL] [i_10] [i_10]))));
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [i_0]))))) ? (((/* implicit */int) arr_16 [i_10 + 2] [i_10 + 3])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_37 [i_0] [(signed char)17])) : (((/* implicit */int) var_1))))));
                    }
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 4) 
                    {
                        var_39 = (~(((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_13] [i_0])));
                        var_40 = ((((/* implicit */_Bool) (short)12287)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (18446744073709551615ULL));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_0 + 1])) * (((/* implicit */int) arr_12 [i_0] [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((var_9) * (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0]))))))))));
                        var_42 ^= ((((/* implicit */_Bool) arr_13 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1])) ? (((/* implicit */int) arr_12 [i_13 - 2] [i_4])) : ((~(arr_33 [(short)18] [i_13 - 2] [(short)18] [15]))));
                    }
                    for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)212)) ? (6569891545546313449ULL) : (((/* implicit */unsigned long long int) ((1823997402U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_44 = ((/* implicit */int) 2543959923593152543ULL);
                        arr_44 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] = ((/* implicit */signed char) var_0);
                        var_45 = ((/* implicit */unsigned short) ((arr_36 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) & (arr_36 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [(unsigned char)13] [i_0 + 1])));
                    }
                    var_46 = ((arr_40 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) / (arr_40 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]));
                }
                var_47 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1]))) / (arr_3 [i_0 - 1])));
            }
            /* LoopSeq 3 */
            for (unsigned int i_15 = 1; i_15 < 20; i_15 += 2) 
            {
                var_48 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_4] [i_0]))))) == (((((((/* implicit */int) (signed char)-30)) + (2147483647))) >> (((/* implicit */int) (unsigned char)15))))))), (((arr_42 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [(unsigned short)3] [i_0]) + (((/* implicit */int) arr_37 [i_15 - 1] [i_15 + 1]))))));
                var_49 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_12 [18U] [i_4]), (var_0))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (11876852528163238167ULL))), (((/* implicit */unsigned long long int) arr_14 [i_0 - 1] [i_0 + 1]))))));
            }
            for (long long int i_16 = 1; i_16 < 20; i_16 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_53 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) var_2);
                    var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)24)), (arr_31 [i_0 + 1] [i_0] [(unsigned short)14] [i_0] [i_0] [i_0])))), (((var_4) << (((6992927802926516384ULL) - (6992927802926516353ULL))))))) >= (((/* implicit */unsigned int) max((((/* implicit */int) max((var_6), (((/* implicit */unsigned char) arr_18 [i_0 + 1] [8] [i_0]))))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_32 [(short)9] [(unsigned char)15] [i_16] [(unsigned char)15] [i_16 - 1] [(unsigned char)15])) : (((/* implicit */int) var_12))))))))))));
                }
                var_51 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_39 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0]))))));
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [(signed char)4] [i_0 - 1]) * (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0]))) : (var_13))) <= (((/* implicit */long long int) ((arr_26 [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_0 - 1] [i_0 + 1] [i_0]))))))))))))));
                var_53 |= ((/* implicit */unsigned int) min(((((-(((/* implicit */int) var_12)))) / (arr_3 [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_1)), (var_15)))) && (((/* implicit */_Bool) arr_45 [i_4])))))));
            }
            /* vectorizable */
            for (long long int i_18 = 1; i_18 < 20; i_18 += 3) /* same iter space */
            {
                var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) arr_17 [i_0] [22LL] [i_0]))));
                var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)44674)) <= (-1788007545)))) < (((/* implicit */int) (short)12291)))))));
            }
            var_56 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [16ULL])) ? (max((((/* implicit */unsigned long long int) (-(var_16)))), (((((/* implicit */unsigned long long int) var_9)) ^ (arr_47 [(unsigned char)14] [i_4] [4ULL] [i_4]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)10)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_42 [i_0] [i_0] [(unsigned char)2] [(unsigned char)18] [i_0 + 1] [i_0] [i_0 - 1])) | (var_5)))))))));
        }
        for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 2) 
        {
            var_57 = ((/* implicit */long long int) min((arr_54 [i_0] [i_0 + 1] [i_0 + 1]), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [9U])), (arr_1 [i_0 + 1])))), (min((((/* implicit */int) arr_34 [i_0] [16ULL] [i_0] [3U] [i_0] [8U])), (arr_42 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_58 = ((/* implicit */int) max((min((min((arr_0 [i_0 + 1] [i_0]), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) min((arr_11 [i_0] [i_0] [i_0] [4ULL]), (((/* implicit */short) arr_15 [i_19] [i_19]))))))), (((/* implicit */long long int) (-(((/* implicit */int) min((arr_51 [i_0]), (var_15)))))))));
            var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [(unsigned char)14] [i_19])) ? (((/* implicit */long long int) min((((((/* implicit */int) var_15)) - (((/* implicit */int) (signed char)-22)))), (((((/* implicit */_Bool) arr_17 [i_19] [i_19] [i_19])) ? (((/* implicit */int) var_1)) : (arr_25 [i_0 + 1] [15LL] [i_0 + 1] [i_0])))))) : (max((max((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_11))))));
        }
    }
    var_60 = ((/* implicit */unsigned char) (-(var_5)));
    var_61 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8957))) : (-774790906887846847LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)36))))) : (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
}
