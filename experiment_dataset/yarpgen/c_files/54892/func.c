/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54892
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
    var_16 = ((/* implicit */long long int) ((unsigned short) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (441439137651451995ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((unsigned char) arr_4 [0ULL] [0ULL] [i_0]);
                var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [(signed char)3]), ((signed char)116)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1733043218)) ? (((/* implicit */int) var_1)) : (1733043187)))) : ((+(var_8))))))));
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    arr_10 [(signed char)13] [(signed char)13] [i_0] = ((/* implicit */long long int) var_5);
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_0))));
                }
                for (long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    arr_13 [i_0] [(signed char)8] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_9))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) 1860573602000803520LL)))))));
                    arr_14 [(signed char)7] [i_0] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_0 [i_0]))))) ? (min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) var_4)) & (var_13))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1733043202)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)24926))))) : (var_15)))));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((1733043194) | (((/* implicit */int) (signed char)-74))));
                }
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_20 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)87)))) % (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9220868762772239082LL)), (arr_7 [i_0] [3ULL] [i_1] [i_0])))) || (((/* implicit */_Bool) max(((short)31758), (arr_2 [i_1])))))))));
                    var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_7 [i_1] [i_1] [(signed char)11] [i_1]) : (arr_6 [i_0] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    arr_21 [(signed char)2] = ((/* implicit */int) 3659479215U);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) 0ULL);
                        var_23 = ((/* implicit */unsigned char) (signed char)49);
                        var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)45285)) < (((/* implicit */int) ((((/* implicit */_Bool) (short)-14473)) || (((/* implicit */_Bool) var_4)))))));
                        arr_24 [i_6] [(short)0] [i_0] [i_0] [10U] [(short)0] &= ((/* implicit */unsigned long long int) ((signed char) (+(arr_0 [i_6]))));
                        arr_25 [i_6] [(unsigned short)4] [(unsigned short)4] [i_6] = ((/* implicit */long long int) ((signed char) var_15));
                    }
                    arr_26 [2ULL] [2ULL] [2ULL] [2ULL] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned long long int) var_11)) : (3077282853935016923ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_14))))))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) (unsigned short)17326);
                                var_26 = ((/* implicit */signed char) 18446744073709551615ULL);
                            }
                        } 
                    } 
                }
                arr_33 [i_0] = ((/* implicit */unsigned int) max(((-(18442240474082181120ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)27091)))))));
            }
        } 
    } 
}
