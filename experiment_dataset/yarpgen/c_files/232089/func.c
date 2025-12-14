/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232089
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (unsigned char)191)))) : (((/* implicit */int) var_18))))) | (min((var_15), (((/* implicit */unsigned int) (unsigned char)183))))));
    var_20 = ((/* implicit */_Bool) ((((var_4) < (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) var_16)))))))) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_10))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [12ULL] [i_1] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_1])) ? (min((arr_7 [i_0] [i_2] [i_3]), (((/* implicit */unsigned int) (unsigned char)191)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)74))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)152)) != (((/* implicit */int) arr_5 [(unsigned char)12] [i_0]))))))))));
                        arr_11 [i_0 + 2] [i_0] [i_2] [i_3] [i_3 - 1] = ((/* implicit */_Bool) var_15);
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
                        {
                            arr_18 [i_2] [i_4] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_5]), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) (unsigned char)62))))) == (arr_17 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 2] [i_0]))))));
                            arr_19 [(signed char)10] [i_2] [i_5] [i_4] [(short)8] [i_2] = ((/* implicit */long long int) var_17);
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)40)), (arr_17 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56887))))) : (((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-52))))) : (((((((/* implicit */int) (short)-11690)) + (2147483647))) >> (((((/* implicit */int) var_6)) - (68)))))))));
                            arr_24 [(short)10] [12ULL] [i_4] [i_2] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 3])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) arr_21 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_0 + 1]))))) >= ((-(var_8)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_16), ((signed char)-1)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
                            arr_30 [i_0] [i_1] [i_1] [i_2] [i_4] [i_7] = ((/* implicit */_Bool) var_15);
                        }
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_1] [i_2] [(unsigned short)2])) >= (((/* implicit */int) arr_12 [(unsigned char)11] [i_2] [i_1] [i_0])))))))) ^ (min((min((arr_25 [i_1] [i_1] [i_2] [i_0 + 2]), (var_8))), (arr_7 [i_0 - 1] [i_0 + 3] [i_0 + 1])))));
                        arr_32 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((arr_6 [i_0] [i_0 - 1] [i_4] [i_0 + 1]), (arr_6 [(signed char)2] [i_0 - 1] [i_4] [i_0 + 1])))), ((((_Bool)0) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_4] [i_0 + 1])))))));
                        arr_33 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)152)) : (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) var_6))))))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (var_9)))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
                        {
                            arr_39 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_16 [i_0 + 2] [10ULL] [i_8 - 2] [i_8 - 3] [8ULL]))));
                            arr_40 [(_Bool)0] [i_1] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)59901)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_13))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-22327)))));
                            arr_41 [i_0] [(unsigned short)5] [i_0] [i_2] [i_8] [i_0] [i_9] = ((/* implicit */unsigned long long int) var_7);
                        }
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                        {
                            arr_44 [i_0] [i_0] [1ULL] [i_0] [i_10] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) (unsigned char)37)), (arr_17 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2] [i_8 - 2] [i_8 - 1]))), (((/* implicit */unsigned long long int) var_3))));
                            arr_45 [i_0] [i_1] [i_2] [8U] [i_10] = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_14 [i_10])))) > (((/* implicit */int) var_18))))), ((-(((/* implicit */int) min(((short)1), (((/* implicit */short) var_7)))))))));
                        }
                        arr_46 [(signed char)10] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [(short)13] [i_0])) : (((/* implicit */int) max((max(((unsigned short)15), (((/* implicit */unsigned short) var_10)))), (var_5))))));
                        arr_47 [(unsigned short)2] [(unsigned short)2] [i_2] [i_2] [i_8] = ((/* implicit */_Bool) var_0);
                        arr_48 [i_1] [i_0] [i_8 - 2] = ((/* implicit */short) var_17);
                    }
                    for (unsigned int i_11 = 3; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        arr_51 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-21719))));
                        arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(max((arr_15 [i_11 - 3] [i_11 - 2] [i_11] [i_11] [i_11 - 3] [i_11 - 3] [i_11]), (((/* implicit */unsigned long long int) arr_35 [i_11] [i_11 + 1] [i_11] [i_11] [i_11] [i_11 - 3]))))));
                        arr_53 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)39);
                    }
                    arr_54 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) min((var_11), (((/* implicit */long long int) var_12))));
                }
            } 
        } 
    } 
}
