/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37784
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 18446744073709551615ULL))))));
                            var_19 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                            arr_12 [i_0 + 1] [i_0] [i_2] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(arr_5 [i_0 + 1] [i_0 + 1])))) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-22385)), (-546156060417637149LL))))))));
                            var_20 = ((/* implicit */short) -546156060417637158LL);
                            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])) ? ((-(arr_2 [i_3 - 1]))) : (min((((/* implicit */long long int) arr_8 [i_3 - 2] [0ULL] [0ULL] [i_0 - 1])), (560760249446821389LL)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_8))));
                var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4456))) : (((((/* implicit */_Bool) 16141275247761874257ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [7ULL])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (0ULL))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_1);
}
