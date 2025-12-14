/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232600
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
    var_13 = ((/* implicit */unsigned char) ((((_Bool) min((((/* implicit */unsigned long long int) 2023723104U)), (2ULL)))) ? (max((((/* implicit */long long int) var_11)), (min((var_1), (((/* implicit */long long int) -9)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((_Bool) -6712834407887829159LL)), (((((/* implicit */long long int) ((/* implicit */int) var_3))) == (-14LL)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)37)) > (((/* implicit */int) var_11))))) > ((-(var_12)))))))));
                arr_4 [i_0 + 1] = ((/* implicit */unsigned int) (unsigned short)17474);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65531)) || (((/* implicit */_Bool) (unsigned char)202)))))));
}
