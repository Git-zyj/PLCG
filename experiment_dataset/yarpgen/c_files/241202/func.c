/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241202
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [(unsigned char)13] = ((/* implicit */unsigned int) var_11);
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))) : (((unsigned int) arr_1 [i_0 + 2] [i_0 - 1]))))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0 + 2]);
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0 - 1] [i_0]);
    }
    var_17 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (-2147483647 - 1)))) ? ((+(((/* implicit */int) (unsigned char)219)))) : (((/* implicit */int) ((signed char) var_1))))))));
    var_18 = var_3;
    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)60)) << (((((/* implicit */int) var_4)) - (12535)))))) || (((/* implicit */_Bool) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))), (((unsigned char) var_10))));
}
