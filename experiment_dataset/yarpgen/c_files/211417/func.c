/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211417
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (3590802176056829527ULL))))));
    var_12 = ((/* implicit */short) max((var_4), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_13 -= (!(((/* implicit */_Bool) (short)17380)));
        arr_2 [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_1))))))) | (min((((((/* implicit */_Bool) 18136039700613850416ULL)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (short)17716)))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
}
