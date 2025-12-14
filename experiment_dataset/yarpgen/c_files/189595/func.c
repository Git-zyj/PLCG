/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189595
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
    var_14 += ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-12086)) : (((/* implicit */int) (signed char)122)));
    var_15 -= ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) (((~(((/* implicit */int) arr_1 [i_0 - 1])))) | ((+(var_10)))));
        arr_3 [i_0] = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (arr_0 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */long long int) max(((+(arr_0 [i_0]))), (min((arr_0 [i_0 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (3262726040U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [6] [(signed char)4] [i_1] [i_1] = ((var_0) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_6)))))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) max((var_9), (var_3)))), (arr_12 [i_1] [i_2]))))) <= (var_5)));
                            }
                        } 
                    } 
                } 
                var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) arr_13 [(unsigned char)7] [i_2] [i_1] [i_1])))))));
                arr_20 [11ULL] = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) var_11)) - (arr_16 [i_2] [(signed char)6] [i_1] [(_Bool)1] [i_1] [i_1] [i_1])))));
            }
        } 
    } 
}
