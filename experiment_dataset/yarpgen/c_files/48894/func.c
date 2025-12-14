/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48894
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)23))))) * (((1991175108U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-22800)))))))) ? (min((((/* implicit */unsigned long long int) var_10)), (min((var_11), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_11))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */short) arr_4 [(signed char)4] [i_1]);
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_1]))))) < (((/* implicit */int) (unsigned char)77))))), (min((((/* implicit */int) (unsigned char)11)), (((arr_1 [i_0] [i_3]) + (((/* implicit */int) var_3))))))));
                        arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_10 [6LL] [i_1] [6LL] [i_2] [i_2] [i_3])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)));
                        arr_13 [i_0] [i_0] [(unsigned char)2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))));
                    }
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])) ? (min((((/* implicit */unsigned int) max((((/* implicit */signed char) arr_9 [i_2] [i_2] [i_2] [i_2])), (var_2)))), ((~(var_5))))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (arr_4 [i_0] [i_0]))))));
                }
                var_16 -= ((/* implicit */int) ((signed char) max((((/* implicit */short) (unsigned char)23)), ((short)5449))));
                arr_14 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_8) < (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) - (((/* implicit */int) var_9)))))));
            }
        } 
    } 
}
