/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248394
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
    var_11 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15736))) : (max((arr_0 [i_0] [12]), (((8972157792870952336LL) | (arr_0 [i_0] [i_0]))))));
        var_12 += ((((/* implicit */_Bool) (unsigned char)48)) ? (max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-14245)) : (var_7))), (((/* implicit */int) (short)-1)))) : (((/* implicit */int) var_2)));
    }
}
