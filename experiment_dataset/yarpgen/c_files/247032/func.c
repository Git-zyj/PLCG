/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247032
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
    var_12 = ((max((max((((/* implicit */long long int) var_4)), (0LL))), (((/* implicit */long long int) var_4)))) & (((/* implicit */long long int) var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-((+(var_4)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (-(var_5)));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8302))) | (18446744073709551610ULL)));
            var_13 *= ((((/* implicit */_Bool) arr_0 [i_1] [i_1 + 1])) ? ((-(var_3))) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_1 + 2])));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-82);
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                arr_13 [i_0] [i_1 + 2] [i_2] = ((/* implicit */int) (-(var_6)));
                var_14 = ((/* implicit */unsigned long long int) (~(arr_1 [i_1 - 1] [7])));
                var_15 = ((/* implicit */short) ((var_0) / (var_4)));
            }
            for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
            {
                var_16 *= ((/* implicit */long long int) ((_Bool) arr_14 [i_1 + 2] [i_1 + 1] [i_3 - 2]));
                arr_16 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)34))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [(signed char)12] [7U])) ? (((/* implicit */int) arr_14 [i_0] [i_1 + 2] [i_3 + 1])) : (((/* implicit */int) arr_14 [(signed char)12] [i_1] [i_3 - 1]))));
            }
            for (int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                arr_19 [7] [i_4] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]))) : (2788110653U)));
                var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_1 - 2] [i_1 - 1] [i_1 + 1])) - (((/* implicit */int) arr_15 [i_1 - 2] [i_1 + 1] [i_1 + 2]))));
                arr_20 [i_0] [i_1] [i_4] = ((/* implicit */int) arr_0 [i_1 - 2] [i_4 + 1]);
                arr_21 [i_0] [i_1] [i_1] |= (!(((/* implicit */_Bool) 8471699111716610913ULL)));
            }
            arr_22 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)11] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 + 1] [i_0] [i_0]))) : (9975044961992940703ULL))) / (((/* implicit */unsigned long long int) var_1))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_26 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            arr_27 [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) var_11)) <= (1506856643U)))));
            arr_28 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1506856643U)) == (8471699111716610892ULL)));
            var_19 *= ((/* implicit */unsigned char) ((arr_8 [i_0] [i_5]) ? (((/* implicit */int) arr_8 [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) arr_31 [i_0] [i_6] [i_6])))));
            var_21 -= ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_10 = 4; i_10 < 12; i_10 += 1) 
                {
                    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 9975044961992940703ULL)))) ? (((/* implicit */unsigned int) arr_35 [i_10 - 4] [i_9 + 1])) : (((unsigned int) var_6))));
                    var_23 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) arr_35 [i_8] [i_8])) + (8471699111716610912ULL)))));
                    arr_43 [i_7] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_7] [i_9 - 1] [i_10 - 3])) ? (((/* implicit */unsigned int) arr_41 [i_7] [i_8] [i_9])) : (3302334317U)));
                    var_24 += ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                    arr_44 [i_10 - 1] [i_9] [i_7] = ((((/* implicit */_Bool) arr_38 [i_10 - 1])) ? (8ULL) : (((/* implicit */unsigned long long int) 1048575)));
                }
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) (signed char)-95)), ((unsigned char)146))))));
            }
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                var_26 += ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 13; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_7] [i_12 + 1] [i_11])) ? (((/* implicit */int) arr_39 [i_13] [9LL] [9LL] [i_12 - 1])) : (((/* implicit */int) var_8))));
                            arr_52 [i_7] [i_8] [i_11] [i_11] [8ULL] [5LL] [i_13] = ((/* implicit */_Bool) (+(var_6)));
                            var_28 = ((/* implicit */unsigned char) ((unsigned short) arr_42 [i_12 + 2] [i_12 + 1] [i_12] [i_12] [i_12 - 2] [i_12]));
                            arr_53 [i_7] [i_11] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)48626)) == (-1048575)));
                        }
                    } 
                } 
                arr_54 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                arr_55 [i_7] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) - (18446744073709551608ULL)));
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_15 = 1; i_15 < 14; i_15 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55534))) < (9975044961992940703ULL)))));
                    var_30 ^= (~(((/* implicit */int) (_Bool)0)));
                }
                for (unsigned short i_16 = 1; i_16 < 14; i_16 += 2) /* same iter space */
                {
                    arr_65 [(short)0] [i_8] [4LL] [i_8] [i_16] = ((((/* implicit */int) arr_60 [i_7] [i_16 - 1] [i_16 - 1] [i_16 + 1])) * (((((/* implicit */int) var_9)) + (((/* implicit */int) var_2)))));
                    var_31 = (((((~(((/* implicit */int) var_2)))) + (2147483647))) << (((((arr_45 [i_7] [i_8] [i_14] [i_16 + 1]) + (151260815506537005LL))) - (5LL))));
                    var_32 = var_3;
                }
                var_33 = ((/* implicit */unsigned int) ((var_6) / (((((/* implicit */unsigned long long int) arr_35 [i_7] [i_8])) | (27ULL)))));
                arr_66 [i_7] [i_8] [i_14] [i_7] = ((/* implicit */long long int) ((var_3) << (((var_11) - (355065876)))));
            }
            var_34 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)146))));
        }
        for (long long int i_17 = 3; i_17 < 12; i_17 += 4) 
        {
            var_35 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
            arr_71 [i_7] [i_7] = ((((/* implicit */_Bool) (~(11079858571764613951ULL)))) ? (((/* implicit */int) (signed char)87)) : (608723902));
            arr_72 [i_7] [i_7] = ((/* implicit */unsigned short) min(((~(1048575))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
            arr_73 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -669798195)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) 669798182))))) ? (((/* implicit */int) (signed char)97)) : (-562724078)));
        }
        arr_74 [i_7] = ((/* implicit */unsigned long long int) arr_60 [i_7] [i_7] [i_7] [i_7]);
        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_59 [i_7] [i_7] [4ULL] [i_7])) - (28591)))))) < (((((/* implicit */_Bool) 2788110653U)) ? (1073741823ULL) : (((/* implicit */unsigned long long int) -9071141623274656524LL))))))))));
        var_37 &= ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) arr_57 [i_7] [i_7] [i_7] [i_7])))) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-25))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)253)) ? (10386164103327314777ULL) : (((/* implicit */unsigned long long int) 5135639064534837613LL))))))))));
        var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), ((+(var_4)))));
    }
    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(var_11))), ((-(((/* implicit */int) var_7))))))) ? (min((((var_3) - (8727184410929027552ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-122)) : (var_1)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-669798174)))) ? (min((var_5), (((/* implicit */unsigned long long int) var_11)))) : (var_3)))));
}
