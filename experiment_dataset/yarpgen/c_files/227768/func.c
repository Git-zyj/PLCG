/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227768
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_6 [(unsigned char)15] [i_1]))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0 + 3])) || (((/* implicit */_Bool) arr_6 [i_0 + 3] [i_1 - 1])))) || (((/* implicit */_Bool) arr_2 [i_0 + 3]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned char)32))));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    arr_19 [i_0] [i_3] [i_5] = ((/* implicit */unsigned char) 9ULL);
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max(((!(((/* implicit */_Bool) max((-754954506757136029LL), (((/* implicit */long long int) var_18))))))), ((!(((/* implicit */_Bool) ((long long int) var_12))))))))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) var_4)) >= (arr_15 [i_0] [i_0] [i_0] [i_0])))))));
                    var_24 = ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_16 [i_0 + 3] [(_Bool)1] [i_5 - 1])), ((-(-191261103)))))));
                    arr_20 [i_0 - 1] [i_3] [i_3] [i_3] [i_0] [1LL] = var_3;
                }
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (15655596263932030908ULL) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_3])))) : (((var_13) << (((var_19) - (7906555971517919112ULL))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))))));
                var_26 = ((/* implicit */unsigned char) var_0);
                var_27 ^= ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 + 3] [i_0 + 2])))), (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) ((signed char) arr_5 [i_4] [i_3] [i_0]))))))));
            }
            arr_21 [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)21), (min((var_3), (arr_1 [9ULL])))))) && (((/* implicit */_Bool) max((((12916903246113089ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_3]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))))));
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                arr_26 [i_0] [i_3] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2])) && (((/* implicit */_Bool) arr_13 [i_0] [(_Bool)1] [i_0] [i_0 + 3]))))), (((unsigned long long int) arr_13 [i_0] [i_0 + 2] [i_0] [i_0 + 2]))));
                arr_27 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) max((((long long int) (-(arr_22 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_0)))))))));
            }
            for (int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                arr_30 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)0))) ? (arr_24 [i_7] [13LL] [i_7]) : (max((((/* implicit */unsigned long long int) 1048448)), (((((/* implicit */_Bool) (unsigned short)18304)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                var_28 = ((/* implicit */_Bool) 13ULL);
            }
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */int) ((_Bool) 1048449))), (((((/* implicit */_Bool) arr_29 [i_0 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_3] [i_8])) : (var_4))))) : (((/* implicit */int) (unsigned char)248))));
                var_30 = (!(((/* implicit */_Bool) 268304384LL)));
                var_31 = ((/* implicit */unsigned long long int) ((2147483647) < ((-(((((/* implicit */_Bool) (signed char)21)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */int) var_9))))))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_36 [(signed char)9] [(unsigned short)8] [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)75)))), (((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 2])) : (((/* implicit */int) arr_16 [i_0] [i_0 + 3] [i_0 + 3]))))));
            var_32 = ((/* implicit */unsigned char) min((var_32), (var_3)));
            /* LoopNest 2 */
            for (unsigned short i_10 = 3; i_10 < 16; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 4) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_41 [i_11] [i_0] [i_10 + 1] [i_12]))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+(max((arr_17 [i_11] [i_12 - 1] [i_12]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65534)) ^ (((/* implicit */int) var_17))))))))))));
                            var_35 = ((/* implicit */unsigned long long int) (unsigned short)47202);
                        }
                        for (unsigned long long int i_13 = 2; i_13 < 16; i_13 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_6 [i_13 - 1] [i_13 - 1]))) ? (arr_15 [i_13 + 1] [(short)3] [i_9] [i_9]) : ((((!(((/* implicit */_Bool) arr_29 [i_0 + 2])))) ? (arr_15 [i_0 + 1] [i_10 - 2] [i_13 - 1] [i_13 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18304)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)8)))))))));
                            var_37 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) arr_43 [i_13 - 2] [i_10] [i_10 - 1])) : (arr_17 [i_11] [i_10] [i_11]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_11] [i_10] [i_11])))))));
                            var_38 = ((/* implicit */unsigned char) (+(max(((+(((/* implicit */int) (signed char)-22)))), ((-(((/* implicit */int) var_3))))))));
                        }
                        var_39 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)28)) ^ (((((/* implicit */_Bool) (short)3744)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2)))))));
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_4 [i_0]))));
                        var_41 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [16ULL])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) 32505856U)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) arr_23 [i_11] [i_0] [i_0] [i_0]))))))) / (4047211238U)));
                    }
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            arr_50 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) 4047211238U)) : (arr_45 [12ULL] [12ULL] [i_0] [i_0] [i_0])));
            var_42 = ((((/* implicit */int) (signed char)-22)) >= (((/* implicit */int) (unsigned char)248)));
        }
    }
    var_43 = var_16;
    var_44 = ((/* implicit */unsigned char) var_13);
    var_45 = ((/* implicit */unsigned long long int) (-(var_4)));
    var_46 = ((/* implicit */signed char) var_0);
}
