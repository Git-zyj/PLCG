/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2482
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
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((min((var_9), (((/* implicit */int) (signed char)14)))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_0)))))))), (var_7)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (arr_0 [i_0] [i_0])));
        var_17 *= ((/* implicit */unsigned char) (short)(-32767 - 1));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-28820)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [0] [i_0]))) : (arr_0 [4LL] [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-10859))))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned short) (-(min((max((((/* implicit */int) arr_2 [i_0])), (var_5))), (((/* implicit */int) max((arr_2 [i_0]), ((unsigned char)238))))))));
        var_19 = ((/* implicit */unsigned int) 15937290057319726193ULL);
    }
    var_20 = ((/* implicit */int) ((unsigned int) ((max((7811866485063719184ULL), (((/* implicit */unsigned long long int) var_9)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49663))))));
}
