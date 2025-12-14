/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205149
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
    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-5644826683849473633LL) : (((/* implicit */long long int) 64356391U))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((1833497061U) >> (((var_8) - (1380560340U)))))) <= (((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)36))) : (-6674536966217877611LL)))))) : (((/* implicit */int) (!(max((var_2), (var_3))))))));
    var_13 *= ((/* implicit */_Bool) (short)7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_14 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_0 [(unsigned char)15]))) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) + (((/* implicit */int) (short)-4)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [(signed char)8] [i_2])) >= (1113727888))))));
                        arr_10 [i_0] [i_3] = ((/* implicit */int) (signed char)63);
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) arr_3 [(signed char)16] [i_1] [(_Bool)1]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_3 - 1]))));
                        arr_11 [(signed char)5] [(_Bool)1] [i_3] [i_3] [(short)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [10LL] [i_1] [i_3])) : (((/* implicit */int) var_7)))) >= (((/* implicit */int) arr_7 [11] [(signed char)16] [6U] [(signed char)13] [i_3 - 1] [i_1]))));
                    }
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)36)))), ((((_Bool)0) ? (-1113727889) : (((/* implicit */int) (unsigned short)25075))))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)230)))) : (((((/* implicit */_Bool) (unsigned char)217)) ? (arr_9 [i_2] [3U] [15LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                }
            } 
        } 
        arr_12 [i_0] = (+(max((max((9886343766910674083ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0])))), (((/* implicit */unsigned long long int) -1113727889)))));
    }
    var_17 = ((/* implicit */unsigned short) (((-(var_5))) != (((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)1)))))))));
}
