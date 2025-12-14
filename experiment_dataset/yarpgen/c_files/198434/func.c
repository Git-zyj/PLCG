/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198434
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) var_11);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)230)) ? (-1LL) : (((/* implicit */long long int) 2197518779U))))) ? (((((/* implicit */_Bool) arr_11 [i_1 - 3])) ? (min((((/* implicit */unsigned long long int) 2097448544U)), (25ULL))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_12 [(short)3] [i_3] [i_1] [i_0]))), (var_7)))))));
                                arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_2] [i_0 + 1] [i_4 - 2] = ((/* implicit */unsigned short) arr_0 [(unsigned short)12]);
                                var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3]))))) ? (((((/* implicit */_Bool) arr_15 [i_4] [i_3] [i_2] [i_1] [9])) ? (arr_5 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [i_1] [(_Bool)1] [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (var_3)))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) ? (max((((/* implicit */unsigned long long int) var_8)), (var_2))) : (min((var_3), (((/* implicit */unsigned long long int) var_6))))))) ? (arr_14 [i_0 + 2] [i_1] [(unsigned short)6] [i_0 + 2] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_8 [i_0 + 1] [i_0 + 1])), (var_7)))) ? (((unsigned int) arr_15 [i_0] [i_0] [1U] [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_2] [i_1] [i_2]) : (((/* implicit */int) var_1))))))))));
                    arr_17 [i_0 + 1] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((int) var_4));
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_7))))) : (((((/* implicit */long long int) ((unsigned int) (unsigned char)10))) - (var_6)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_21 [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0 + 2] [i_0 - 1]) : (arr_5 [i_0 - 1] [i_0 + 1])))));
            arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(_Bool)1] [i_0 + 2] [i_5] [i_5])))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [i_0 + 2] [i_5])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_0)) ? (arr_1 [11]) : (arr_1 [i_0 - 1])))));
        }
        arr_23 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) -4LL)) : ((+(((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */unsigned long long int) 3188758652483202339LL)) : (18014398509481968ULL)))))));
    }
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_9))));
        arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_6] [9ULL] [9ULL] [i_6])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((2097448516U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7439)))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])) : (((/* implicit */int) var_12))))) + (((4907554196208275639LL) - (((/* implicit */long long int) -2147483618))))))));
        var_20 ^= ((/* implicit */long long int) arr_10 [i_6 - 1] [i_6 - 1] [i_6 + 2]);
    }
    var_21 += ((/* implicit */int) var_9);
    var_22 = ((/* implicit */unsigned char) min(((unsigned short)55934), (((/* implicit */unsigned short) (unsigned char)10))));
    var_23 -= ((/* implicit */_Bool) var_0);
}
