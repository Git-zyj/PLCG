/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38914
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((int) var_5)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), ((!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) var_4);
        var_14 -= (~(((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (110))))));
        arr_3 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [7])) >> (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_0] [15]))))) >= (((/* implicit */int) arr_0 [i_0])))))));
    }
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))))))));
    var_16 = ((/* implicit */long long int) var_1);
}
