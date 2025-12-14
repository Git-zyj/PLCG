/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37568
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) (-(max((max((var_16), (((/* implicit */unsigned int) 776983059)))), (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 776983050)))) ? (max((((arr_10 [i_3] [i_3]) + (((/* implicit */unsigned int) 921600664)))), (arr_10 [i_0 - 1] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0])))));
                            var_19 = ((/* implicit */signed char) max((min((arr_7 [i_2 - 1] [i_2 + 2] [i_2]), (arr_7 [i_2 + 1] [i_2 + 2] [i_2 - 1]))), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_2] [10LL])) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) != (((unsigned int) arr_12 [i_0] [i_0] [i_0] [2LL])))))));
                            arr_13 [i_0 - 3] [13] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_4 [i_2 + 1]) - (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) arr_11 [(unsigned short)6] [i_2] [(unsigned short)15] [i_0]))))) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) var_7))));
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0 - 1] [i_2 + 1] [i_2] [i_3]))))) ? (((((/* implicit */int) arr_11 [i_0 - 1] [i_2 + 1] [i_1] [i_3])) << (((((/* implicit */int) arr_11 [i_0 - 1] [i_2 + 1] [(_Bool)1] [i_3])) - (37674))))) : (((((/* implicit */int) arr_11 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_3])) ^ (((/* implicit */int) arr_11 [i_0 - 1] [i_2 + 1] [i_2] [i_3]))))));
                            var_21 = min((max((6292249014132119610LL), (arr_12 [(unsigned short)11] [i_2] [i_2] [i_2 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)22328))))));
                        }
                    } 
                } 
                var_22 = ((((/* implicit */_Bool) -776983057)) ? (((((/* implicit */_Bool) min((-754694682786767100LL), (((/* implicit */long long int) (unsigned short)229))))) ? (((/* implicit */long long int) arr_2 [i_0])) : (7766183495111974445LL))) : (arr_9 [i_0 - 3] [i_0 - 3] [i_0] [16] [i_1]));
                var_23 = max((((/* implicit */long long int) max((-921600679), ((-(((/* implicit */int) (unsigned short)4299))))))), (max((((/* implicit */long long int) (unsigned short)36191)), (arr_7 [i_0] [12LL] [6LL]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((/* implicit */long long int) max((776983059), (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) var_9)) ? (var_10) : (var_9))))), (((/* implicit */long long int) ((4294453790U) & (((/* implicit */unsigned int) -1008852488)))))));
}
