/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243503
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */unsigned int) min((((unsigned long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (+(arr_1 [13U])))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((short) (((+(((/* implicit */int) arr_0 [i_0] [i_1])))) * (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    var_19 *= ((/* implicit */short) ((unsigned char) arr_5 [i_2 - 1] [i_2 - 1] [(short)5] [i_2 - 1]));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [(unsigned short)7] [i_2 + 1] [i_1] [i_0])) * (((/* implicit */int) var_0))));
                    var_21 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_2 - 1] [(_Bool)1] [i_2 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_13)))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((arr_7 [i_3 + 2] [i_0] [i_1] [(short)20] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3 + 3])) / (((/* implicit */int) var_9)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [i_3 + 1] [i_2 + 1])) : (((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)135)))))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [(short)19] [i_2 - 1] [i_4] [i_3 - 1])))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [(short)20] [i_1])) & (((/* implicit */int) arr_0 [3ULL] [i_1])))))));
                        }
                    }
                }
                for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_4))));
                    var_29 |= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) -746698322)), (1810359757529501472LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((short) arr_9 [i_7 - 1] [(unsigned char)4] [i_7 + 1] [i_7 - 2] [i_7 - 1]))), (min((((long long int) -8426462958334228091LL)), (((/* implicit */long long int) ((unsigned short) arr_2 [7LL]))))))))));
                                var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [6ULL] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) -2761274699695339522LL)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [6] [11ULL] [i_7 + 1] [i_8])))))) + ((-(arr_15 [i_0] [i_6] [i_7 + 1] [i_8])))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */int) (((!(((/* implicit */_Bool) 1285698557U)))) && (((/* implicit */_Bool) arr_10 [i_1]))))) <= (((/* implicit */int) ((_Bool) min((((/* implicit */int) arr_0 [11U] [(short)11])), (arr_19 [i_6] [3ULL] [(short)9] [i_0]))))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) 
    {
        var_33 *= ((/* implicit */unsigned short) ((unsigned char) arr_1 [(short)17]));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) 2761274699695339522LL)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (-1) : (((/* implicit */int) var_3))))), (((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))))));
                    var_35 ^= ((/* implicit */long long int) arr_16 [i_9 - 1] [(unsigned short)8] [i_11]);
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((arr_15 [(short)12] [4LL] [2ULL] [i_9 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [9ULL] [i_9 + 1] [(short)5])))))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) var_8))))) | (min((-2761274699695339507LL), (((/* implicit */long long int) (unsigned short)37225)))))))))));
        arr_31 [8U] &= ((/* implicit */long long int) ((signed char) ((unsigned short) arr_10 [i_9 - 1])));
    }
    var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_1)));
}
