/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198030
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_11 [7] [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 2] [i_3 + 1] [(unsigned char)1] [i_3] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 2] [0LL] [i_0] [i_3] [i_1]))) : (var_13)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_3 - 1] [i_3] [(_Bool)1] [i_3] [i_2])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_3 + 1] [i_2] [i_3] [i_3])))) : ((+(((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_2] [i_2]))))));
                        arr_12 [(signed char)0] = ((/* implicit */short) ((((((/* implicit */_Bool) -7651760181085950185LL)) || (((/* implicit */_Bool) (short)20173)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_3 + 1] [10LL] [10LL] [10LL] [i_0])) ^ (((/* implicit */int) arr_9 [i_3 - 2] [i_3] [(unsigned char)17] [(unsigned char)17] [i_3 + 1]))))) : (var_1)));
                        arr_13 [(short)6] [i_1] [(short)10] [i_1] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) 108503983723116005ULL)) ? (((/* implicit */int) (short)-30154)) : (103571209))), (arr_7 [i_0])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_8)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))))) : (max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_10 [i_0]), (((/* implicit */unsigned char) var_11)))))) | (((var_1) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)20269)) | (((/* implicit */int) var_6)))))))));
            /* LoopSeq 3 */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned short) var_13);
                var_16 ^= ((/* implicit */int) var_7);
                arr_17 [i_0] [i_0] [i_0] = var_9;
            }
            for (signed char i_5 = 2; i_5 < 16; i_5 += 3) /* same iter space */
            {
                arr_21 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (((((-(var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_1))));
                    /* LoopSeq 3 */
                    for (int i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */int) var_4);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) var_11))));
                        arr_28 [i_6] = ((/* implicit */long long int) max((((arr_26 [i_5 + 1] [i_7 + 1] [i_6] [i_7 + 1] [i_5 + 1]) < (((/* implicit */int) var_11)))), ((!(((/* implicit */_Bool) max((arr_19 [i_0] [i_1] [8LL] [i_7 + 1]), (var_1))))))));
                    }
                    for (unsigned short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min((min((var_13), (((/* implicit */unsigned long long int) ((unsigned char) arr_24 [(unsigned char)14] [i_1] [i_5 - 2] [2ULL] [i_0] [i_6]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (((((/* implicit */unsigned long long int) 2471910922U)) ^ (var_0))))))))));
                        var_21 = ((/* implicit */short) var_10);
                    }
                    for (int i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        arr_35 [i_0] [i_1] [15LL] [i_5 - 1] [i_6] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((-1679463383037885332LL), (((((/* implicit */_Bool) arr_29 [3U] [i_1] [i_1] [i_1] [i_9])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-13441)))))))) - (var_2)));
                        var_22 ^= ((/* implicit */long long int) min((max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_12)) : (arr_24 [i_1] [i_1] [8ULL] [i_6] [i_0] [i_9 + 1])))), ((+(4237177391U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))));
                    }
                    arr_36 [i_0] [i_0] [i_0] [18LL] [i_6] = (!(((/* implicit */_Bool) var_12)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    arr_39 [(unsigned char)15] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-22964)) : (((/* implicit */int) var_12))))) : (((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    arr_40 [i_0] |= ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_25 [i_1] [i_5 + 1] [i_5 + 1] [i_5] [i_0] [i_5])))), (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_25 [i_0] [i_5 - 2] [i_5] [i_10] [i_0] [i_0]))))));
                }
            }
            for (signed char i_11 = 2; i_11 < 16; i_11 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) (signed char)-106);
                var_24 &= (((((!(((/* implicit */_Bool) (short)30164)))) ? ((-(((/* implicit */int) (short)-30155)))) : (((/* implicit */int) (short)30180)))) % (((/* implicit */int) arr_10 [(unsigned short)15])));
                var_25 &= ((/* implicit */signed char) ((unsigned char) var_2));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    for (unsigned char i_13 = 1; i_13 < 17; i_13 += 4) 
                    {
                        {
                            arr_51 [(unsigned char)14] [i_11] [i_11] [(_Bool)0] [i_13 + 1] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_19 [i_11 + 2] [i_13 + 2] [i_13 - 1] [i_13 - 1]), (((/* implicit */long long int) (_Bool)1))))), (min((var_13), (((/* implicit */unsigned long long int) var_5))))));
                            arr_52 [i_11] [i_1] [i_11] [i_12] [i_13] = ((/* implicit */long long int) min((((var_0) ^ (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_32 [i_13] [i_13] [i_13 - 1] [i_13] [(signed char)4] [(signed char)4] [i_13 - 1]))));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_8))));
            arr_53 [i_0] = ((/* implicit */signed char) var_12);
        }
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (var_2)));
        arr_54 [i_0] &= ((/* implicit */unsigned int) var_4);
    }
    var_28 = ((/* implicit */int) min((var_28), (((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_3))))))) - (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_5))))))));
    var_29 = var_0;
}
