/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203838
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_11 = ((unsigned short) arr_7 [i_0] [i_1]);
                        arr_10 [i_0] [i_0] = ((/* implicit */long long int) var_7);
                        arr_11 [(signed char)3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (arr_6 [i_0] [i_2 - 2] [i_0])));
                        var_12 -= ((/* implicit */short) ((((((var_0) + (2147483647))) >> (((((/* implicit */int) (signed char)91)) - (66))))) << (((((((/* implicit */_Bool) 813714521060161609ULL)) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)2] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)52817)))) - (50)))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (arr_8 [i_1] [i_1])))));
                    }
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) arr_9 [(signed char)5] [(unsigned short)9] [i_2 + 1] [i_4])), ((+(arr_6 [i_0] [3U] [i_2]))))) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) -9LL)) ? (((/* implicit */int) (short)-21797)) : (((/* implicit */int) arr_7 [i_0] [i_1])))), (((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_0]))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 2; i_5 < 7; i_5 += 3) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_4] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [(signed char)1] [i_0])), (var_5)))) - (55338))))) >> (((min((min((arr_5 [i_0]), (((/* implicit */int) (short)957)))), (((/* implicit */int) min((arr_7 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0]))))))) - (14)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) << (((((((((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [(signed char)1] [i_0])), (var_5)))) - (55338))) + (23026))) - (17))))) >> (((((min((min((arr_5 [i_0]), (((/* implicit */int) (short)957)))), (((/* implicit */int) min((arr_7 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0]))))))) - (14))) + (1941942194))))));
                            var_13 = ((/* implicit */unsigned char) (+(var_7)));
                        }
                    }
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 7; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 6; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_6 - 1] [i_1] = (+(((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 + 1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_14 = ((/* implicit */unsigned long long int) arr_9 [i_7] [i_7 - 1] [i_2 - 2] [i_2 - 2]);
                            arr_25 [i_0] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_6 [i_0] [i_6 - 1] [i_6])))) ? (arr_21 [i_0] [i_0] [i_0] [i_7 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (short)-21808)), (arr_18 [i_0] [i_6 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])));
                            var_15 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) var_3)), (arr_6 [i_0] [i_0] [i_2 + 1]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))))));
                            arr_30 [i_0] [i_0] [i_2] [(_Bool)1] [(unsigned short)5] = ((/* implicit */signed char) ((unsigned int) (unsigned short)55734));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) arr_3 [i_8])) - (45)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) var_4))) : (((arr_18 [i_1] [i_1] [i_2] [i_6 + 2] [i_8]) << (((arr_8 [i_0] [i_0]) - (16183682461333704006ULL)))))))) : ((-(((((/* implicit */_Bool) (short)-17604)) ? (var_6) : (arr_13 [i_0] [i_0])))))));
                        }
                        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_22 [i_9 + 2] [i_9 + 2] [i_9] [i_9 - 1] [6U] [i_9] [i_9 + 1]) != (arr_22 [i_9 + 2] [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9])))), (((((/* implicit */_Bool) var_0)) ? (arr_22 [i_9 + 2] [i_9 + 1] [i_9] [(short)6] [i_9 + 1] [i_9 + 1] [i_9 + 2]) : (((/* implicit */unsigned long long int) var_6))))));
                            arr_35 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_27 [i_6 - 1] [i_9 - 1])), (((arr_32 [i_1] [i_1] [i_1] [i_6] [6ULL] [i_9]) << (((((var_0) + (1388815668))) - (29)))))))) ? (((/* implicit */int) ((short) arr_23 [i_9] [i_9] [i_9 + 2] [i_0] [i_9 + 1]))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_1))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71))))))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_10 = 1; i_10 < 7; i_10 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_40 [i_0] [i_0] [i_2 - 1] [i_10 + 1])));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0] [i_0])) ? (arr_17 [(signed char)8] [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) arr_21 [i_10 - 1] [i_0] [i_0] [i_2 - 2]))));
                            var_19 = ((/* implicit */unsigned int) ((long long int) ((long long int) arr_21 [i_11] [i_0] [i_0] [i_0])));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))));
                        }
                        arr_44 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)103)) << (((((((/* implicit */int) (short)-30870)) + (30901))) - (30)))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (short)127)) << (((((/* implicit */int) var_4)) - (10)))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((int) -9223372036854775807LL))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)58064)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_3), (var_5))))))));
}
