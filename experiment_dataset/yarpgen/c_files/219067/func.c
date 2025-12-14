/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219067
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
    var_12 = ((/* implicit */unsigned short) -643095118);
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-14368)) * (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((var_8), (((/* implicit */long long int) 4188099256U)))));
        var_14 = ((/* implicit */_Bool) min((var_14), (arr_1 [i_0] [i_0])));
    }
    var_15 = ((/* implicit */int) (-(min((((((/* implicit */_Bool) (short)-16307)) ? (((/* implicit */unsigned long long int) -473016729)) : (3377699720527872ULL))), (((/* implicit */unsigned long long int) min((var_2), (var_10))))))));
}
