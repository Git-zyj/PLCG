/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244158
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (arr_2 [i_0]))))))), (min(((-(var_3))), (max((((/* implicit */unsigned long long int) var_2)), (var_11)))))));
        var_15 ^= ((/* implicit */long long int) max((var_11), (max((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [13LL]))))), (((/* implicit */unsigned long long int) var_1))))));
    }
    var_16 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (var_13)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_6)) : (var_9)))))));
    var_17 = ((/* implicit */unsigned long long int) ((signed char) (((+(var_12))) % (((/* implicit */int) ((signed char) var_3))))));
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_9)))))), (var_3)));
}
