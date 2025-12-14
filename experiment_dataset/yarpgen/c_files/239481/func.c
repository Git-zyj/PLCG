/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239481
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 1294364741656673901ULL))));
                    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)74))) % (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_2 [i_1] [i_0]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                            {
                                var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5])))))) - (max((arr_6 [(unsigned short)21] [i_6] [(unsigned short)8]), (max((arr_8 [i_6] [i_4]), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_4] [i_5 - 1] [i_6] [i_7])))))));
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) arr_5 [i_3] [i_3] [i_3] [0ULL]);
                            }
                            arr_23 [i_3] [i_3] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_5] [i_6] [i_5 - 1])) ? (min((((/* implicit */unsigned long long int) arr_17 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])), (var_14))) : (((/* implicit */unsigned long long int) var_10)));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_4] [(_Bool)1] [i_6] [i_6])) ? (((var_7) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_5 - 1] [i_6] [i_4])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_0 [i_6]))))) ? (((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (var_9))) : (min((((/* implicit */unsigned long long int) ((((var_18) + (9223372036854775807LL))) >> (((((/* implicit */int) var_4)) - (193)))))), (max((var_15), (var_9)))))));
                        }
                    } 
                } 
                arr_24 [(signed char)17] [i_4] [i_4] = ((/* implicit */int) ((_Bool) (-((-(18446744073709551613ULL))))));
                arr_25 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 1969657300U)), (((((/* implicit */long long int) var_11)) + (((((/* implicit */_Bool) (unsigned short)42417)) ? (4266300320338481655LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_3);
    var_24 = ((/* implicit */_Bool) (unsigned char)243);
    var_25 = ((/* implicit */signed char) ((12443070639958862719ULL) <= (((/* implicit */unsigned long long int) ((var_0) / (((((/* implicit */_Bool) (signed char)74)) ? (261120U) : (var_11))))))));
}
