/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198340
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
    var_10 = ((/* implicit */int) ((unsigned short) min((var_6), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))));
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_5)))) ? ((+(var_5))) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    var_12 ^= ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        arr_3 [7ULL] [7ULL] &= ((/* implicit */unsigned long long int) ((int) min((max((((/* implicit */int) arr_2 [i_0] [15])), (var_2))), (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) var_1))))))));
    }
}
