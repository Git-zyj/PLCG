/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199072
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
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((min((((((/* implicit */_Bool) -7103567702523947840LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 1]))))), (arr_1 [i_0 - 1]))) >> (((((/* implicit */int) arr_0 [i_0] [(unsigned short)9])) + (65))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 2] [i_0 - 2]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7103567702523947845LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((2ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_1]))))))) : (((((unsigned long long int) var_14)) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_1] [i_2] = var_9;
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((7103567702523947838LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 2] [(signed char)4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(signed char)1])) ? (((/* implicit */int) arr_12 [i_1] [i_4] [i_0 - 2] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32742)) || (((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1] [i_0])))))));
                        arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-78)) > (((/* implicit */int) (signed char)-112)))))) : (var_17)));
                    }
                    var_23 ^= ((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0]);
                    arr_17 [i_0] [i_1] [i_2] [(unsigned short)0] [i_3] = ((/* implicit */signed char) (unsigned char)79);
                }
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32756)))))) / (((((/* implicit */_Bool) ((unsigned short) arr_1 [i_1]))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])) ? (arr_11 [i_0] [8LL] [8LL] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)0)) % (((/* implicit */int) (_Bool)1))))))))))));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_12 [i_0 + 1] [i_0 - 3] [(unsigned char)0] [i_5])))) * (((/* implicit */int) var_11)))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    var_26 = ((/* implicit */short) (signed char)50);
                    arr_24 [i_0] [i_0] [i_1] [i_6] [i_6] = ((/* implicit */long long int) ((int) ((((/* implicit */int) (short)32754)) ^ (((/* implicit */int) (unsigned short)14241)))));
                }
                for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) arr_22 [i_0] [i_1] [i_0 - 1] [i_1]))))) > (((((/* implicit */_Bool) arr_22 [2LL] [2LL] [i_0 - 1] [2LL])) ? (11966141335788808774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [10U] [i_0 - 3] [i_7])))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                    {
                        arr_32 [i_0] [i_0] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_5] [i_7] [i_8]);
                        var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) var_13))))));
                        arr_33 [i_0 + 1] [i_7] [i_1] [i_0 + 1] [i_0 + 1] = 394841018612873579LL;
                    }
                    for (signed char i_9 = 4; i_9 < 13; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((arr_10 [(signed char)0] [i_1] [(signed char)0] [i_7]) | (max((((/* implicit */long long int) arr_25 [i_1] [6U] [i_7] [i_1])), (arr_10 [i_0] [i_1] [i_5] [i_7])))));
                        arr_38 [(signed char)11] [i_1] [i_5] [i_1] [i_9] = ((/* implicit */signed char) (-(266287972352LL)));
                        var_30 = ((/* implicit */unsigned int) max((var_30), ((-(2364532720U)))));
                        arr_39 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_21 [i_5] [i_1] [i_1] [(unsigned short)9])))) ? ((+(((/* implicit */int) (signed char)-54)))) : ((-((~(((/* implicit */int) (short)32756))))))));
                    }
                    for (short i_10 = 2; i_10 < 15; i_10 += 4) 
                    {
                        arr_42 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_1] [i_7 + 3] [i_7 + 3])) == (((/* implicit */int) arr_29 [i_1] [i_7 + 1] [i_5]))))) > (((/* implicit */int) ((arr_31 [i_0] [i_0] [(unsigned char)8] [(unsigned char)8] [i_5] [15U] [i_10]) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))))))));
                        arr_43 [i_0] [i_0] [i_7] [(signed char)14] [i_10 - 1] [i_5] &= ((/* implicit */unsigned short) (unsigned char)6);
                        arr_44 [i_0] [i_1] [i_5] [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)23)) - (((/* implicit */int) (unsigned char)128))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_0] [i_1] [7ULL])))) == (((/* implicit */int) ((short) 1579807056763235028LL)))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 2; i_11 < 14; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((arr_45 [i_0 - 2]) % (arr_45 [i_0 - 1]))))));
                        var_33 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_12 [i_0 - 1] [i_7 - 1] [i_11 + 2] [i_5]))));
                        arr_48 [i_0] [i_1] [i_1] [(short)14] [i_11 + 1] = ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_5] [i_11 - 1]))) ^ (arr_34 [i_1] [i_1] [6ULL] [i_7] [i_1]))) <= (((/* implicit */long long int) (~(((/* implicit */int) var_5))))));
                        var_34 = ((/* implicit */signed char) ((unsigned char) arr_29 [i_1] [i_1] [i_11 - 2]));
                    }
                    arr_49 [i_0] [i_0] [i_5] [i_7] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) != (min((((/* implicit */long long int) arr_29 [i_1] [(unsigned short)2] [i_1])), (arr_31 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_5] [i_5] [i_7 + 1]))));
                }
            }
            arr_50 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((arr_7 [i_0 + 1] [i_0 + 1] [i_1]) % (arr_7 [i_0 - 2] [i_1] [(unsigned char)12]))));
            var_35 = ((/* implicit */unsigned short) ((3466212147539954340LL) | (var_3)));
        }
        var_36 = ((/* implicit */long long int) arr_25 [10LL] [i_0 - 1] [10LL] [i_0 + 1]);
        arr_51 [i_0] [i_0 - 2] |= ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) == (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 1) 
    {
        arr_54 [i_12] = ((/* implicit */unsigned long long int) ((-2147483641) / (((/* implicit */int) arr_23 [i_12] [i_12 - 3] [i_12] [i_12 - 3]))));
        arr_55 [(short)4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_31 [1LL] [i_12] [i_12] [i_12 + 1] [i_12] [i_12 - 2] [i_12]) : (arr_31 [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 1])));
    }
    var_37 = ((/* implicit */int) var_7);
}
