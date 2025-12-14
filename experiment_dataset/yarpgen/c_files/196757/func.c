/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196757
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
    var_13 = ((/* implicit */signed char) min((var_12), (((/* implicit */unsigned short) ((_Bool) var_1)))));
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(3245852534U)))) ^ (var_10)))) ? (min((min((var_10), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((3318509741U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))))) : (((/* implicit */long long int) ((var_4) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (+(arr_1 [i_0] [i_1])));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (((-(((/* implicit */int) ((_Bool) (unsigned char)0))))) + (((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_9);
}
