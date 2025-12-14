/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42314
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
    var_20 = ((/* implicit */unsigned char) (unsigned short)43725);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    var_21 *= min(((_Bool)1), ((_Bool)1));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) max(((-(var_17))), (min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) min((var_12), ((signed char)6))))))));
                    var_22 = ((/* implicit */_Bool) arr_0 [i_0 + 2]);
                }
                arr_9 [i_1] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) && (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)44559))))))), ((~(var_0))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((-(arr_2 [i_0 - 2]))) << (((arr_3 [i_0 - 3]) / (arr_3 [i_0 + 1]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_17) << (((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) + (4)))))) / (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned long long int) (short)-25714))))) ? (((/* implicit */unsigned long long int) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (min((var_4), (((/* implicit */unsigned long long int) -6371535061473674175LL))))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6))))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) 883435237U))), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
