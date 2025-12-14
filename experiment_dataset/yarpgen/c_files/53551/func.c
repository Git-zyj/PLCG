/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53551
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned int) var_9))))) || (((/* implicit */_Bool) (~(0ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)5996), (((/* implicit */short) (_Bool)0))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 4138089922U))) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 1])) : (((/* implicit */int) var_13))));
                    var_19 = ((/* implicit */unsigned char) ((unsigned short) (short)5996));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        var_20 = ((/* implicit */unsigned short) ((signed char) arr_9 [(unsigned char)6] [i_3] [i_2 + 3] [i_2] [i_2] [i_1 - 1]));
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0] [i_4] [i_3] [i_2 - 1] [i_0] [i_0]))));
                            arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_2 + 3] = ((/* implicit */unsigned int) ((arr_2 [i_0]) >> (((arr_2 [i_4 + 2]) - (105954962758282312ULL)))));
                            var_22 = ((/* implicit */unsigned char) arr_11 [i_0] [i_1] [i_1] [i_0]);
                            var_23 = ((/* implicit */unsigned char) (!((_Bool)1)));
                            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_1 + 1] [i_2] [i_3] [i_0]))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            var_25 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_19 [(short)2] [i_1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) arr_18 [i_3] [i_1])) : (208911334U))));
                            arr_20 [i_0] [i_0] [7ULL] [i_3] [i_5] = ((/* implicit */unsigned short) ((_Bool) arr_19 [i_2] [i_2] [5] [i_3] [i_3]));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((-345716252) == (((/* implicit */int) (unsigned short)2016)))))));
                        }
                        var_27 ^= ((/* implicit */short) (+(2551176074U)));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(unsigned char)7] [i_6])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_6 [i_6] [i_6] [(signed char)8])))) + (16757)))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_29 *= (short)5996;
                            arr_26 [(short)3] [i_1 + 1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((unsigned int) arr_24 [i_0] [(short)1] [(signed char)6] [(short)1] [6LL] [(short)7] [i_0]))));
                        }
                        var_30 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned char)214)) - (213)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) arr_9 [i_0] [(signed char)10] [i_1] [i_2] [i_8] [i_8]);
                            var_33 = ((/* implicit */_Bool) ((int) arr_7 [(signed char)0] [i_0] [(signed char)0]));
                            var_34 = ((/* implicit */unsigned short) arr_21 [i_1] [i_1 + 1] [i_1] [i_0]);
                        }
                    }
                    for (int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)58155)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                        var_36 = ((/* implicit */unsigned int) ((signed char) arr_3 [i_0] [i_1 - 1]));
                        var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)16384))));
                        var_38 = ((/* implicit */long long int) arr_32 [i_2 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                        var_39 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) arr_25 [(signed char)5] [i_1] [i_2] [0ULL] [i_0])));
                    }
                    arr_35 [i_0] [i_0] [i_0] [(signed char)9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_1 - 1] [i_2 - 1] [i_2] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))))) ^ (2525542652U)));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        arr_39 [i_0] [9LL] [1] [i_11] = ((/* implicit */unsigned char) ((long long int) ((var_5) | (arr_32 [i_0] [10LL] [i_0] [i_0]))));
                        arr_40 [i_0] [(unsigned short)1] [i_11] [i_11] = ((/* implicit */long long int) arr_31 [i_11] [i_0] [i_2 + 1] [(unsigned short)1] [(unsigned short)4] [i_1] [i_0]);
                    }
                    for (int i_12 = 4; i_12 < 10; i_12 += 1) 
                    {
                        var_40 += ((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_34 [i_2 - 1] [i_2] [i_1 - 1] [i_1]))));
                        var_41 = ((/* implicit */_Bool) ((((10761649416278316253ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_42 [i_0])))))) : (arr_41 [(unsigned short)6] [i_1] [i_1] [i_1 - 1])));
                        var_42 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_42 [i_1]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned short) max((var_43), ((unsigned short)63520)));
                            var_44 ^= (~(((/* implicit */int) (unsigned short)29937)));
                        }
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                        {
                            var_45 = ((/* implicit */_Bool) 3433278062811575590ULL);
                            var_46 = ((/* implicit */unsigned long long int) (+(arr_17 [i_1 - 1] [i_0] [i_2 + 2] [i_2 + 2] [i_13 + 1])));
                            var_47 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_31 [(short)8] [(short)8] [i_0] [i_13] [i_13] [i_0] [i_15])))) + (2147483647))) << (((((/* implicit */int) var_6)) - (57980)))));
                            var_48 -= ((/* implicit */unsigned char) ((arr_46 [i_15]) ? (((/* implicit */int) arr_46 [i_15])) : (((/* implicit */int) arr_46 [i_15]))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [i_0] = ((/* implicit */short) (~((~(0U)))));
                            arr_54 [i_0] [i_0] [6ULL] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_16])) == (arr_44 [i_0] [i_1] [i_2 + 3] [i_2 + 3])))))));
                            var_49 = ((/* implicit */signed char) (+(((/* implicit */int) arr_52 [i_13 + 1] [i_13 + 1] [i_0] [i_0] [i_1] [i_1]))));
                            arr_55 [i_0] [i_0] = (+(((/* implicit */int) (unsigned char)0)));
                            var_50 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)7381)) % (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */int) (short)3931)) ^ (((/* implicit */int) (unsigned char)0))))));
                        }
                        var_51 = ((/* implicit */int) ((unsigned int) arr_32 [i_0] [i_1 + 1] [i_13 + 1] [i_2 + 2]));
                    }
                }
                arr_56 [i_0] = ((/* implicit */long long int) 1073741824);
            }
        } 
    } 
}
