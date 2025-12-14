/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41516
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
    var_19 = ((/* implicit */unsigned char) ((short) (unsigned short)13));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)17] [i_1]))));
                    arr_7 [i_1] [(short)10] [(unsigned char)2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_2 + 1] [i_1])), (min((((/* implicit */int) ((unsigned char) var_7))), (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                    arr_8 [i_0] [8U] [i_1] = ((/* implicit */short) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))), (9001222700675619235LL)))));
                    var_21 = ((/* implicit */unsigned int) var_9);
                }
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    arr_11 [i_0] |= ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_1] [(short)18] [i_3 + 2] [i_0]) : (((/* implicit */int) (short)-1521)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_3] [i_3 + 1] [i_5] [i_5]))));
                            var_24 = ((/* implicit */_Bool) var_17);
                            var_25 = ((/* implicit */short) arr_15 [i_0] [i_1] [i_3 + 2]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            arr_21 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) > (arr_10 [i_0] [i_1] [i_3 + 2] [i_1])));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) arr_5 [i_4] [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-22227)) && (((/* implicit */_Bool) var_6)))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_3 + 2] [i_3 + 2] [i_3] [i_1]))));
                            var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_0] [(signed char)1] [i_0] [i_4] [i_4] [(unsigned short)10])) && (arr_15 [i_0] [i_0] [i_4]))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 22; i_8 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) ((short) var_9));
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((short) var_7));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_9] [(unsigned char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) ^ (var_3))) : (var_1)));
                            arr_32 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (unsigned short)30223);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_9] [i_1])) : (((/* implicit */int) var_5))));
                            arr_33 [i_1] [i_1] [i_3] [i_4] [i_9] = ((/* implicit */short) var_0);
                        }
                        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_1] [i_0] [(signed char)22] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11273132475067055914ULL)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7936)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_10 + 3] [i_3 + 3] [i_3 + 1] [i_1]))) : (var_11));
                            arr_37 [i_4] [i_1] [i_3 + 2] [i_4] [i_10 + 2] [i_4] = ((/* implicit */long long int) 640201856U);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_4])) : (((/* implicit */int) var_2))));
                        }
                    }
                    var_32 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-22227)) : (var_17))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (_Bool)0)))))))), (max((((var_11) * (arr_4 [i_1]))), (((/* implicit */unsigned long long int) 268431360LL))))));
                    var_33 = ((/* implicit */_Bool) max((min((arr_27 [i_3 + 1] [i_1] [6U] [(unsigned char)14] [6LL]), (((/* implicit */unsigned int) arr_22 [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_22 [i_3 + 3] [i_3 + 2] [i_3] [i_3 - 1])))))));
                }
                var_34 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) var_17)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(short)18]))))) <= (((/* implicit */unsigned int) ((int) arr_26 [i_0] [i_0] [i_0] [i_0] [(short)12])))));
                var_35 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22514)) ? (((/* implicit */int) (short)-29241)) : (((/* implicit */int) arr_16 [(_Bool)1]))))) ? (16887700U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_36 |= (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_17)))) : (max((((/* implicit */unsigned long long int) var_7)), (var_15))))));
    var_37 = ((/* implicit */long long int) var_10);
    var_38 ^= ((/* implicit */unsigned long long int) var_12);
}
