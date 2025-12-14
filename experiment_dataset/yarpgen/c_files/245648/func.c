/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245648
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
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2146435072) : (arr_0 [i_0] [i_0]))) : (((/* implicit */int) var_2)))) << ((((+(((long long int) (_Bool)1)))) - (1LL)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_8 [11] [11] [i_2] = ((/* implicit */int) min((((var_5) | (((/* implicit */long long int) (((_Bool)1) ? (var_0) : (((/* implicit */int) var_4))))))), (((/* implicit */long long int) min((arr_0 [i_0 - 1] [i_2 - 2]), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_3 [i_0 + 1])))) ? ((-(((/* implicit */int) arr_3 [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) && (var_9))))));
                            arr_15 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                            var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)196))))));
                        }
                        var_15 = ((/* implicit */unsigned int) arr_2 [i_0] [(unsigned short)2]);
                        var_16 = ((/* implicit */signed char) arr_6 [i_1]);
                    }
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned int) ((int) (-(((/* implicit */int) (signed char)-3)))));
                        var_18 ^= ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_9 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0 - 2])), (var_2)))), (2970733338U))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((-1576479237) | (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (_Bool)1))))) ? (((max((-1576479220), (((/* implicit */int) (signed char)-10)))) | (((/* implicit */int) var_10)))) : (max((((((/* implicit */_Bool) 100663296U)) ? (-1576479220) : (arr_1 [i_0] [i_0]))), (((((/* implicit */int) var_8)) | (arr_19 [i_6] [(signed char)11] [i_1] [i_1] [i_1] [i_0]))))));
                            arr_20 [i_0] [i_1] &= ((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_6]);
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_5] = arr_7 [i_5] [i_1] [i_2] [i_0 - 2];
                        arr_22 [i_0] [i_1] [i_2] [i_5] = (-(((/* implicit */int) (signed char)-10)));
                    }
                    var_20 = ((/* implicit */signed char) ((unsigned char) ((signed char) 8388606U)));
                    var_21 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) + (arr_13 [i_2] [i_2] [i_2 - 1] [i_2] [i_2 - 3]))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_8] [i_10])) ? ((((((_Bool)0) && (((/* implicit */_Bool) (unsigned char)55)))) ? (((/* implicit */int) (short)16977)) : (((/* implicit */int) (unsigned char)205)))) : (((/* implicit */int) (unsigned char)196))));
                        arr_34 [i_7 - 2] [i_7 - 2] [i_9] [i_10] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_7] [i_9]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_23 = arr_33 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_9];
                            arr_37 [i_7] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_8))));
                        }
                        for (long long int i_12 = 1; i_12 < 21; i_12 += 3) 
                        {
                            var_24 = 916420097U;
                            arr_40 [i_12] [i_12] [i_9] [i_10] [i_12] = ((/* implicit */unsigned int) min((((unsigned char) (-(((/* implicit */int) (signed char)-5))))), (((/* implicit */unsigned char) ((signed char) 1576479228)))));
                            var_25 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [20U] [i_8] [i_9] [i_8] [i_8])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (signed char)-10))))), (((arr_32 [i_10] [i_12] [i_12] [i_12] [i_12 + 2] [i_12]) - (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)80)) << (((/* implicit */int) var_10))))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_44 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_7 - 2] [i_7 + 1]))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)-3))));
                        arr_45 [i_7] [i_7] [i_7] = ((((/* implicit */int) arr_33 [i_7 + 1] [9U] [(short)10] [i_7] [9U] [i_7])) * (((/* implicit */int) (signed char)39)));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) / (var_1))))));
                    }
                    for (unsigned int i_14 = 3; i_14 < 22; i_14 += 3) 
                    {
                        arr_49 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((int) (((~(var_5))) / (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))))));
                        arr_50 [i_7] [i_8] [i_9] [i_14 - 3] = ((/* implicit */unsigned int) var_0);
                        arr_51 [(_Bool)1] [i_8] [i_8] [i_14] = ((/* implicit */int) arr_43 [i_7] [(signed char)20]);
                    }
                    for (signed char i_15 = 2; i_15 < 20; i_15 += 4) 
                    {
                        var_28 = ((_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) || ((_Bool)1)));
                        arr_54 [i_7] [i_8] [i_9] [(signed char)20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-90))))) - (3623584992U)))) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_7] [i_9])) >> (((var_11) - (3332276664U)))))), (((var_10) ? (((/* implicit */unsigned int) arr_39 [i_7] [i_8] [(unsigned char)20] [i_9] [i_8] [(unsigned char)20] [i_15])) : (var_11)))))));
                        var_29 ^= ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_48 [i_7 + 1])) ^ (((/* implicit */int) arr_48 [i_7 + 1])))));
                        var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (signed char)-18))), (((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))))))) ? (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3844660347U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        var_31 = ((/* implicit */_Bool) arr_23 [i_8] [i_15]);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
                    {
                        arr_58 [i_7] [i_8] [i_9] [i_16] = ((/* implicit */short) var_8);
                        /* LoopSeq 1 */
                        for (short i_17 = 1; i_17 < 20; i_17 += 4) 
                        {
                            var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 1U)) ? (1536) : (((/* implicit */int) arr_35 [i_17 + 3] [16] [i_7 - 1] [16] [i_17 + 3]))));
                            var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_7] [i_8] [17U] [i_7]))))) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [(signed char)2] [i_16] [i_9] [(signed char)22] [i_7])))));
                            arr_61 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned int) var_0);
                        }
                        var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_27 [(unsigned short)11])) ? (arr_55 [i_7] [(signed char)19] [i_9] [i_16]) : (((/* implicit */int) arr_31 [i_7] [i_8]))))));
                    }
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 2) /* same iter space */
                    {
                        var_35 += var_9;
                        arr_65 [(signed char)15] [i_8] [i_8] [(signed char)15] [i_18] = ((((/* implicit */_Bool) ((signed char) (short)0))) && (((/* implicit */_Bool) (signed char)-80)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_19 = 3; i_19 < 19; i_19 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned char) ((long long int) (signed char)-3));
                            arr_68 [i_19] [i_18] [i_8] [i_8] [i_7] = ((/* implicit */short) ((_Bool) (_Bool)1));
                        }
                        for (signed char i_20 = 1; i_20 < 21; i_20 += 3) 
                        {
                            arr_72 [i_7] [i_9] [i_18] [i_20 + 1] = ((/* implicit */int) max(((unsigned char)112), ((unsigned char)255)));
                            var_37 = ((/* implicit */short) (~(arr_39 [i_20] [i_20] [(unsigned char)9] [i_20] [i_20 - 1] [i_20] [i_20])));
                            var_38 = ((/* implicit */unsigned short) (((~((((_Bool)1) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) var_6))));
                        }
                    }
                }
            } 
        } 
    } 
    var_39 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */_Bool) -3661620087992291456LL)) ? (var_0) : (1576479219))))) : (min((((-2147483646) | (((/* implicit */int) (short)-4604)))), (((/* implicit */int) ((var_9) && (var_10))))))));
    var_40 = ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (signed char i_21 = 1; i_21 < 8; i_21 += 4) 
    {
        arr_76 [i_21] = ((signed char) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_21] [i_21])))) && (var_8)));
        arr_77 [i_21] = ((/* implicit */signed char) var_0);
        var_41 *= ((/* implicit */signed char) var_1);
    }
}
