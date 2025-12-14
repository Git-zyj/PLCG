/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23669
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((var_8), (3))))));
    var_17 = ((/* implicit */signed char) var_8);
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) 2147483647))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_2);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_12)))) >= (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_9))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_19 -= ((/* implicit */signed char) ((unsigned int) (signed char)80));
        var_20 = ((/* implicit */_Bool) max((var_20), (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (2669770173U))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) (signed char)35)))))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) 2305843009213693951LL)))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (var_14)))))) : ((+(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)63732))))))));
}
