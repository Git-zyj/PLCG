/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46482
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64501)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (short)20180))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) max(((((-(11731857013241027289ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)8599)) ? (((/* implicit */int) (short)8599)) : (((/* implicit */int) (short)12963))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) - ((+(((/* implicit */int) var_8)))))))));
    }
}
