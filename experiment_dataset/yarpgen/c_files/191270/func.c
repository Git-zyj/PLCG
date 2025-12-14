/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191270
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 |= 11690520903824431350ULL;
                    var_21 = arr_6 [i_2] [i_2] [i_2];
                    var_22 |= ((/* implicit */long long int) max((arr_5 [11LL] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0])) % (var_15))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) min((var_9), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (short)-1093)), (5540857212666224135ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2])) : (var_16)))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_0 [17]))));
                                arr_17 [i_0] [i_0] [i_1] [6LL] [i_3] [i_3] [i_2] = ((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 2] [i_2] [i_4] [i_4 + 2])) ? (min((((/* implicit */long long int) (signed char)-52)), (-590773511891302419LL))) : (((arr_14 [i_4] [i_4 - 1] [i_2] [9LL] [i_4 + 1]) / (arr_14 [i_4] [i_4 + 2] [i_2] [i_4 + 1] [i_4 + 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_20 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */short) max((arr_14 [i_5] [i_2] [i_2] [(unsigned char)13] [i_0]), ((-(arr_6 [i_1] [i_1] [i_5])))));
                        var_25 = ((/* implicit */signed char) (+(arr_19 [i_1] [i_2] [i_1])));
                        arr_21 [i_2] [i_2] [i_2] [13LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_0])) ? (12905886861043327480ULL) : (var_9)))))))));
                        var_26 = arr_16 [i_5] [i_2] [i_2] [i_1] [i_2] [i_0];
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */short) var_12);
}
