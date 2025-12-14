/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23537
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
    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) ((int) arr_1 [i_0 + 2]))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))));
        var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (min((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [8U])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)10])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -550320733))))))));
    }
    var_22 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) var_18)))), (((var_17) << (((((/* implicit */int) var_7)) - (76)))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9691))) : (var_15)))))));
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_17 [i_2] [i_2] [i_2] [(unsigned char)3] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(2U)))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [7U] [i_4])))))));
                            arr_18 [i_1] [i_1] [i_3] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4] [i_4] [(short)2] [i_4])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16)))))));
                        }
                        var_24 = ((/* implicit */int) arr_5 [i_1]);
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_11 [i_1]), (((/* implicit */unsigned short) var_14))))) ? (((/* implicit */int) (short)9688)) : (((/* implicit */int) arr_11 [i_3])))) - (((/* implicit */int) (((+(var_15))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)9691)))))))));
                        arr_21 [i_1] [i_1] [i_2] [i_3] [i_6] [i_6] = ((/* implicit */int) arr_16 [i_6]);
                        arr_22 [i_1] = ((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) (unsigned char)111))))) & (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_3] [i_6])) ? (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_8 [i_1] [i_1])))) : (arr_20 [i_7] [i_7] [i_7 - 1])))) ? (((/* implicit */int) arr_11 [i_7])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)9680)), (arr_15 [i_1] [i_1] [i_1] [i_6] [i_7] [i_1])))) ? ((~(arr_24 [(unsigned char)8] [i_2] [i_2] [i_3] [i_6] [i_7 - 1]))) : (arr_24 [i_1] [i_7 - 1] [i_3] [(unsigned short)10] [i_2] [i_6])))));
                            var_26 -= ((/* implicit */unsigned char) min(((+(arr_15 [i_7 - 1] [8] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]))), (((/* implicit */unsigned long long int) ((signed char) arr_15 [i_7 - 1] [4ULL] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])))));
                            arr_26 [i_6] [i_6] [i_3] [i_6] [6ULL] [i_6] = ((/* implicit */short) max((max(((~(arr_24 [i_1] [i_1] [i_1] [(unsigned char)5] [i_1] [i_1]))), (((((/* implicit */_Bool) arr_19 [i_7])) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1])))))), (1159437782)));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_31 [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(arr_3 [i_9]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1])))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_12 [2LL] [i_2])) >> (((((/* implicit */int) arr_7 [i_3] [i_3])) - (14143))))) - (arr_29 [i_8] [i_8] [i_8] [6] [(signed char)1])))) : (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1])) ? (((long long int) (short)-9675)) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                                arr_32 [i_1] = ((((/* implicit */_Bool) (((+(arr_15 [i_1] [i_1] [i_1] [i_3] [i_8] [i_1]))) - (((/* implicit */unsigned long long int) (+(arr_10 [i_1]))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_23 [i_1] [i_1 - 1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1]))))));
                                arr_33 [i_1 - 1] [i_1] [(unsigned short)9] = ((/* implicit */long long int) max(((+(((/* implicit */int) ((short) arr_14 [(short)5] [i_8] [i_8]))))), ((+(arr_6 [i_1 - 1])))));
                            }
                        } 
                    } 
                    arr_34 [i_1 - 1] [(unsigned short)0] = ((/* implicit */int) (+(((arr_3 [i_1 - 1]) >> (((arr_3 [i_1 - 1]) - (2596267415U)))))));
                    arr_35 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)32760)))), (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_9)))))) + ((~(var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 2147483647))))), ((signed char)-43)))))));
                    var_27 = ((/* implicit */int) arr_19 [i_2]);
                }
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_16 [i_1 - 1])) : (((/* implicit */int) arr_16 [i_1 - 1])))) : ((~(((/* implicit */int) arr_16 [i_1 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (-((-(min((arr_28 [i_1] [i_1] [i_1] [(short)5] [i_10] [i_1]), (((/* implicit */long long int) var_2)))))))))));
                    arr_38 [i_1] [i_1] [i_1] = (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)32772)) ? (((/* implicit */int) (unsigned short)32772)) : (arr_6 [i_1])))) != (arr_37 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))));
                }
                arr_39 [i_1] = ((/* implicit */int) ((signed char) ((unsigned long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_19 [i_1]))))));
                var_30 += ((/* implicit */unsigned char) ((signed char) var_7));
            }
        } 
    } 
}
