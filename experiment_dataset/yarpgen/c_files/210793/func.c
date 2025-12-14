/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210793
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_3 [i_1 + 2]), (((/* implicit */unsigned long long int) arr_6 [(signed char)4] [i_1 + 2] [i_1] [i_2 - 1]))))) ? (((unsigned long long int) arr_6 [i_0] [i_0] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 6)) : (arr_3 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_6 [i_1] [i_1 + 2] [7] [i_2 - 2]) + (2147483647))) >> (((arr_6 [i_1 + 2] [i_1 + 1] [i_2] [i_2 + 1]) + (1045912091)))))) ? (((/* implicit */int) (_Bool)0)) : ((+(((((/* implicit */int) (signed char)-27)) + (((/* implicit */int) var_8))))))));
                        arr_9 [i_0] [i_1 + 1] [i_2] [(_Bool)1] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) max((var_5), (var_5))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                        var_19 = ((/* implicit */_Bool) var_0);
                    }
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min(((~(((/* implicit */int) (signed char)8)))), (((((/* implicit */int) (signed char)-45)) ^ (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)61)) / (((/* implicit */int) arr_0 [(unsigned char)10])))) == (((((/* implicit */_Bool) 2027818070035221356LL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)3))))))))))));
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_0] [5ULL] [(signed char)11] = max((((/* implicit */int) var_4)), (((((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_11))));
                    }
                    for (int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) (~((+(-1547053598)))))) ? (var_3) : (((/* implicit */unsigned int) ((arr_14 [i_1] [i_1 - 1] [i_2 - 2]) ? (((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) arr_14 [i_1] [i_1 + 1] [i_2 - 1]))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 3; i_6 < 11; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((((arr_14 [i_1 - 1] [3ULL] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 1] [i_6] [i_0]))) : (var_9))), (max(((~(2672023206U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_5 + 2]))))))))))));
                            arr_21 [i_5] = var_13;
                            arr_22 [i_0] [i_1 + 1] [i_2] [i_5] [2ULL] = ((/* implicit */unsigned int) ((_Bool) arr_10 [i_0] [i_2] [i_6]));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_7 = 4; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1U)) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (arr_16 [i_1 - 1] [i_7])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-4)), ((unsigned char)114))))) : (var_2)));
                            var_24 = ((/* implicit */unsigned int) (unsigned char)150);
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-46)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)157), (((/* implicit */unsigned char) (_Bool)1))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        for (long long int i_8 = 4; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_26 *= ((/* implicit */unsigned short) arr_29 [i_0] [i_0] [i_1] [i_0] [i_5] [i_5] [i_1]);
                            var_27 -= ((/* implicit */short) max(((+(29ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) var_8))))))))));
                            arr_30 [i_5] [i_2 - 1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) 6524850156536442825ULL)) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_1] [(short)0] [i_5 - 3] [i_8]))) : (arr_16 [i_1 + 2] [i_2]))) - (18446744073709543551ULL)))))) ? ((((+(var_13))) / (max((var_13), (((/* implicit */unsigned int) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_1 - 1] [i_2 - 1] [i_5 + 3])))));
                            arr_31 [(unsigned char)0] [(unsigned char)0] [i_2 + 1] [i_2] [i_5] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((-2147483647 - 1)) > (((/* implicit */int) var_15)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)0)), (var_7)))) : ((((_Bool)1) ? (30028433U) : (((/* implicit */unsigned int) var_7))))))) ? (((((/* implicit */_Bool) (signed char)15)) ? (-1547053598) : (((((/* implicit */int) arr_15 [i_5] [i_8])) ^ (((/* implicit */int) (unsigned char)175)))))) : (((/* implicit */int) arr_20 [i_0] [i_1] [i_5 - 1] [i_0]))));
                            var_28 = ((/* implicit */_Bool) var_3);
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_1 + 2] [(signed char)9] [i_5] [(signed char)9] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1] [i_5 - 3] [i_1 + 2])))))));
                            var_29 = ((/* implicit */unsigned char) (signed char)-76);
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))))));
                        }
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((int) arr_20 [i_1 + 1] [i_2 + 1] [i_2 - 2] [3ULL]))), (16521879480684773170ULL))))));
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        arr_38 [i_10] [i_0] [i_1] [(short)9] [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned char) 1202672878U))) ? (max((((/* implicit */unsigned int) var_6)), (arr_29 [i_0] [i_0] [i_1 + 2] [i_2] [i_2] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_1 - 1] [i_10] [i_10]))))), (((/* implicit */unsigned int) (unsigned char)219)))))));
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) max(((~(((((/* implicit */_Bool) 4U)) ? (((/* implicit */unsigned long long int) 5791944451787518446LL)) : (var_14))))), (((/* implicit */unsigned long long int) max((arr_5 [(_Bool)1]), (((/* implicit */short) ((1547053597) != (((/* implicit */int) arr_39 [i_0] [i_1] [i_2 - 1] [i_11])))))))))))));
                        var_34 -= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 7590310971920180160ULL))) == ((~(9223372036854775807LL))))))));
                        var_35 = ((/* implicit */unsigned char) max((min((((/* implicit */int) (unsigned char)99)), (((var_1) << (((((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_1] [i_2] [i_11] [i_11])) - (6661))))))), ((~(((((/* implicit */int) (signed char)-56)) * (((/* implicit */int) (signed char)-31))))))));
                        var_36 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) arr_33 [i_1] [i_1 + 2] [i_2] [i_1 + 2] [i_2 - 2] [i_11] [i_11])), (((((/* implicit */_Bool) 2921939516U)) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_2] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_1]))))))));
                        /* LoopSeq 1 */
                        for (short i_12 = 4; i_12 < 11; i_12 += 1) 
                        {
                            var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (signed char)-56))))), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned long long int) 2193650397U)) : (9914171168454534713ULL))))))));
                            var_38 -= max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) ((unsigned short) (signed char)93))) ? (max((((/* implicit */unsigned int) var_12)), (var_9))) : (((unsigned int) (_Bool)1)))));
                            arr_45 [i_0] [i_0] [i_2] [i_11] [i_12] = ((/* implicit */unsigned char) ((int) (-(((/* implicit */int) (unsigned char)81)))));
                        }
                    }
                }
            } 
        } 
    } 
    var_39 ^= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)48)) * (((/* implicit */int) ((_Bool) 1547053597)))))), (((((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) 483441544)))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)3)) ? (var_1) : (((/* implicit */int) (unsigned char)157)))))))));
    var_40 = ((/* implicit */unsigned char) var_11);
    var_41 = ((/* implicit */_Bool) var_4);
}
