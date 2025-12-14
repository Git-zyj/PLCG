/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203076
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)21219)) ? (((/* implicit */int) (short)-21219)) : (((/* implicit */int) (short)-21219))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? ((~(((/* implicit */int) arr_3 [i_0 + 3])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (short)21219))))) & ((-(arr_6 [17U] [(unsigned short)16])))))));
                arr_7 [(short)4] |= ((/* implicit */unsigned long long int) 260088018U);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), ((~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [(_Bool)1] [i_0 + 3] [(unsigned short)6]))) : (arr_0 [(_Bool)1])))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) (~((-(arr_6 [i_0] [3U])))))))));
                                var_18 = ((/* implicit */signed char) min(((short)-21219), (((/* implicit */short) (signed char)0))));
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((short)-21219), ((short)485))))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 += ((/* implicit */short) var_7);
    var_22 += ((/* implicit */_Bool) (+(((((((/* implicit */long long int) var_3)) == (var_5))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_1)) != (var_5))))) : (((((/* implicit */long long int) var_9)) ^ (var_2)))))));
}
