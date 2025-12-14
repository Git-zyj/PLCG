/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197803
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
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_1])) * (((/* implicit */int) var_16))))) ? (((2337243142643495018ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [9U] [9U] [9U])))))))) ? ((-(((/* implicit */int) arr_5 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [10LL])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (unsigned char)3);
                                var_20 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))) ^ (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(signed char)8]))))));
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    arr_15 [i_0] [i_1 + 1] [i_5] [12U] &= ((/* implicit */short) var_17);
                    arr_16 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) ((var_5) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 2] [(short)9] [i_0 + 2])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 2])))))));
                }
                var_22 -= ((((/* implicit */long long int) ((unsigned int) var_1))) / ((-9223372036854775807LL - 1LL)));
                arr_17 [i_0 + 1] [12ULL] [i_1] = (unsigned char)103;
                arr_18 [(unsigned short)1] = ((/* implicit */signed char) ((arr_3 [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)171))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_5);
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))))));
}
