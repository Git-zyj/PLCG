/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37623
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((((unsigned int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((/* implicit */unsigned int) max((((int) (_Bool)1)), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || ((_Bool)1)))))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_20 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)0))))));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned char)250), (((/* implicit */unsigned char) (_Bool)1))))) ? (min((arr_3 [i_1] [i_1 - 3]), (arr_3 [i_0] [i_1 - 3]))) : (((/* implicit */int) var_14))));
            var_22 ^= ((/* implicit */long long int) (~(max((((/* implicit */unsigned int) ((_Bool) arr_1 [i_0] [i_1 - 3]))), ((+(arr_2 [i_0] [i_1 + 2])))))));
            var_23 = ((/* implicit */unsigned int) ((short) ((unsigned long long int) var_12)));
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) (short)0);
            var_25 = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (short)-7))))), (arr_1 [i_0] [i_0 - 1]))));
        }
    }
    var_26 |= (((((!(((/* implicit */_Bool) var_4)))) ? (max((var_12), (((/* implicit */int) var_1)))) : (((/* implicit */int) (short)-19)))) == (var_12));
    /* LoopNest 3 */
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_27 += ((/* implicit */unsigned int) (~(((int) ((var_5) / (((/* implicit */int) arr_14 [i_6] [i_5] [i_3] [i_3])))))));
                        var_28 = ((/* implicit */unsigned int) (+(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((unsigned short) arr_14 [i_6] [i_4] [i_5] [i_6])))))));
                        var_29 = ((((/* implicit */_Bool) max((arr_7 [i_3 + 1]), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) 0U))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (arr_15 [i_3] [i_5] [i_6] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3 + 2] [i_4] [i_4] [i_4 - 1]))))) : (((/* implicit */unsigned long long int) ((var_7) ? (((long long int) arr_15 [(_Bool)1] [i_4] [i_5] [i_4])) : (((/* implicit */long long int) 1732858591))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_30 = arr_17 [i_3 - 1] [i_4] [i_5] [i_5] [i_5];
                        var_31 = ((/* implicit */signed char) var_10);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [(unsigned char)15] [13] [i_7] [i_8]))));
                            var_33 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            var_34 = ((/* implicit */signed char) arr_16 [i_8] [i_8] [i_8] [i_8] [i_8]);
                        }
                    }
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_11 [i_3 + 2])), (arr_15 [i_3 + 2] [i_4 - 1] [i_9 + 1] [i_4]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_36 = ((/* implicit */int) arr_7 [i_9]);
                    }
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */int) arr_25 [i_3 - 1] [i_3 + 2] [i_3 + 3] [i_4 - 1])) * (((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 3])))) : (((/* implicit */int) ((unsigned short) 15ULL)))));
                }
            } 
        } 
    } 
}
