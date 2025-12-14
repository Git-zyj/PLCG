/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196439
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 8948220420376978814LL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) var_0)) : (var_2)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) -8948220420376978805LL)) ? (-8948220420376978815LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8948220420376978815LL)) ? (-8948220420376978815LL) : (((/* implicit */long long int) var_2))));
                        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_3] [(_Bool)1] [i_3] [i_2] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_3))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_11 [(signed char)2] [i_2] [i_2] [(unsigned char)4] |= (((_Bool)1) ? (-8948220420376978815LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        var_14 |= ((/* implicit */unsigned long long int) ((var_6) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_8 [i_5 + 1] [i_2] [i_2] [i_1 - 1]))));
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned long long int) -8948220420376978815LL)) : (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 + 1] [i_1 + 1] [i_2]))) : (((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-8948220420376978815LL)))));
                        var_16 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */unsigned long long int) var_2)) : (((var_5) ? (arr_10 [i_5] [i_2] [i_1] [(unsigned char)12] [i_1] [i_0]) : (((/* implicit */unsigned long long int) -8948220420376978794LL))))));
                    }
                    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) 8948220420376978815LL))));
                    arr_14 [i_2] [(_Bool)1] [i_2] &= ((/* implicit */unsigned short) ((var_5) ? (arr_10 [i_1] [i_1 - 1] [(unsigned char)1] [(unsigned char)1] [i_1] [i_0]) : (var_1)));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_16 [i_1] [i_1] [13ULL])))) ? (arr_3 [i_1 - 1] [i_1]) : (((((/* implicit */_Bool) (unsigned char)36)) ? (8948220420376978815LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) arr_12 [i_1])) ? (var_2) : (((/* implicit */int) (unsigned char)236)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) 2147483638)) : (10U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (-220812169) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1176676066U)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)96))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)0)))))));
                    arr_17 [i_1] [(unsigned char)8] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8948220420376978819LL)))) ? (((((/* implicit */_Bool) var_0)) ? (4733578820992229097ULL) : (var_8))) : (((((/* implicit */_Bool) arr_9 [i_6 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1 - 1] [17LL] [i_6] [i_6]))) : (arr_9 [i_0] [i_6 + 1])))));
                }
                arr_18 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1487573406)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 8948220420376978831LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [15U] [9] [i_0] [i_0] [4ULL] [i_0])))))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [i_1 + 1] [18] [i_1] [i_1 - 1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (var_2) : (((/* implicit */int) var_6)))))));
                var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (arr_9 [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)0] [i_0] [0ULL])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [9LL] [3ULL])))))) : (((arr_7 [i_0] [i_0] [7] [i_1] [i_1 + 1] [i_1]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))))))) : (((((/* implicit */_Bool) var_4)) ? (12101847285236656651ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            }
        } 
    } 
    var_21 -= var_9;
    var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) var_5))))));
}
