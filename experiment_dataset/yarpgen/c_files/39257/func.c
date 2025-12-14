/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39257
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
    var_16 = ((short) var_1);
    var_17 = min((((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) ^ ((+(((/* implicit */int) (short)-18185))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */short) (unsigned short)65535);
                var_19 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_3 [i_0])))));
                var_20 = ((/* implicit */unsigned char) ((_Bool) var_0));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (+(min((((unsigned int) var_3)), (((/* implicit */unsigned int) ((_Bool) var_4)))))));
    var_22 = ((/* implicit */unsigned long long int) var_7);
}
