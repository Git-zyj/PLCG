/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211387
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
    var_19 = ((/* implicit */signed char) var_0);
    var_20 = ((/* implicit */unsigned char) (+((+(1ULL)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [(unsigned char)22] [(unsigned char)8] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (short)9173)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9160))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) - (arr_2 [i_0] [i_0 + 2])))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_1 - 2] [i_1 + 1])), (arr_6 [i_0]))))));
                }
            } 
        } 
    } 
}
