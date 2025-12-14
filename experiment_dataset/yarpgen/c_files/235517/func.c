/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235517
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
    var_14 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) 2LL)) ? (((/* implicit */int) (unsigned char)254)) : (var_10))))));
    var_15 = ((/* implicit */signed char) var_9);
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) var_10))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) >= (4294967295U)))) <= (-1509875437))));
                    var_18 += ((/* implicit */unsigned char) var_3);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((long long int) 4294967280U)))))))));
                    var_20 = ((/* implicit */long long int) var_12);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned short) -445883065));
}
