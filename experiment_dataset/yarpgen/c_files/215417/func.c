/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215417
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)0)))), (arr_4 [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_15 *= ((/* implicit */int) var_1);
                        arr_13 [(unsigned char)2] [(signed char)9] [(unsigned char)1] [i_1] = ((/* implicit */short) (+(arr_0 [i_0 - 1])));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_1] [i_1] [i_1] [i_0])) ^ (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (_Bool)1)))))));
                        var_17 *= ((/* implicit */unsigned long long int) ((int) arr_5 [i_0 - 1]));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2]))) == (arr_2 [i_2])));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */short) (+(var_0)));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [4ULL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_21 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) var_0)) * (18446744073709551605ULL))));
                            arr_20 [(signed char)10] [(_Bool)1] [(short)8] [i_4] [i_1] = ((/* implicit */signed char) ((arr_9 [i_1] [i_4 + 1] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 1] [i_0 + 1] [i_0 - 1]))) : (var_7)));
                            var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)5] [i_1]))));
                            var_23 = ((/* implicit */_Bool) ((arr_2 [i_5]) << (((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))));
                        }
                        arr_21 [4ULL] [i_1] [i_1] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)74)) << (((arr_12 [i_0 - 1] [i_0 + 1]) - (17264950442098469320ULL)))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0]) >> (((((/* implicit */int) var_8)) - (194))))))));
                    }
                    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        arr_24 [6ULL] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(short)4] [i_2])), (((arr_16 [(short)4] [0ULL] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (arr_18 [2] [i_6] [i_1] [i_1] [i_6])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) min((arr_18 [i_0] [i_1] [i_1] [(signed char)8] [i_0]), (((/* implicit */unsigned long long int) var_11)))))) : ((~(((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (arr_22 [(_Bool)0] [i_1] [i_6]) : (((/* implicit */unsigned long long int) arr_4 [6LL] [7ULL]))))))));
                        arr_25 [i_0] [(signed char)2] [i_2] [i_2] [i_0] [i_2] &= ((/* implicit */unsigned long long int) (short)25);
                    }
                    arr_26 [i_1] [i_1] [i_2] = var_12;
                    arr_27 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_1] [9LL])) == (((/* implicit */int) var_5)))))) : (9223372036854775801LL))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                var_25 |= ((/* implicit */_Bool) max((((arr_18 [i_0] [i_7 - 1] [i_2] [i_0 + 1] [2LL]) * (arr_18 [i_0] [i_7 + 3] [i_2] [i_0 + 1] [i_8]))), (((((/* implicit */_Bool) var_8)) ? (arr_18 [(unsigned char)2] [i_7 + 1] [i_2] [i_0 + 1] [i_8]) : (arr_18 [i_7] [i_7 - 1] [i_2] [i_0 - 1] [6LL])))));
                                arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_10))) ? (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */int) (signed char)-3)))) : ((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_2] [0])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [(_Bool)1] [i_7] [i_8]))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_23 [i_1]), (((/* implicit */unsigned long long int) (short)-17566))))) ? (max((15912682513449356721ULL), (((/* implicit */unsigned long long int) var_4)))) : (min((13811530254262530077ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
                arr_33 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)31710)) < (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */int) arr_16 [(_Bool)1] [3LL] [i_1])) >> (((((/* implicit */int) arr_1 [i_0] [i_1])) - (45248))))) : (((/* implicit */int) var_13))));
                var_26 ^= ((/* implicit */unsigned char) min(((-(9214771879723257773ULL))), (((/* implicit */unsigned long long int) 1135198265))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                var_27 = arr_3 [i_11] [i_1] [i_0 + 1];
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((unsigned char) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_36 [i_0] [i_0] [(unsigned char)8] [i_0]))))))))));
                                arr_44 [i_0] [i_0] [i_1] [(unsigned short)1] [i_11] = ((/* implicit */unsigned int) arr_1 [i_10] [i_10]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
    {
        arr_48 [13U] = ((/* implicit */_Bool) (~(((int) (!(((/* implicit */_Bool) arr_47 [i_12])))))));
        arr_49 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12])) ? (arr_47 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_45 [i_12])) : (max((((/* implicit */int) var_1)), (-313802579)))))) ? ((~(15284827369402688010ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -408759502)) ? (var_3) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) 1365791563U))))))))));
        var_29 *= ((/* implicit */unsigned char) min(((~(15912682513449356706ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_12 + 1])) ? (arr_47 [i_12 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)12511))))))));
    }
}
