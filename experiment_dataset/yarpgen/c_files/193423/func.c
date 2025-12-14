/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193423
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
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_10);
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1206380434)) + (((var_15) + (((/* implicit */unsigned long long int) var_9))))));
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 + 1])) && (((/* implicit */_Bool) arr_6 [i_0 + 2]))))) % ((-(((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_16)))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((+(var_4)))))) ? (var_4) : ((-((+(((/* implicit */int) (unsigned char)29))))))));
}
