/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237571
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
    var_10 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))))));
    var_11 = ((/* implicit */unsigned int) ((short) max(((~(((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) : (((/* implicit */int) var_8))))) >= (arr_2 [i_1] [i_0 + 1] [i_1])));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)25018)) ? (18446744073709551615ULL) : (6ULL)));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_6);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [3ULL] [3ULL] [i_2] [i_2]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_2 [i_0 - 1] [i_0 + 1] [i_1]))))));
                                arr_16 [i_1] [(unsigned short)1] [i_2] [i_1] [i_1] [5LL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_0 - 1] [i_1]), (arr_5 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1 + 3]))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_0 [i_2]))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_1] [5U] = ((/* implicit */unsigned long long int) var_4);
                    var_14 = ((/* implicit */unsigned int) arr_20 [i_0 - 1] [i_1] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_7))));
                                var_16 = ((/* implicit */unsigned short) (+(var_5)));
                                var_17 |= ((/* implicit */unsigned long long int) ((unsigned int) min((9269838713486904747ULL), (3642683964349378106ULL))));
                                arr_26 [i_0] [i_0 + 1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (var_7))))) ? (((((/* implicit */_Bool) arr_24 [i_0] [(unsigned short)5] [i_0] [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) : (var_7)));
                            }
                        } 
                    } 
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_18 = ((unsigned long long int) (+(arr_25 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 3])));
                    arr_29 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (_Bool)0))))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0]))) : (arr_25 [i_0 + 1] [i_0] [i_9] [i_9] [i_9])));
                    var_20 |= ((unsigned long long int) arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned long long int) arr_5 [i_0] [(short)8])))));
                }
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 + 3] [i_0] [i_1])), (var_0))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                arr_32 [i_1] = ((/* implicit */signed char) (+(max((((((/* implicit */int) var_4)) + (((/* implicit */int) var_9)))), (((/* implicit */int) arr_30 [(signed char)3] [(signed char)3] [i_0]))))));
            }
        } 
    } 
    var_23 -= (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((var_3) ^ (((/* implicit */long long int) var_5)))))));
}
