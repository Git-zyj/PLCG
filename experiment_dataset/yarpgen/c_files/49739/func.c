/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49739
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned char) ((_Bool) var_15))), (min(((unsigned char)64), (arr_4 [i_1])))))))));
                var_19 += ((/* implicit */short) (~(((/* implicit */int) (short)14682))));
                var_20 += ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_11)) << (((var_10) - (5442621100694507949LL)))))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (((-(((unsigned long long int) var_15)))) >> (((((/* implicit */int) var_9)) - (131))))))));
    var_23 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_13)), (var_4)));
}
