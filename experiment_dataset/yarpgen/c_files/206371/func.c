/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206371
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1465955545)) ? (((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)89)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)29)) + (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_0)) << (((var_5) - (1927266085))))) : (((/* implicit */int) var_4)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 - 1] [i_0] = arr_2 [i_0];
        var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */_Bool) ((max((var_1), (var_1))) | (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_10) : (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) var_1)))))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1 + 1]))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((var_1) + (((/* implicit */int) (signed char)-93))))));
            var_18 = ((/* implicit */unsigned char) min((((arr_8 [i_2 + 2] [i_1 + 3]) - (arr_8 [i_2 + 2] [i_1 + 1]))), (((/* implicit */unsigned int) ((var_1) + (((/* implicit */int) var_6)))))));
        }
        for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            var_19 *= ((/* implicit */unsigned int) ((((max((arr_11 [i_1] [i_1] [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)1)))) < (((arr_7 [(unsigned char)2] [i_3] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3 - 3] [i_1 - 1])) * (((/* implicit */int) arr_0 [i_3 - 3] [i_1 + 2]))))) : (((((((/* implicit */_Bool) -1LL)) ? (9223372036854775807LL) : (var_3))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1 + 1])))))));
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_10 [i_1] [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7))))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned int i_6 = 1; i_6 < 13; i_6 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) / (var_3)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_17 [i_1] [i_3] [i_4] [(unsigned char)1] [i_3])) ? (((/* implicit */int) var_4)) : (-1))))));
                            var_22 = ((/* implicit */unsigned char) arr_13 [i_3] [i_3] [(short)6] [i_6]);
                            arr_19 [i_1 + 3] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((arr_13 [i_7] [i_7] [i_7] [i_7]) | (((/* implicit */int) (unsigned char)118)))) + (2147483647))) << (((arr_7 [i_1] [i_3 - 1] [i_4]) - (915475081U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_1 + 2]) : (var_11)))))) : (((((/* implicit */unsigned long long int) arr_8 [i_1 + 2] [i_3 - 1])) / (max((((/* implicit */unsigned long long int) arr_1 [i_4])), (0ULL)))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ? (((unsigned int) (+(arr_20 [i_3] [i_3])))) : (((/* implicit */unsigned int) max((314766120), ((~(var_1))))))));
                    arr_23 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [(short)10] = ((/* implicit */short) -314766143);
                }
                for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_27 [i_1 - 1] [i_3] [(short)13] [1U] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((int) arr_10 [i_1] [i_1 + 3]))) - (((((/* implicit */_Bool) arr_7 [i_1] [(unsigned char)8] [13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_7 [i_1] [i_3] [i_3]))))) << ((((-(((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) arr_8 [i_1] [i_1 - 1])))))) - (6886648064948653675LL)))));
                    arr_28 [i_1] [i_1] [i_4] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) max((-1760099052), (-1760099052)))) & (min((4160793205U), (((/* implicit */unsigned int) var_11))))))) ? (((((/* implicit */int) ((_Bool) (short)17799))) ^ ((~(var_5))))) : (((/* implicit */int) var_9)));
                    arr_29 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (signed char)85)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 364571166U))))) ? ((-(((((/* implicit */_Bool) arr_14 [i_1] [i_1] [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_25 [i_4] [i_3] [8LL] [i_8]))))) : (((/* implicit */unsigned long long int) var_2))));
                    arr_30 [i_1] [(unsigned char)11] [i_4] [i_1] = -15955822;
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) max((arr_2 [i_3 - 1]), (arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_3]))) : (((unsigned int) arr_5 [i_3 - 1]))));
                }
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                var_26 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) arr_16 [i_1] [i_1])))));
                var_27 = ((/* implicit */unsigned int) ((int) (short)20451));
                arr_34 [i_1 - 1] = ((/* implicit */_Bool) var_4);
                arr_35 [i_1] [i_1] [(unsigned char)8] [i_9] = ((/* implicit */_Bool) arr_11 [i_1] [i_3 - 2] [i_3 - 1]);
            }
            var_28 = ((/* implicit */unsigned int) arr_14 [i_1] [i_1 + 2] [i_3] [i_3 - 3]);
        }
        arr_36 [i_1] [i_1] = ((/* implicit */_Bool) (+(max((((unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_1])), (((/* implicit */unsigned long long int) (short)-20448))))));
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_7))));
}
