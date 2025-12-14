/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243224
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned char) arr_0 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (short)8132))));
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (3096330757U)));
                        }
                    } 
                } 
                arr_12 [8LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [16LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [(unsigned short)4] [(_Bool)1]))) : (1073741824U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_0]))))))) : (((arr_10 [i_1 + 2] [(signed char)2] [i_0] [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)8] [(unsigned short)4] [i_0]))) : (var_4)))));
                var_13 *= ((/* implicit */unsigned int) (signed char)35);
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_14 = ((/* implicit */_Bool) 2U);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (arr_4 [i_4] [i_0])));
                    var_16 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0]);
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_14 [i_4] [i_0] [i_0] [i_0]))));
                }
                for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (arr_9 [i_0] [i_0]) : (((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned int) ((arr_9 [i_0 - 1] [i_0]) & (((/* implicit */int) arr_3 [i_0] [8U]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))))), (2097151U)))));
                    arr_19 [6LL] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_13 [i_0 + 2] [(unsigned char)4] [i_5] [i_0 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-8133)) : (((/* implicit */int) arr_10 [4LL] [8ULL] [i_1] [8ULL] [i_0 + 2]))))) ? (var_2) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_0] [0] [(unsigned char)0] [i_0] [i_0 + 2])), (273596677U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) arr_15 [i_5] [12LL] [12LL] [i_0])))) != ((~(var_7)))))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((int) var_8)) << (((max((var_4), (((/* implicit */unsigned int) var_9)))) - (576719043U)))))) / (((max((((/* implicit */unsigned long long int) var_8)), (var_2))) & (((/* implicit */unsigned long long int) var_7))))));
}
