/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247266
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_5), ((_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_14)))) && (((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_1)))))))) : ((~((~(((/* implicit */int) (unsigned short)22888))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) (~(arr_2 [i_0])));
        var_20 += ((/* implicit */unsigned int) (unsigned short)22888);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_3 [3ULL])))) ? (796615844153530866ULL) : ((+(arr_3 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)42672))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) max((arr_0 [7LL] [i_1]), (arr_5 [i_0] [1ULL])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)22888)) : (((/* implicit */int) (unsigned short)42648))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (unsigned short)22453))));
                            arr_16 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_4] [i_0]);
                            arr_17 [(unsigned short)6] [i_2] [(unsigned short)6] [(unsigned short)6] [i_4] [i_2] [(_Bool)1] = max(((-(1685740260832440754ULL))), (arr_12 [(_Bool)1] [i_3] [i_2] [i_0] [i_1] [i_0]));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_23 &= ((/* implicit */unsigned short) ((arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_5]) ? (arr_14 [i_1 + 3] [i_1 + 3] [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_1 + 3] [i_1 + 3] [i_5] [i_5]), (arr_11 [i_1 + 3] [i_5] [i_5] [i_5])))))));
                    arr_20 [i_2] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2] [i_2 + 1])) || (((/* implicit */_Bool) 8087303505531315768ULL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [(unsigned short)5] [i_5])))))))), ((short)4226)));
                    var_24 = ((/* implicit */long long int) (~(((arr_19 [i_1 + 1] [i_1 + 3]) ? (16761003812877110862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1 - 1] [i_1 - 1])))))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) arr_18 [i_2] [i_2] [(unsigned short)3] [i_2 - 1]))));
                    var_26 ^= ((/* implicit */signed char) (-(arr_3 [i_0])));
                    arr_25 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32761))) : (2776287430481722806ULL))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)24435)))))));
                }
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-((-((((_Bool)1) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (9U))))))))));
            }
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                arr_29 [i_1] = 4611686018427387904ULL;
                var_28 = ((/* implicit */signed char) (+(((3699287435U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1])))))));
                arr_30 [i_1] [15U] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)42647)) ? (((/* implicit */int) (unsigned short)22458)) : (((/* implicit */int) arr_28 [5ULL] [i_1] [i_1] [i_1]))))))), ((-((~(arr_8 [(short)3])))))));
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])) * (((/* implicit */int) arr_21 [i_0] [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [12ULL] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_0]))) : (max((32767ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1]))))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */signed char) arr_15 [i_10 + 1] [i_0] [i_10 + 3] [(signed char)6] [(signed char)6] [i_0] [(signed char)6]);
                            var_31 += ((/* implicit */_Bool) (unsigned short)22458);
                        }
                    } 
                } 
                arr_38 [13ULL] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_11])) ? (arr_15 [i_0] [i_1] [i_0] [i_8] [i_0] [i_11] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_1 + 1] [i_8] [i_11] [i_11])))))) ? (((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22888))) : (arr_32 [i_0]))) : (arr_8 [i_1 - 1]));
                    var_33 *= ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)22912)) ? (16761003812877110861ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_1 - 1])))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_11] [(signed char)10] [i_8] [i_11]))))) ? (arr_39 [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 - 1])))));
                    arr_41 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17650128229556020734ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_8] [i_8] [i_0]))) : (arr_15 [i_0] [i_0] [i_1] [i_8] [(_Bool)0] [i_11] [i_11])))) ? (((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 2])) : (((((/* implicit */int) arr_18 [i_0] [i_11] [8U] [i_1])) % (((/* implicit */int) (_Bool)1))))));
                    arr_42 [i_0] [i_1] [(signed char)7] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [(signed char)16] [i_11])) ? (1685740260832440754ULL) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0]))))));
                }
                for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) 
                {
                    arr_45 [i_0] [i_0] [i_1] [i_8] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)43321)) ? (((/* implicit */int) (unsigned short)42672)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (short)-32757)) + (((/* implicit */int) arr_36 [i_0] [i_1] [(short)7] [i_1] [i_12]))))));
                    var_35 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_12 + 2] [i_1 + 2])) : (((/* implicit */int) arr_19 [i_12 + 3] [i_1 - 1]))));
                    arr_46 [i_12] [i_1 + 2] [0U] [i_1 + 2] [i_0] = ((/* implicit */short) ((arr_14 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 + 2]) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_43 [11ULL] [11ULL] [i_8] [4LL])))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        var_36 = ((arr_12 [i_1 + 2] [i_1 + 2] [i_1] [1U] [i_1] [i_1 + 2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        arr_50 [i_13] [i_1] = ((/* implicit */unsigned short) (-(arr_13 [i_0] [i_0] [i_12] [i_12 - 2])));
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1 + 2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(arr_23 [i_8])))) : (((((/* implicit */_Bool) arr_27 [i_8] [i_8])) ? (16086178370868663817ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19613))))))))));
                    }
                }
                for (short i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    arr_55 [i_14] [i_1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 + 1] [(_Bool)1])) ^ (((/* implicit */int) (_Bool)1))));
                    arr_56 [i_14] [i_14] [i_14] [i_14] = ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1 + 2] [(_Bool)1])) ? (arr_14 [(_Bool)1] [i_0] [i_0] [i_0]) : (arr_14 [i_1] [i_1] [i_1] [i_1]));
                }
                arr_57 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1 + 3] [i_1 + 3] [i_8])) ? (arr_12 [i_1] [(_Bool)1] [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32750)))));
            }
            var_38 = ((((/* implicit */_Bool) (+(arr_6 [i_1 - 1] [i_1] [i_1 + 1])))) ? (max((((/* implicit */unsigned long long int) arr_54 [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1] [i_0] [i_1 + 2])), (5965380363908126554ULL))) : (((/* implicit */unsigned long long int) (+(arr_54 [i_1 + 1] [i_1] [i_1 - 1] [16ULL] [i_0] [i_1 + 1])))));
            var_39 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_24 [i_1 + 1] [i_1 - 1] [i_0])))), ((-((-(((/* implicit */int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)15]))))))));
        }
    }
    var_40 = ((/* implicit */unsigned long long int) min((var_40), ((+(((2360565702840887798ULL) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)43093)))))))))));
}
