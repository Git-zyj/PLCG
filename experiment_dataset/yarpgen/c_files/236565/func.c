/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236565
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
    var_14 = ((/* implicit */long long int) (unsigned char)0);
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_3)), ((~((~(var_1)))))));
    var_16 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))));
        var_17 = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4294967271U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        var_18 = ((/* implicit */short) var_4);
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((_Bool) var_7)))));
    }
}
