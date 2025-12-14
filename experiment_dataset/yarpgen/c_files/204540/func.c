/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204540
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((17093149980710054603ULL), (((/* implicit */unsigned long long int) var_4))))))) || (((/* implicit */_Bool) var_6))));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    var_17 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((-8349660662952720934LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))), (var_1)));
    var_18 += ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */unsigned char) min((max(((-(17LL))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)113)), (var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 65930118U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(-18LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((-38LL) + (53LL))))))))));
                var_20 *= ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 3531338463U)), (var_10))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
}
