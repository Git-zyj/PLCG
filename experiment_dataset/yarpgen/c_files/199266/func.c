/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199266
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) arr_5 [i_1]);
                    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((var_3) < (((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */unsigned long long int) ((unsigned int) -8443425151832274442LL))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)13] [(_Bool)1] [(_Bool)1] [(_Bool)1]))) % (6313421608830518859ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_0] [8] [i_0] [i_0])), (arr_3 [i_0]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            arr_11 [(_Bool)0] [9U] = ((/* implicit */unsigned int) ((short) ((1888355810U) / (arr_2 [i_0]))));
            var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_3] [(short)10])) ? (var_4) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (776197642U)))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), (var_5))))))) / (((long long int) (-(((/* implicit */int) (unsigned char)169)))))));
                    var_14 ^= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 2; i_7 < 22; i_7 += 1) 
                    {
                        var_15 ^= ((((/* implicit */_Bool) (((_Bool)0) ? (arr_17 [i_0] [0U] [i_5] [0U] [i_7 - 2] [i_7]) : (arr_17 [(_Bool)1] [i_4] [(signed char)12] [i_6] [i_7 + 1] [i_7])))) ? (max((((/* implicit */int) arr_15 [(unsigned short)3] [i_4] [i_6] [(unsigned short)13])), ((-2147483647 - 1)))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])));
                        var_16 = ((((/* implicit */int) var_7)) >= ((((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (min((((/* implicit */int) var_7)), (var_8))) : (((int) (unsigned short)13965)))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(min((((((/* implicit */unsigned int) ((/* implicit */int) (short)-21124))) * (arr_2 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [6ULL] [i_6] [i_8])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)12))))))))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+(((/* implicit */int) ((max((var_1), (((/* implicit */long long int) arr_1 [i_8])))) <= (min((((/* implicit */long long int) arr_21 [i_0] [i_0])), (var_1)))))))))));
                        arr_24 [i_0] [i_6] [i_0] [i_4] [i_0] [18LL] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_0] [i_8])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (arr_21 [i_0] [(unsigned char)15]) : (arr_4 [i_4]))))));
                        var_19 ^= var_0;
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5])))))));
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4])) % (((/* implicit */int) arr_5 [i_4]))));
                        var_22 += ((/* implicit */int) (+(((long long int) var_7))));
                    }
                    var_23 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (min((arr_0 [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) < (arr_6 [i_0] [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_0])) < (((/* implicit */int) var_9))))))));
                    var_24 = ((/* implicit */unsigned int) (signed char)-1);
                }
                for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    var_25 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_21 [(unsigned char)0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3992412464U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_4] [i_4])) & (-598287192)))))) & (var_4)));
                    var_26 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) 2223095505U))), (((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) (unsigned char)85)))))))));
                    var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_28 [i_0] [i_5] [i_10 + 2])), ((~(((/* implicit */int) (_Bool)0))))))) ? (var_8) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_0)) >> (((((/* implicit */int) (unsigned char)127)) - (97))))) : (max((((/* implicit */int) var_7)), (var_8)))))));
                }
                var_28 &= ((/* implicit */_Bool) arr_27 [i_0] [i_4] [14] [i_5]);
            }
            for (int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_4))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_18 [i_4] [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */long long int) arr_2 [22LL])))))))) : (469762048)));
                var_30 += ((/* implicit */unsigned int) ((signed char) ((short) var_8)));
            }
            arr_33 [i_4] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_25 [(unsigned char)18] [i_0] [(unsigned char)18]))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_27 [i_0] [(unsigned short)21] [i_0] [i_4]))))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_31 = ((/* implicit */long long int) arr_3 [i_0]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                arr_39 [i_13] [i_0] [i_12] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_13]))));
                var_32 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)17431)) ? (2071871783U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_46 [i_15] [i_13] [i_14] [0U] [i_0] [i_13] [i_0] = (+(((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_3)))));
                            var_33 = ((/* implicit */_Bool) var_7);
                            var_34 ^= arr_6 [i_12] [i_14];
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 2; i_17 < 21; i_17 += 2) 
                {
                    var_35 = ((/* implicit */long long int) var_5);
                    var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_16] [i_0])), (arr_21 [(_Bool)1] [i_12])))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))));
                    var_37 = ((/* implicit */unsigned int) ((unsigned short) ((((((/* implicit */_Bool) arr_25 [i_12] [i_16] [i_17])) ? (((/* implicit */long long int) var_4)) : (arr_25 [i_0] [i_0] [i_12]))) >= (((/* implicit */long long int) (-2147483647 - 1))))));
                    var_38 = ((/* implicit */unsigned char) max(((((!(((/* implicit */_Bool) (signed char)40)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_9 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_16] [4])))))));
                    var_39 = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), ((~(arr_50 [(signed char)22] [i_12]))))));
                }
                for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                {
                    var_40 = ((((/* implicit */long long int) arr_6 [(signed char)2] [i_12])) >= (max((((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_14 [13] [13] [i_0]))))), (arr_38 [i_12]))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) var_6)), (arr_53 [18LL] [12] [12] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_12] [5] [i_18])) / (((/* implicit */int) var_5))))) : ((+(var_4)))))))));
                }
                var_42 = ((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) | ((-((-(((/* implicit */int) (short)-5525))))))));
                arr_55 [i_16] [i_16] [i_16] [(signed char)9] = ((/* implicit */unsigned int) var_6);
                arr_56 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (-1416846191)))) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_16] [i_16] [i_16] [i_16] [i_16]))) + (3953626851U)))), (((((/* implicit */_Bool) arr_43 [i_0] [i_12] [(unsigned short)8] [19] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_19 [i_0] [i_12] [i_16] [i_16]))))) : (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) var_2)), (arr_53 [i_0] [i_0] [i_0] [i_16])))))))));
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_59 [i_0] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_14 [18U] [18U] [i_19])) - (((/* implicit */int) var_7))))));
                var_43 ^= ((/* implicit */unsigned short) 438774201U);
                var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_5))) == (((((/* implicit */_Bool) min((arr_15 [i_19] [i_12] [18U] [i_0]), (((/* implicit */unsigned short) arr_22 [i_0] [i_12]))))) ? (1681158626) : (((var_8) - (((/* implicit */int) (signed char)-127)))))))))));
                var_45 = ((/* implicit */unsigned int) -2147483640);
            }
        }
        var_46 = max((((/* implicit */unsigned int) ((((/* implicit */long long int) -1681158626)) == ((-(arr_0 [i_0])))))), (var_4));
    }
    var_47 += ((/* implicit */signed char) var_9);
}
