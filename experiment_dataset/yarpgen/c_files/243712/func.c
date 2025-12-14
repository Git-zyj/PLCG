/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243712
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
    var_10 = ((/* implicit */short) var_2);
    var_11 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_12 = ((/* implicit */long long int) arr_5 [i_0] [i_1 + 1] [i_2]);
                    arr_7 [i_2] [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_0 + 2]), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (var_8)));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((var_0) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 3] [i_0] [i_0]))) : (max((var_5), (((/* implicit */long long int) (unsigned short)0)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_13 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4] [i_1])) ? (arr_4 [(unsigned char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65527)))))))) ? (max((max((((/* implicit */long long int) arr_3 [i_0])), (-6202457430516962085LL))), (arr_9 [i_0] [0LL] [i_2] [i_1 - 1] [i_3] [0LL]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))))));
                                var_14 *= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) 1007727987479555260ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (arr_6 [i_0]))) == (((-6202457430516962085LL) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [13ULL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2])))))))))));
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0])) + (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_8))))));
                            }
                        } 
                    } 
                }
                arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
        } 
    } 
}
