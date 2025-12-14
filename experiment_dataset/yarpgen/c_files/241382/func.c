/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241382
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_0] [(unsigned short)22] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)192))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) 3823995995U))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_3))))) : ((((+(3800792526088356994ULL))) / (((/* implicit */unsigned long long int) var_9)))))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) 1974687126U)) ? (16639073700321519111ULL) : (16639073700321519111ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1807670373388032505ULL))))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) (-(var_10)))) * (min((((/* implicit */unsigned long long int) (signed char)16)), (16639073700321519111ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_23 = ((/* implicit */int) var_1);
}
