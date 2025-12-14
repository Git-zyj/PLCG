/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216750
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((17442145855324387800ULL) % (17442145855324387800ULL)));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))) > (((1004598218385163840ULL) << (((17442145855324387830ULL) - (17442145855324387806ULL)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_10);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_4 = 1; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19163)) ? (-625153011) : (arr_12 [i_1] [i_4])));
                        var_16 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_14 [i_1])))) + (2147483647))) << (((var_7) - (13269320929099824964ULL)))));
                        var_17 = ((((/* implicit */_Bool) var_1)) ? ((~(arr_11 [(unsigned char)0] [(signed char)2] [i_3]))) : (((17442145855324387791ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                    }
                    for (int i_5 = 1; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        var_18 -= ((/* implicit */unsigned long long int) var_1);
                        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((1004598218385163818ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))))) ? (((((/* implicit */_Bool) arr_6 [i_5 + 2] [i_3])) ? (17442145855324387800ULL) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))))));
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        arr_22 [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_6 [i_6] [i_3])) ? (((/* implicit */int) arr_10 [(signed char)16] [i_3] [i_1] [i_1])) : (((/* implicit */int) var_0))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_20 = arr_9 [(unsigned char)12] [(signed char)3];
                            var_21 |= ((((/* implicit */int) arr_14 [0])) << (((arr_3 [i_6]) - (1743442525))));
                            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_6] [i_7]))));
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_12 [i_6] [(unsigned short)9]) : (((/* implicit */int) var_6)))))));
                        }
                        for (unsigned char i_8 = 1; i_8 < 18; i_8 += 4) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (17442145855324387802ULL) : (arr_23 [i_1] [12] [i_3] [i_6] [i_1])))) ? (arr_11 [i_8 + 1] [i_8] [i_8 - 1]) : (((((/* implicit */_Bool) arr_28 [i_8] [(signed char)5] [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8]))) : (1004598218385163825ULL)))));
                            var_25 &= ((/* implicit */int) ((((17442145855324387801ULL) ^ (arr_16 [12] [i_2] [i_8] [i_6] [i_2] [i_3]))) < (((/* implicit */unsigned long long int) arr_15 [i_8 - 1]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 19; i_9 += 4) 
                        {
                            arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_24 [i_2] [i_2] [i_3] [i_6] [i_1] [i_2] [(signed char)12]);
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) arr_30 [i_1] [i_2] [i_3] [i_3] [i_6] [i_6] [i_9])) : (((arr_26 [i_6] [(signed char)10] [(unsigned short)0] [0ULL] [(unsigned short)0] [(signed char)10]) + (((/* implicit */int) (signed char)104))))));
                        }
                    }
                    for (unsigned short i_10 = 2; i_10 < 18; i_10 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_28 [(signed char)8] [i_3] [0] [i_2] [i_1])) << (((17442145855324387797ULL) - (17442145855324387774ULL)))))));
                        var_28 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_17 [13] [i_3] [i_10 + 1] [i_10 - 2]))));
                    }
                    var_29 |= ((/* implicit */unsigned short) (unsigned char)154);
                }
            } 
        } 
        var_30 = ((((/* implicit */int) arr_30 [i_1] [i_1] [(unsigned char)10] [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) var_5)));
        arr_34 [i_1] = var_3;
        var_31 &= ((((/* implicit */_Bool) ((arr_29 [i_1]) + (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (signed char)-107)))));
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_11] [i_11] [(signed char)9] [i_11] [(unsigned short)9])) ? (((/* implicit */int) arr_28 [8] [8] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11] [i_11]))));
        var_32 = (+((-(((/* implicit */int) arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))));
    }
    var_33 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        var_34 = ((/* implicit */int) var_2);
        var_35 = ((/* implicit */int) arr_38 [(unsigned short)4] [i_12]);
        var_36 = ((/* implicit */signed char) arr_38 [i_12] [i_12]);
    }
    /* vectorizable */
    for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
    {
        var_37 = ((/* implicit */unsigned short) ((1994777304) >= (arr_3 [(signed char)3])));
        var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_13 - 1] [i_13 - 1] [i_13] [17] [i_13])) ? (((/* implicit */int) arr_28 [i_13 + 3] [i_13] [i_13] [i_13 + 1] [i_13])) : (((/* implicit */int) arr_28 [i_13 + 3] [i_13] [i_13] [15] [15]))));
        var_39 = ((((unsigned long long int) -924428258)) - (((/* implicit */unsigned long long int) var_3)));
    }
    var_40 = ((/* implicit */unsigned char) ((unsigned long long int) min((max((((/* implicit */unsigned long long int) var_1)), (16698054215760945402ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) (unsigned char)135))))))));
}
