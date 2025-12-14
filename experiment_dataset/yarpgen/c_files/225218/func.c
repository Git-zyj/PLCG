/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225218
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((14340419636500005585ULL) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)112))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_0))))) & (((/* implicit */int) var_0))))))))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (short)32767))) | (((/* implicit */int) ((_Bool) var_4))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) max((((_Bool) ((_Bool) var_9))), (((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_6)), ((unsigned char)121))))) < ((+(3820004810U)))))));
}
