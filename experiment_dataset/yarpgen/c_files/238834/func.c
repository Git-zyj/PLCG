/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238834
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
    var_12 &= ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 *= ((/* implicit */unsigned int) var_7);
        var_14 = ((/* implicit */unsigned int) max((var_14), (4095U)));
        var_15 = ((/* implicit */unsigned long long int) var_7);
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_5 [i_1] [(short)5] = ((/* implicit */short) ((21ULL) | (((/* implicit */unsigned long long int) max((arr_4 [i_1]), (((/* implicit */long long int) var_6)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (short i_3 = 2; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))) : (((unsigned long long int) (short)-1)))) >> (((var_1) ? (((/* implicit */int) ((10ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4] [i_3])))))) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [i_3 - 2])))))))));
                                var_17 = ((((((/* implicit */_Bool) min(((signed char)-16), (((/* implicit */signed char) arr_12 [12LL] [i_2] [i_1] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(arr_15 [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] [i_1]))))) + (((/* implicit */unsigned long long int) arr_16 [(short)9] [(short)9] [i_3])));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) var_7)) / (((/* implicit */int) var_0)))) != (((/* implicit */int) arr_7 [i_1] [i_1]))))), (arr_4 [i_3]))))));
                    arr_17 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                    var_19 = ((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3 - 2] [i_3 - 1]) & (((/* implicit */long long int) var_9))));
                    var_20 -= ((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) var_7))), (min((((/* implicit */short) (signed char)33)), ((short)-1876)))));
                }
            } 
        } 
    }
}
