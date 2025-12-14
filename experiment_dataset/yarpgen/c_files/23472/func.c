/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23472
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_10 = ((/* implicit */signed char) ((((((arr_1 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) var_2)) : (arr_0 [i_0]))) ^ (((/* implicit */int) ((unsigned char) var_5))))) != ((-(arr_0 [i_0 + 1])))));
        var_11 = ((/* implicit */short) min((max((((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1])), (arr_0 [i_0 - 1]))), ((~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
    }
    var_12 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (var_7))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)220)) <= (((/* implicit */int) (unsigned char)99)))))))));
    var_13 = (~(((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_8))))), (min(((signed char)-71), (var_2)))))));
}
