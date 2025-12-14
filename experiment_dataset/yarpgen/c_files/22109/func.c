/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22109
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned char)89))));
        var_17 = ((/* implicit */int) var_14);
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((short) ((-286754002) % (((((/* implicit */_Bool) arr_4 [i_1])) ? (-286754018) : (-286754018)))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned int) arr_3 [i_1])))));
    }
    var_20 &= ((/* implicit */unsigned short) var_2);
}
