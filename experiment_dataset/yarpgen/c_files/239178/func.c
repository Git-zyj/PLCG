/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239178
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned short) ((var_3) && ((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [(short)8]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [(short)2] [i_2])) & (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (signed char)-6)) % (((/* implicit */int) (unsigned char)122)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1] [i_1])) ? (arr_5 [i_3] [i_3 - 2] [i_3]) : (arr_5 [i_2] [i_3 - 1] [i_1])))));
                                var_20 ^= ((/* implicit */long long int) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1 + 1])))));
                                var_21 = ((/* implicit */int) (-(var_10)));
                                var_22 = ((/* implicit */short) ((((((/* implicit */int) arr_10 [(signed char)2] [i_0] [i_2] [9ULL])) << (((/* implicit */int) var_11)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_1] [i_3 - 1])))))));
                                var_23 = ((/* implicit */short) arr_12 [i_0] [i_0] [i_2] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -38832842)) && (((/* implicit */_Bool) (short)1902)))) ? (var_5) : (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_7) || (((/* implicit */_Bool) (short)-23289)))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15LL)) && (((/* implicit */_Bool) var_1))))), (var_12)))));
    var_25 = ((/* implicit */unsigned long long int) var_3);
    var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (((var_3) ? (((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
}
