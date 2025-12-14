/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234907
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
    var_10 = ((unsigned char) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) arr_1 [i_1]);
                var_12 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 18ULL)) ? (var_5) : (var_1))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (((arr_2 [i_3]) * (((/* implicit */unsigned long long int) var_9)))))))));
                            arr_12 [i_0] [i_1] [i_2] = ((/* implicit */int) (+((~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_4))))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max(((-(max((var_0), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_0);
}
