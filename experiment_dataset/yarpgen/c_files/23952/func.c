/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23952
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) var_15)) >= (arr_4 [7LL] [7LL]))), ((!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_2])) ? (((/* implicit */int) arr_1 [i_4] [i_4])) : (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) 0)) : (var_3)))));
                                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_1]))))) % (((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_15 [(signed char)8] [i_1] [i_1]), (((/* implicit */long long int) arr_3 [i_0]))))) ? ((~(var_3))) : (var_12)));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((((((/* implicit */long long int) ((/* implicit */int) var_9))) == (var_0))) ? (((5205471927501844972ULL) >> (((var_12) - (5261414119203985110ULL))))) : (((/* implicit */unsigned long long int) ((var_6) | (215861921272139515LL)))))), (((unsigned long long int) min((((/* implicit */long long int) 2815810865U)), (var_0)))))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((5205471927501844959ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)244))))))))) >= (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_6)))));
}
