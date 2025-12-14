/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4169
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((((((/* implicit */_Bool) 8796093022200LL)) || (((/* implicit */_Bool) (-(8796093022208LL)))))) ? (((/* implicit */unsigned long long int) (+(((unsigned int) arr_1 [i_0]))))) : (((unsigned long long int) ((8879091348752644704ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) ((8988958152935511222LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))))))))) <= (var_6)));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) 8796093022208LL);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_1);
}
