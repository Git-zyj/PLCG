/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249748
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
    var_19 = ((/* implicit */unsigned int) var_14);
    var_20 = ((/* implicit */short) (~((-(min((((/* implicit */int) (unsigned char)6)), (-32031111)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_0 - 3]))), (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 2]) >> (((arr_1 [i_0 - 3]) - (14949303255238951775ULL))))))));
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 2]))), (((/* implicit */unsigned long long int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))));
    }
}
