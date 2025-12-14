/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53179
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) / (min((var_9), (((/* implicit */unsigned long long int) var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [(unsigned short)11] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-19107)) == (((/* implicit */int) (unsigned short)12104)))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), ((unsigned char)75)))) : (((/* implicit */int) var_7))));
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_5 [1ULL] [i_1]))));
        arr_6 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) (unsigned short)48637))), (var_7))))));
    }
}
