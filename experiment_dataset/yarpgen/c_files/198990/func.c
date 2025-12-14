/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198990
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
    var_19 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)21] [i_2]))))), (var_7)))) ? ((~(min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_0])), (var_4))))) : (max(((~(2516915646280903820ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1])) ^ (((/* implicit */int) arr_6 [i_2 - 2] [i_1])))))))));
                    var_21 &= min((((unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2])));
                }
                for (unsigned short i_3 = 2; i_3 < 22; i_3 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((short) max((((((/* implicit */int) (_Bool)1)) >> (((18014398509481983ULL) - (18014398509481969ULL))))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_13)))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_6 [i_1] [i_0]))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [i_1])) || (((/* implicit */_Bool) var_17))))) ^ (((((/* implicit */_Bool) 16238260010408978932ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_3 - 1])) : (((/* implicit */int) var_18))))))));
                }
                var_24 = ((/* implicit */unsigned char) arr_10 [i_0]);
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((long long int) 3513135510U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 65535ULL)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))))));
}
