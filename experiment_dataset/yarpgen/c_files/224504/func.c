/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224504
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((arr_4 [i_0]) >> (((arr_4 [i_0]) - (974779561U)))))));
                /* LoopSeq 4 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_1] [(_Bool)1] [i_1] [i_0] &= ((/* implicit */int) ((13383283332860747305ULL) % (5063460740848804288ULL)));
                        var_16 ^= ((/* implicit */short) ((unsigned int) arr_4 [i_2 + 3]));
                        arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_2 + 2])) == (var_9)));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)119)) ? (5063460740848804295ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    }
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 3) 
                    {
                        var_18 = max((((/* implicit */long long int) (short)-20313)), (8989607068696576LL));
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_14))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
                        arr_16 [i_2] [4U] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 - 1] [i_2 + 2] [i_2 + 2])))))) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) : (((unsigned long long int) var_2))))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] [(signed char)6] [i_4 + 2] = ((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) var_2))) > (((/* implicit */int) ((short) var_1))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))) >> (((((/* implicit */int) var_3)) + (113)))))) : (((unsigned long long int) arr_14 [i_0] [i_1] [i_1] [i_4 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [(_Bool)1] [(signed char)11] [i_2] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) min((var_7), (((/* implicit */unsigned long long int) var_14)))))) ? (((813927212107266049ULL) >> (((/* implicit */int) (unsigned char)16)))) : (max((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_0])), (var_4)))));
                                var_20 = ((unsigned long long int) ((arr_14 [i_2 + 2] [i_5 + 1] [i_5 - 1] [i_5 - 1]) / (arr_14 [i_2] [i_5 + 2] [i_5 - 1] [i_5])));
                                var_21 = ((/* implicit */signed char) ((unsigned short) (~(arr_14 [i_2 + 3] [i_5 + 1] [(short)16] [(short)16]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_22 ^= ((/* implicit */short) ((((/* implicit */int) arr_21 [(unsigned short)8] [i_2 + 1] [(unsigned short)8] [i_2 + 2] [i_7])) + (((/* implicit */int) arr_27 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2 + 1]))));
                            var_23 = ((/* implicit */signed char) (~(var_13)));
                        }
                        arr_29 [i_1] [i_2] = ((/* implicit */short) ((_Bool) arr_10 [i_2 + 2]));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_9]))) : (var_10))));
                            var_25 *= ((/* implicit */unsigned int) var_6);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [(unsigned char)11] [i_9] [i_9 - 1] [i_9] [i_9])) - (((/* implicit */int) arr_23 [(_Bool)1] [i_9] [i_9 - 1] [15U] [(unsigned short)1]))));
                        }
                        arr_32 [i_0] [i_2] [i_2] [i_0] [i_7] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_2 - 1] [(_Bool)1] [i_2 + 2] [i_2 + 1] [i_2 + 2])) | (((/* implicit */int) var_12)))))));
                        var_28 = ((/* implicit */signed char) arr_33 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2] [15LL]);
                        var_29 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [(short)13]);
                    }
                    var_30 = max((((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_25 [9ULL] [0LL] [i_1] [15LL])), (arr_14 [i_0] [i_0] [i_1] [7]))) >= (((/* implicit */int) var_0))))), (arr_0 [i_2]));
                    /* LoopSeq 1 */
                    for (int i_11 = 1; i_11 < 18; i_11 += 3) 
                    {
                        arr_39 [i_11] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_26 [i_11 + 1] [i_1] [i_1] [(_Bool)1]))))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_2 + 3] [i_2 + 3])) : (((/* implicit */int) arr_26 [14U] [i_1] [i_2] [i_1]))))));
                        var_31 ^= ((/* implicit */unsigned long long int) var_12);
                    }
                }
                for (long long int i_12 = 1; i_12 < 17; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) var_5);
                        arr_45 [i_13] [i_1] [(short)17] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 813927212107266066ULL)) ? (18446744073709551615ULL) : (17632816861602285567ULL))) >= (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0]))))))) | (var_10)));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) var_14))))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_12 + 3] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1])) | (((int) var_12)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 1; i_14 < 18; i_14 += 3) 
                    {
                        arr_50 [(unsigned char)11] [i_0] [i_0] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_48 [i_14 + 1])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_8)))))) && (((/* implicit */_Bool) var_7))));
                        arr_51 [i_0] [i_0] [i_0] [i_14 + 1] = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_33 [i_0] [i_0] [i_12] [i_14 - 1] [i_1])))) ^ (arr_40 [12ULL] [12ULL] [i_12 + 2]))));
                    }
                    var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                    var_36 = ((/* implicit */_Bool) ((unsigned int) (((!(((/* implicit */_Bool) arr_15 [0ULL] [i_1] [0ULL])))) ? (((18446744073709551613ULL) >> (((/* implicit */int) (unsigned char)18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    var_37 = ((/* implicit */signed char) ((long long int) (short)-20313));
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_0] [i_15] [i_1]))));
                    var_39 = ((/* implicit */_Bool) ((signed char) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    arr_54 [(unsigned short)1] [(signed char)19] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11))))) : (var_7)));
                }
                for (signed char i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    var_40 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned long long int) min((var_13), (var_5)))) == (((((/* implicit */_Bool) 17632816861602285566ULL)) ? (4539668761734170655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))))))), (((((/* implicit */_Bool) max((var_3), ((signed char)52)))) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0]))))));
                    var_41 ^= ((/* implicit */unsigned short) ((long long int) min((9981349002087481826ULL), (((/* implicit */unsigned long long int) 740749443U)))));
                    var_42 = ((/* implicit */_Bool) ((unsigned char) max((arr_43 [i_1] [4ULL]), (arr_43 [i_1] [12ULL]))));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned short) max((((long long int) ((((/* implicit */int) var_0)) << (((var_8) - (16756210434879930609ULL)))))), (((/* implicit */long long int) var_6))));
    var_44 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_5)));
}
