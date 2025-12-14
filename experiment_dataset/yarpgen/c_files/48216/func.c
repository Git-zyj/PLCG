/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48216
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [4LL] [i_0])) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((1LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))))))));
                arr_7 [5LL] = ((/* implicit */long long int) ((max((arr_4 [2ULL] [i_1] [(_Bool)1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (2441463330U))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned char)24), (((/* implicit */unsigned char) (signed char)75))))) > (((((/* implicit */int) (signed char)75)) - (((/* implicit */int) (_Bool)1))))));
    var_16 = var_13;
}
