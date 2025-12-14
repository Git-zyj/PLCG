/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201483
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0] [i_0 + 3]), (arr_1 [i_0] [i_0 + 3])))) | (max((((((/* implicit */int) arr_1 [(unsigned short)24] [i_0])) + (((/* implicit */int) arr_1 [i_0 - 2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) 280467306U)))))))));
        var_11 = ((/* implicit */unsigned int) ((short) arr_0 [i_0 + 2]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0]))), (arr_0 [i_0 + 3]))) <= (arr_0 [i_0])));
    }
    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_7)));
    var_13 = ((/* implicit */unsigned char) ((signed char) (+(((unsigned int) (unsigned char)22)))));
}
