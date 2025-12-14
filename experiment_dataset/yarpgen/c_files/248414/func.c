/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248414
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) (+(((/* implicit */int) max((arr_3 [i_0 - 2] [i_1 + 1]), (arr_3 [i_0 + 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_1] |= ((/* implicit */unsigned char) var_4);
                                var_17 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-4096)))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_3] [i_1] [i_1])) : (((/* implicit */int) min((arr_12 [i_0] [i_1 + 2] [i_2] [i_0] [i_4]), (((/* implicit */short) (signed char)119))))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_3])) : (((/* implicit */int) var_11)))) == (((/* implicit */int) min((((/* implicit */unsigned short) (short)-7554)), (var_6)))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] |= arr_10 [i_1] [i_1 - 2] [i_2] [i_0];
                                arr_18 [i_2] = ((/* implicit */unsigned char) min(((-(4125533030U))), (((/* implicit */unsigned int) 708360650))));
                            }
                        } 
                    } 
                    var_18 |= ((/* implicit */unsigned long long int) ((unsigned char) var_13));
                }
            } 
        } 
    } 
    var_19 = max((max((((/* implicit */int) max((var_12), ((short)4345)))), ((-(((/* implicit */int) var_15)))))), (((/* implicit */int) (short)4106)));
    var_20 = ((/* implicit */long long int) max((var_20), (((((/* implicit */long long int) (+((-(((/* implicit */int) (short)-4096))))))) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (2477365579698434481LL)))))));
    var_21 = min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)25955)) < (-2076308752))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 8059221492482147711LL)) ? (169434266U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))), (((((/* implicit */_Bool) 4125533030U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : ((-9223372036854775807LL - 1LL)))))));
    var_22 |= ((/* implicit */short) var_9);
}
