/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220615
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
    var_11 = ((/* implicit */long long int) ((var_3) || (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) (unsigned char)160))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (((unsigned long long int) arr_0 [i_0]))))));
        var_13 = ((/* implicit */long long int) ((max((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)5720)) : (((/* implicit */int) arr_1 [19] [i_0])))))) | (((((/* implicit */int) (unsigned short)9241)) << (((((/* implicit */int) (unsigned short)55732)) - (55732)))))));
    }
    var_14 *= ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */int) var_2)) >= (var_5)))), (min((var_7), (((/* implicit */int) (unsigned char)160)))))) << (((((((/* implicit */int) var_1)) + (15904))) - (7)))));
    var_15 = ((/* implicit */unsigned short) var_9);
}
