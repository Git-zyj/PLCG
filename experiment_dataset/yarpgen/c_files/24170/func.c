/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24170
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
    var_13 = ((/* implicit */_Bool) 5033277425357294293LL);
    var_14 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1)))))))));
    var_15 = ((/* implicit */unsigned int) var_2);
    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11446))) : (var_11)))))) || (((/* implicit */_Bool) (unsigned char)192))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */_Bool) arr_4 [i_0]);
                var_18 ^= arr_0 [i_0];
            }
        } 
    } 
}
