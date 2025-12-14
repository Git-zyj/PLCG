/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30645
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
    var_10 = ((/* implicit */long long int) max((var_3), (min(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_0)) ? (163389678) : (((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_0]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) (unsigned short)24747)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) && ((!(((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]))))));
        var_11 *= ((/* implicit */long long int) (unsigned char)188);
        var_12 = ((/* implicit */unsigned char) 5576761812683350739LL);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_0 - 1] [i_0] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0] [i_2]))))));
                        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(arr_6 [i_3] [i_2] [i_0]))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned char) arr_2 [i_0 - 1] [i_0]);
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)16]))) : (var_7))))));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 4) /* same iter space */
        {
            arr_15 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_14 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)24747))))) : (arr_9 [i_0 - 1] [i_0])))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_4] [i_0 - 1])) : (((/* implicit */int) (signed char)15)))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_18 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0 - 1] [(signed char)16] [i_7]))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_29 [(signed char)12] [(signed char)12] [i_5] [12] [i_7] [i_6] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_12 [i_7]))) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7])))));
                        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
                        var_21 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_7] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_20 [i_0 - 1] [i_7] [i_0 - 1] [i_0 - 1]))));
                        var_22 = ((/* implicit */signed char) var_2);
                        var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (_Bool)0))));
                    }
                    for (long long int i_10 = 1; i_10 < 19; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) (signed char)-63);
                        var_25 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))));
                        var_26 *= var_5;
                    }
                    arr_33 [i_0] [i_6] [(signed char)1] [i_0] = var_0;
                    arr_34 [i_0 - 1] [i_0] [14LL] [i_6] [14LL] = ((/* implicit */long long int) (unsigned short)32640);
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? ((+(arr_14 [i_0] [i_7]))) : (((/* implicit */int) ((arr_14 [i_7] [i_6]) < (((/* implicit */int) (signed char)69))))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        var_28 = ((int) arr_4 [i_0] [i_0]);
                        var_29 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (arr_12 [i_5]) : (var_1)))));
                        arr_38 [i_7] [9U] [i_0] [0LL] [i_11] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0 - 1] [i_7] [i_7] [i_7])) : (var_1)));
                    }
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_5] [i_0] [i_12] [i_7] = ((/* implicit */long long int) ((_Bool) arr_17 [i_0 - 1] [i_5]));
                        var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_46 [10U] [10U] [i_0] [(_Bool)1] [i_13] [12U] [i_13] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_13] [i_13] [i_7] [(signed char)17] [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_39 [i_5] [i_5])) : (arr_6 [i_13] [i_13] [i_13])))) + ((~(-7852251990956664239LL)))));
                        var_31 = (+(arr_31 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_13] [i_0 - 1]));
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_32 |= ((/* implicit */short) (!(((/* implicit */_Bool) 0LL))));
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (1026386142))))));
                        var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) ((unsigned char) arr_27 [i_0 - 1] [i_0] [i_0] [i_0])))));
                        var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [17LL]))))) ^ (((/* implicit */int) ((2065798888U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_44 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))))));
                        var_37 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)121))));
                    }
                    for (signed char i_16 = 1; i_16 < 19; i_16 += 4) 
                    {
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_20 [i_0] [i_0] [i_16 - 1] [i_14]) : (((/* implicit */unsigned long long int) var_8))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_16 + 1])) ? (((/* implicit */long long int) var_3)) : (var_1))))));
                        var_39 = ((/* implicit */unsigned char) 2065798888U);
                        arr_54 [i_14] [i_5] [i_6] [i_6] [i_0] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_20 [i_16 + 1] [i_0] [i_0] [(signed char)3]))) + (((/* implicit */unsigned long long int) arr_21 [i_5] [i_16 + 1]))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        arr_58 [i_0] [i_14] [i_6] [0U] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) : (arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1])));
                        arr_59 [i_0] [i_0] [i_0] [i_0] [12] [i_17] [i_6] |= arr_4 [i_5] [i_5];
                    }
                    for (int i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        arr_64 [i_0] [i_14] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) (+(((unsigned int) arr_0 [i_0] [i_14]))));
                        arr_65 [i_0] [i_14] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-43)) ? (163389678) : (((/* implicit */int) arr_5 [i_0] [i_6] [i_0]))));
                    }
                }
                var_40 ^= ((/* implicit */signed char) (unsigned short)50178);
                var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 1] [i_6] [17] [i_5])) + (((/* implicit */int) var_0))));
                var_42 = ((/* implicit */long long int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [19LL] [i_5]);
                var_43 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
            }
            arr_66 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_41 [i_0] [i_0 - 1] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_0] [i_0 - 1] [i_0] [(short)18] [i_5] [i_5] [(short)18]))) : (((((/* implicit */_Bool) 992670348)) ? (var_7) : (0LL)))));
        }
        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-61)) : (2147483647)))) : (-2LL)));
    }
}
