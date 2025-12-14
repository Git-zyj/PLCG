/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30427
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
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((min((max((((/* implicit */long long int) (unsigned short)65535)), (3925219257426041640LL))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))) == (var_0)))))), (((/* implicit */long long int) ((_Bool) var_6)))));
        var_19 = ((/* implicit */int) arr_0 [i_0]);
        var_20 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)36620)) >= (var_13)))) < (((/* implicit */int) (unsigned short)28263))));
    }
    var_21 *= ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) (-(var_9)))), (((unsigned long long int) (unsigned char)32)))));
    var_22 = ((/* implicit */_Bool) var_0);
}
