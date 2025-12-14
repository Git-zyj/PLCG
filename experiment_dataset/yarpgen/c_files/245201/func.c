/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245201
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
    var_10 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) -624441391)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((max((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned char)1] [(_Bool)1]))) : (arr_0 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((int) arr_6 [i_0] [i_0] [i_1] [i_1]))))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [13] [i_0] [i_1] [i_2]))))))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((+(7ULL)))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ ((-(var_8)))));
                }
            } 
        } 
    } 
}
