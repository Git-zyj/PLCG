/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38017
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
    for (signed char i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_10 = (+((~(((/* implicit */int) (unsigned short)47331)))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) var_8));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [(signed char)17] [i_0] = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_4)))));
                                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)255))))), (((arr_5 [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)2])))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_16 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)255))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 24; i_6 += 4) 
                        {
                            var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_0 [i_1])))))));
                            arr_19 [i_6] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_1 [(_Bool)1] [i_1])))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((7728036150343096097ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */short) arr_6 [i_7 - 1] [i_0] [i_0] [i_5]);
                            arr_23 [i_7 - 1] [i_7] [i_7 - 1] [(unsigned short)0] [i_0] [i_0 - 1] [i_2] = ((/* implicit */unsigned long long int) arr_13 [i_5] [i_1] [i_5] [i_5]);
                            var_14 = ((/* implicit */_Bool) var_9);
                            arr_24 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_5 [i_0 - 1])) - (arr_18 [i_0 + 1] [i_1] [(unsigned char)6] [i_5] [(unsigned short)22] [(signed char)13]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), ((short)12873)));
                            var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
                        }
                        /* vectorizable */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_8))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_8 - 1] [i_0] [i_8] [i_0] [i_0 + 1]))) : (((unsigned int) 1301439013))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [(unsigned short)22] [i_1] [i_2] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0 - 1])));
                            var_19 = ((/* implicit */signed char) var_3);
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_2 [i_2]))))) ? ((-(((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9 + 1] [i_2] [i_1] [i_0 + 1]))));
                        arr_32 [i_0] = ((/* implicit */unsigned short) max((min((arr_25 [i_0] [i_1] [i_9 + 1] [i_0] [i_0 - 1]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)588)) * (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) arr_21 [i_0] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((/* implicit */long long int) var_4)), (1203974181536867957LL)))))));
                        arr_33 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0] [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_9 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))))));
                    }
                }
                for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_38 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_10 [i_10] [i_1] [i_0 + 1] [i_0] [i_0]))))))) || (((/* implicit */_Bool) (signed char)-127))));
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [(signed char)13] [i_10] [i_10] [i_0 - 1] [i_10])) ? (arr_15 [i_1]) : (arr_37 [i_0] [i_1] [(unsigned char)8] [i_1])))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((arr_27 [i_0] [(signed char)2] [i_10] [i_10] [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (arr_37 [i_1] [i_1] [i_1] [i_1]))))))))))));
                }
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((16521761367209056927ULL), (((/* implicit */unsigned long long int) (unsigned char)1)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)11980))))) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_4)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_8))));
}
