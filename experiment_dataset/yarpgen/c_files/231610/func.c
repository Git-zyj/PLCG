/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231610
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)44985)) : (((/* implicit */int) ((signed char) (unsigned short)44985)))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44967)) ? (((/* implicit */int) (unsigned short)27159)) : (((/* implicit */int) (unsigned short)27168))))) ? (((/* implicit */int) min((((unsigned short) arr_0 [i_0] [i_0])), (min(((unsigned short)27159), ((unsigned short)38353)))))) : (((/* implicit */int) arr_3 [i_2] [i_0] [i_0]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            arr_15 [i_3] [7ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(var_3))), (((arr_7 [5ULL] [i_2] [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) && (((/* implicit */_Bool) ((signed char) ((unsigned char) arr_14 [(short)4] [i_3] [i_2] [i_3] [i_4]))))));
                            var_14 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20556)) + (((/* implicit */int) (unsigned short)38389))));
                            var_15 ^= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 1])) ? (arr_7 [i_1 - 2] [i_1 + 1] [i_1 + 1]) : (arr_7 [i_1 + 3] [i_1 + 1] [i_1 + 2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (var_11)))) ? (((/* implicit */unsigned long long int) 6U)) : (min((((/* implicit */unsigned long long int) var_4)), (var_11))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_18 [i_0] [(signed char)0] [(unsigned char)4] [i_3] [(signed char)0] [i_5] = ((/* implicit */unsigned int) (unsigned short)20546);
                            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0] [0U] [i_2] [i_3] [i_5]))));
                            var_17 -= ((/* implicit */signed char) arr_8 [i_0] [2LL] [2LL] [i_5]);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_9))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                arr_26 [3] [i_6] = arr_9 [i_0] [i_0] [i_6 + 1] [i_7];
                var_19 = ((/* implicit */unsigned char) ((arr_25 [6U] [i_6 + 1] [i_6]) / (arr_25 [i_6] [i_6] [i_6])));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (signed char i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        {
                            arr_34 [i_6] = ((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_6] [i_9 + 1])) - (((/* implicit */int) arr_24 [i_6] [i_9 - 1]))));
                            arr_35 [i_6] [i_7] [i_8] [i_8] [i_9 + 1] = (-(var_11));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    arr_38 [i_10] [i_7 - 1] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)51545)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)21)) : (var_9))))));
                    var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_7 - 1] [i_10] [i_7 - 1]))));
                    var_21 -= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_5)))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_42 [i_0] [i_6] [5ULL] [(unsigned char)10] [i_11] [i_11] = ((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_6 - 1] [i_10])) ? (((/* implicit */int) (short)27)) : (var_2))) : ((~(((/* implicit */int) var_1)))));
                        arr_43 [i_0] [i_6] [i_7] [4] [i_7] [1LL] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_6] [i_7])) ? (((/* implicit */unsigned long long int) 1843303231U)) : (arr_0 [i_0] [i_10]))) : (((/* implicit */unsigned long long int) ((arr_10 [i_11]) - (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_10] [i_7]))))))));
                    }
                    var_22 = ((((/* implicit */_Bool) var_3)) ? (arr_14 [i_6 + 1] [i_10] [0] [i_7 - 1] [i_10]) : (arr_14 [i_6 + 1] [i_10] [i_6] [i_7 - 1] [i_7 + 1]));
                }
                for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    arr_47 [i_0] [i_0] [i_0] [9LL] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 453468119U)))));
                    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)18)) ? (8U) : (((/* implicit */unsigned int) arr_36 [i_12] [i_6 - 1] [2ULL] [4U]))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)38379)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-1)))) : ((~(var_10)))));
                }
            }
            for (unsigned long long int i_13 = 3; i_13 < 10; i_13 += 3) 
            {
                var_25 = ((/* implicit */signed char) (~(arr_8 [i_13 - 1] [(unsigned short)7] [i_6] [i_0])));
                arr_50 [i_6] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_13] [i_6 - 1])) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)41)))) : (((((/* implicit */_Bool) -1792915455)) ? (var_7) : (((/* implicit */int) (short)-8192))))));
                arr_51 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_37 [i_0] [i_6 - 1] [(unsigned char)1] [i_13 - 2])) ? (arr_7 [3] [i_6 - 1] [i_13]) : (var_3))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_13] [(unsigned char)6] [i_13] [i_13 + 1] [(signed char)10] [i_13])))));
            }
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                var_26 = ((/* implicit */int) ((unsigned short) var_6));
                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) > (((((/* implicit */_Bool) (short)34)) ? (18446673704965373952ULL) : (((/* implicit */unsigned long long int) -1500043546)))))))));
            }
            arr_54 [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_6 - 1] [(unsigned char)2] [i_6])) / (1989410065)));
            arr_55 [10LL] &= ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [7] [7] [(unsigned short)10] [i_6]);
        }
    }
    for (unsigned long long int i_15 = 2; i_15 < 17; i_15 += 2) 
    {
        var_28 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_56 [i_15 - 2])) + (((70368744177669ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_59 [i_15 - 2] [i_15])))))));
        arr_60 [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_59 [i_15 + 1] [i_15 - 2])) || (((/* implicit */_Bool) arr_56 [i_15 - 1])))) ? ((~(((long long int) arr_59 [i_15] [i_15 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_15] [i_15])))));
    }
    for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        var_29 &= ((/* implicit */unsigned long long int) var_9);
        arr_64 [4LL] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_62 [i_16] [i_16])) / (arr_61 [i_16]))) >= (((((/* implicit */_Bool) arr_62 [i_16] [i_16])) ? (arr_61 [i_16]) : (arr_61 [i_16])))));
    }
    var_30 = ((/* implicit */int) ((unsigned int) ((unsigned char) ((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    var_31 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45005)) << (((var_3) - (56704693U)))));
}
