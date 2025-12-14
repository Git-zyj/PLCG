/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2530
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) max((((unsigned long long int) max((var_1), (var_5)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) var_8)), ((unsigned char)252)))))))));
        var_11 = ((/* implicit */int) max((max((var_5), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_2))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) ((_Bool) var_4)))));
    }
    var_12 ^= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (var_9))) | (((/* implicit */long long int) max((var_3), (((/* implicit */int) var_0))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))))));
    var_13 = max((((long long int) var_6)), (((/* implicit */long long int) ((_Bool) max((var_3), (((/* implicit */int) var_2)))))));
}
