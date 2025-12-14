/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233573
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_3] [7ULL] [i_4] |= min((((((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((unsigned short) 18446744073709551615ULL))));
                                var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_18)) : (var_12))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32216)) ? (arr_14 [(unsigned char)0] [i_4]) : (arr_14 [11ULL] [i_1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [9ULL] [i_2] = ((/* implicit */_Bool) var_16);
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min((min((((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_18))), (((/* implicit */long long int) var_11)))), (((((/* implicit */_Bool) 17320873325108425656ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL)))))))));
                    arr_18 [i_0] [i_0] = ((/* implicit */int) 556348062998453281ULL);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) min((((/* implicit */short) (signed char)-54)), ((short)32215)));
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) & (var_12)))) ? (((/* implicit */unsigned long long int) var_15)) : (var_9))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
