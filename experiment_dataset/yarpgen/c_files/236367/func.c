/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236367
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_9))), (((/* implicit */unsigned long long int) ((min(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (unsigned char)60)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned long long int) max((var_10), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_2))))) ^ (max((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL)))))));
                            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_1))))) : (min((var_8), (((/* implicit */unsigned long long int) var_2)))))))));
                        }
                    } 
                } 
                arr_9 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0))))) * (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) (~(var_8))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_9);
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_3)), (var_5)))) > (((/* implicit */int) min((var_5), (var_1))))))), (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))));
}
