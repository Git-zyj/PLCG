/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201127
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (+(var_4))))));
        var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_0] [1])) - (arr_0 [i_0]))))));
        arr_2 [i_0] |= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (279223176896970752ULL))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_7))))), ((+(var_4)))))));
    }
    var_12 = ((/* implicit */short) max(((~(min((-1815491677), (((/* implicit */int) (unsigned short)3073)))))), ((~(((/* implicit */int) var_8))))));
}
