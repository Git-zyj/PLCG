/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49823
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */unsigned int) var_5)) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)68))))) : (2356551684U)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((short) max((arr_3 [i_0] [i_0] [i_2 - 1]), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-34)), ((short)30749)))))));
                    var_16 += ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                    var_17 = ((/* implicit */int) min((var_17), (((int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) * (((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 -= (~(((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_0))))));
                                var_19 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0]))))) - (min((((/* implicit */unsigned long long int) 2147483647)), (arr_2 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [(signed char)21])))));
                                var_20 = (~(((unsigned long long int) max((var_8), (((/* implicit */unsigned long long int) 0LL))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    var_21 -= 2849609994U;
                    /* LoopSeq 3 */
                    for (short i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        arr_23 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_4 [i_5 + 2] [i_5 + 2]) | (arr_4 [i_5 - 1] [i_5 + 1])));
                        var_22 = ((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0] [i_5 - 1]));
                    }
                    for (short i_7 = 2; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_7 - 2] [i_7] [i_7 + 3] [i_7 + 2] [i_7 - 1])) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [(signed char)1])))))))))));
                        var_24 = ((/* implicit */signed char) arr_24 [i_7] [i_7]);
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((_Bool) 916680211U))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)1)) ? (2199023255551ULL) : (((/* implicit */unsigned long long int) 2147483647)));
                        /* LoopSeq 4 */
                        for (int i_9 = 1; i_9 < 22; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) 1445357288U)));
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_27 [i_5 + 1] [i_5 + 1] [i_9 - 1] [i_9 - 1] [6U] [(unsigned short)15]))));
                            var_28 &= ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9 - 1] [i_1] [i_5 + 1]))) : (var_10));
                            arr_32 [i_8] [(short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48294)) ? (arr_26 [i_8] [i_8] [i_8] [i_8]) : (arr_26 [i_0] [i_1] [i_8] [i_9 + 1])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            arr_36 [i_10] [i_10] [7U] [i_10] [i_0] = ((/* implicit */int) (+(var_11)));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (~(1445357277U)))) ? (var_9) : (((/* implicit */long long int) 1445357302U)))))));
                            var_30 = ((/* implicit */short) 261144106U);
                        }
                        for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            arr_39 [10ULL] [i_8] [19ULL] [i_1] [10ULL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1445357294U)) > (18446741874686296062ULL)));
                            var_31 = ((/* implicit */signed char) arr_4 [i_5 + 2] [i_0]);
                            arr_40 [(signed char)8] [i_1] [i_8] [i_1] [i_5 + 2] [i_1] [(signed char)8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((long long int) var_7)))));
                        }
                        for (int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2849610005U)) ? (((/* implicit */long long int) ((int) (unsigned short)35992))) : (((((/* implicit */_Bool) arr_21 [i_5] [(unsigned short)12] [i_5] [i_5] [i_8])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            var_34 = ((/* implicit */unsigned long long int) arr_11 [i_0] [13U] [i_0]);
                            arr_43 [i_0] [i_1] [i_5] [i_8] [i_0] [i_12] = ((/* implicit */unsigned long long int) ((arr_9 [i_5 + 2] [i_5 + 2] [8]) ? (((/* implicit */long long int) 1938415611U)) : (var_10)));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(short)2] [i_5 + 2] [i_5]))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))))));
                            arr_44 [i_5 + 1] = ((/* implicit */int) var_1);
                        }
                        arr_45 [4LL] [4LL] [i_5] [i_8] = ((((/* implicit */_Bool) var_14)) ? (var_13) : (var_13));
                        var_36 *= ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_8]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            {
                                arr_52 [i_0] [i_0] [19ULL] [i_0] [i_0] = (~(((long long int) 2147483647)));
                                var_37 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_2 [13U] [i_1] [i_0])));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (-(arr_11 [i_5 - 1] [i_5 + 1] [i_5]))))));
                    var_39 *= ((/* implicit */signed char) var_6);
                }
                var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_12)))) ? ((~(var_7))) : (var_11))))));
                var_41 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(3506493224U)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_22 [i_0] [i_0] [i_0])) + (31687)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) var_5))))));
                var_42 = ((/* implicit */long long int) ((arr_28 [i_0] [i_0] [i_1] [12LL]) - (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_11)))) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_0])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (4245264651386215912ULL)))))));
            }
        } 
    } 
    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) var_5))));
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
    {
        for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            {
                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (0LL) : (((/* implicit */long long int) var_5))));
                var_45 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_15] [i_16] [i_15]) | (var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_15] [i_16]))) : (arr_2 [i_15] [i_15] [i_15]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
