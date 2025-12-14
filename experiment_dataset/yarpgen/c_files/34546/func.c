/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34546
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((max((-106138413), (((/* implicit */int) var_16)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_15))))))) | (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) (-(18446744073709551606ULL)));
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24073)) || (((/* implicit */_Bool) 196608))))) : (196608)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (~(((/* implicit */int) var_16))));
}
