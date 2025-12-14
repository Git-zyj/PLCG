/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19297
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_5 [(unsigned short)21] [i_0] [(signed char)11]);
                var_21 = ((unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_0) : (8927180845877125864ULL)));
                var_22 = ((/* implicit */signed char) (((-(var_8))) - (max((9007199237963776ULL), (((/* implicit */unsigned long long int) var_9))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_6 [i_0])), (((((/* implicit */_Bool) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765)))))) ? ((((_Bool)1) ? (18437736874471587831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18345))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_11);
}
