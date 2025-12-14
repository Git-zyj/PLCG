/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192389
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */long long int) (short)-21072);
                    arr_9 [9] [i_1] |= ((/* implicit */signed char) (~(arr_1 [i_0])));
                }
            } 
        } 
    } 
    var_17 *= ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) 3163739294U)), (-9223372036854775807LL)))));
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), ((+(((((/* implicit */_Bool) (short)-21088)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)221))))))));
}
