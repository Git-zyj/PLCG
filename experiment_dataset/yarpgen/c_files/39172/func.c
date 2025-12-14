/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39172
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
    var_11 = ((/* implicit */unsigned char) ((short) var_0));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned char)252))))))) == (((unsigned int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) (~((~(min((4058556913U), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_13 = ((/* implicit */int) ((unsigned long long int) 2147483648U));
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((0LL) + (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((2147483648U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)13]))))))))));
            }
        } 
    } 
}
