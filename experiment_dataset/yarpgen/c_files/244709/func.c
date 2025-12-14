/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244709
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
    var_10 ^= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) 8773688307057007819ULL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) (unsigned char)236)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_11 -= (-(max((((/* implicit */unsigned long long int) max((arr_0 [i_0] [6]), (((/* implicit */int) arr_6 [i_1] [4U]))))), (((((/* implicit */_Bool) (unsigned char)246)) ? (18446744073709551615ULL) : (457642397783449707ULL))))));
                    arr_9 [i_0] [(short)9] [i_2 + 3] [i_2 - 1] = ((/* implicit */short) arr_2 [i_0]);
                    var_12 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) ((_Bool) arr_5 [i_2 + 1] [i_1]))) : (((/* implicit */int) max((var_6), (var_3))))))), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [10LL])), (arr_6 [(unsigned char)7] [(short)7]))))) / (((long long int) arr_1 [(unsigned short)3] [6ULL]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((0LL), (((/* implicit */long long int) (unsigned char)246)))), (((/* implicit */long long int) ((int) var_4)))))) || (((/* implicit */_Bool) (+(arr_7 [(unsigned char)8] [(unsigned char)8] [(signed char)2]))))));
                                var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [(unsigned short)5]))))) : (((((/* implicit */_Bool) arr_13 [(unsigned short)6] [(unsigned short)6] [i_2 + 2] [i_2 + 2] [i_3] [i_2 + 2] [i_2 + 2])) ? (var_1) : (((/* implicit */long long int) arr_7 [i_1] [i_2 + 3] [i_1]))))))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (var_4)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (9098780888890378493ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 + 3] [i_2 - 1])))))) ? (((((/* implicit */_Bool) arr_7 [(unsigned short)1] [9] [i_2])) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) min((arr_11 [i_0] [i_0] [7LL] [i_3]), (((/* implicit */short) var_7))))))) : (((/* implicit */int) ((short) arr_10 [i_2 + 1] [i_2 + 3]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
