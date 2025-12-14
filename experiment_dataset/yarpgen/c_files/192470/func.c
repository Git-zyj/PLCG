/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192470
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
    var_14 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (1LL));
    var_15 &= ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */short) var_1);
                    var_17 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */long long int) -2147483630)) : (-356707759568059900LL)))) ? (((/* implicit */int) ((short) (_Bool)1))) : ((~(((/* implicit */int) var_0)))))), (((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) -356707759568059898LL)) ? (((/* implicit */int) (short)28276)) : (((/* implicit */int) (unsigned char)16))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_1);
}
