/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33869
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] [(short)3] [i_1] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_0 [i_1 - 1]))))));
                var_12 = ((/* implicit */unsigned long long int) 0);
            }
        } 
    } 
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_11)))))) == (min((((((/* implicit */unsigned long long int) 6)) ^ (8428705342256053203ULL))), (((((/* implicit */_Bool) 30)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))))))))));
}
