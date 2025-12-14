/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231173
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
    var_11 = min((((((((/* implicit */_Bool) 2969294522159998828ULL)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (var_5)))) : (((((/* implicit */_Bool) var_6)) ? (17466973973209773430ULL) : (((/* implicit */unsigned long long int) var_6)))))), (((min((6304838022771597813ULL), (((/* implicit */unsigned long long int) var_5)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-106)) && (((/* implicit */_Bool) (signed char)-127)))))))));
    var_12 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) min((8626542781580391523ULL), (((/* implicit */unsigned long long int) var_6))))) || (((/* implicit */_Bool) (+(var_6))))))), (((((/* implicit */_Bool) var_4)) ? (min((-571022453), (var_7))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)109)) == (((/* implicit */int) (unsigned char)161)))))))));
    var_13 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_2] [(signed char)2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_0] [(unsigned char)20] [i_2] [i_3] [i_3 - 2])), (arr_6 [i_3] [i_3 - 2] [i_3 - 1]))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((short) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_0])))))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                var_16 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (var_6))))), (min((max((arr_7 [(unsigned short)6] [i_1]), (((/* implicit */long long int) (short)-17744)))), (((/* implicit */long long int) min((arr_8 [i_1] [i_2] [i_1]), ((unsigned char)253))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_3 - 2] [i_4] [i_3 + 1] = ((/* implicit */signed char) ((long long int) var_10));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_4)), ((unsigned char)255)));
                                arr_16 [i_1] [i_1] [i_0] [i_0] [i_4] [i_0] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_10)))) % (((((/* implicit */_Bool) ((var_3) >> (((arr_13 [i_0] [i_1]) - (297802408U)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) 8U)))) : (((/* implicit */long long int) ((((var_6) + (2147483647))) >> (((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [15LL])))))))));
                                var_17 ^= min((min((((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_4))))), (arr_5 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_3 - 2] [i_2] [i_2])) ? (var_7) : (((/* implicit */int) arr_9 [i_4] [i_3] [i_3 - 2] [i_3 - 2] [i_0]))))));
                            }
                            for (long long int i_5 = 1; i_5 < 23; i_5 += 1) 
                            {
                                var_18 -= ((/* implicit */unsigned long long int) ((_Bool) 8191));
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) -906012809)))))))));
                            }
                            arr_20 [i_1] = ((/* implicit */unsigned char) (!((_Bool)1)));
                        }
                    } 
                } 
            }
        } 
    } 
}
