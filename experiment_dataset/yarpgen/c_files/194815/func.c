/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194815
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
    var_17 = ((/* implicit */int) ((long long int) ((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_1))))) | (max((((/* implicit */unsigned long long int) var_7)), (var_5))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))))), (max((((/* implicit */unsigned int) min((var_7), (var_7)))), (min((1993210905U), (((/* implicit */unsigned int) (unsigned char)226))))))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */signed char) arr_8 [(short)4] [i_1] [(short)4] [(short)4]);
                            arr_14 [i_0] [i_2] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_2), (var_2)))) - (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 16002664584820407532ULL)) ? (((/* implicit */unsigned long long int) 2301756365U)) : (18446744073709551607ULL)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) (_Bool)1))) <= (((/* implicit */int) ((unsigned short) var_0))))) ? (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */_Bool) arr_7 [(short)1] [(_Bool)1] [i_1] [i_1])) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) min((8136655767113529216LL), (((/* implicit */long long int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                var_19 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)-10449)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) || (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) var_1))))));
            }
        } 
    } 
}
