/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54500
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
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19))) / (92168133U))));
    var_17 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)126))));
    var_18 = ((/* implicit */int) ((721661207795379630LL) <= (((/* implicit */long long int) (-(var_14))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max(((~(arr_0 [i_0 - 2] [i_0 + 1]))), (((/* implicit */unsigned long long int) -1))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((((/* implicit */_Bool) max((arr_0 [i_0 + 2] [i_1]), (arr_0 [i_0 + 2] [i_0 + 2])))) ? (min((arr_0 [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0 + 2] [i_1] [(short)10]), (arr_3 [i_0 + 2] [i_0 + 2] [i_1])))));
            arr_5 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10042)))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_0 - 1])), ((~(((/* implicit */int) arr_4 [i_0]))))))) : (min(((~(18446744073709551610ULL))), ((~(5035904357575556996ULL)))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_3] [i_0] [i_0] [(short)13] = ((/* implicit */signed char) ((_Bool) (unsigned char)192));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) || (((((/* implicit */_Bool) 18446744073709551598ULL)) && (((/* implicit */_Bool) arr_0 [i_4] [i_0])))))))));
                            var_22 ^= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) var_13);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] = ((/* implicit */int) var_15);
                            var_24 -= ((/* implicit */_Bool) ((unsigned long long int) (-(1ULL))));
                            arr_21 [(short)0] [(short)0] [(short)0] [(short)0] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [7] [i_1] [i_1] [(unsigned char)0] [i_6] [i_6]))) : (arr_8 [i_0] [i_1] [i_5])));
                        }
                    } 
                } 
            }
            for (int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                arr_25 [i_0] [11] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)202)) % (((/* implicit */int) (_Bool)1))));
                arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(arr_0 [i_0] [i_0]))) < (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_16 [(short)9] [(short)9] [i_0 + 2] [i_0 + 1]) : (arr_0 [i_0] [i_0])))));
            }
            /* LoopSeq 4 */
            for (unsigned int i_8 = 4; i_8 < 11; i_8 += 2) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((900694111U) ^ (((/* implicit */unsigned int) -360686677)))))));
                arr_30 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8 - 4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_7 [i_0 - 2] [i_8 - 2] [i_8 + 3]) > (((/* implicit */int) (unsigned char)128)))))));
            }
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) 18446744073709551600ULL);
                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)222))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-(arr_7 [i_0 + 1] [i_0 + 1] [i_12 + 3]))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [9] [i_1] [1U] [9])) ? (((((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_0] [i_0]) - (arr_23 [i_0 + 2])))) ? (((/* implicit */int) min(((unsigned char)16), (arr_13 [i_0 - 1] [i_1] [i_10] [i_10])))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_2))))))) : ((+((+(arr_40 [i_0 - 2] [i_1] [i_0 - 2] [i_11] [i_0 - 2])))))));
                        var_30 ^= ((((/* implicit */_Bool) (-(arr_8 [i_0 + 1] [i_12 + 3] [i_12 - 1])))) || (((/* implicit */_Bool) (-(var_14)))));
                        arr_41 [i_0] [i_1] [i_1] [i_10] [i_10] [7] = ((/* implicit */short) (((!((!(((/* implicit */_Bool) 1044480)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0])), (var_0))))))) : (((/* implicit */int) arr_2 [i_1] [i_10] [i_11]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 4; i_13 < 13; i_13 += 3) 
                    {
                        var_31 -= ((/* implicit */unsigned long long int) arr_17 [i_13 - 4] [i_1] [i_13 - 2] [i_0 + 1] [i_13 - 2] [i_1]);
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL)))))));
                    }
                    var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))));
                    arr_45 [i_10] = ((/* implicit */short) 1337846710U);
                }
                arr_46 [i_0 - 1] [i_1] [i_10] [i_10] = ((/* implicit */int) var_15);
                var_34 = ((/* implicit */unsigned int) max((var_34), (((((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_0 - 2] [i_1])) ? (arr_8 [i_0 + 2] [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) | (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35)))))))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
            {
                arr_49 [i_0] [i_1] [i_14] [i_14] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 1386492593)))) + (arr_37 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 - 2])))))));
                var_35 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_0] [i_0 - 2]), (arr_3 [i_0] [(unsigned char)5] [i_0 + 2])))), (min((18446744073709551606ULL), (18446744073709551604ULL)))));
            }
        }
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
        {
            arr_52 [i_0] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_42 [i_0 + 2] [i_15 + 1])))) + (2147483647))) >> ((((~(((/* implicit */int) arr_42 [i_0 + 2] [i_15 + 1])))) + (29)))));
            arr_53 [i_0 - 2] [i_15] [i_0 - 2] |= ((/* implicit */signed char) -1020495587);
            var_36 = ((/* implicit */unsigned short) 18446744073709551613ULL);
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
        {
            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
            var_37 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_16 + 1]);
        }
        var_38 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)51))))));
        var_39 = ((/* implicit */short) (-((+(var_15)))));
    }
}
