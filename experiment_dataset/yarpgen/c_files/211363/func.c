/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211363
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */long long int) ((((((/* implicit */int) ((short) arr_9 [(_Bool)1] [i_2] [i_3]))) <= (((/* implicit */int) (unsigned short)0)))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((short) arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */int) max((arr_0 [i_0] [(_Bool)1]), (((/* implicit */unsigned short) var_18)))))))));
                            var_21 ^= ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_2] [i_1] [14U] [i_0])) ? (((var_10) ? (((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (unsigned short)5109)))) : (var_19));
                            var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_7 [i_3] [4] [i_3] [(signed char)6] [i_3] [(signed char)6])) ? (((/* implicit */int) arr_7 [i_0] [2U] [i_0] [i_1] [i_2] [2U])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3])))), (((((/* implicit */_Bool) arr_7 [i_0] [(short)7] [i_1] [12LL] [(unsigned short)12] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [(short)2] [(short)2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3]))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))));
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((((var_17) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))) ? (((var_1) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) var_11))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
}
