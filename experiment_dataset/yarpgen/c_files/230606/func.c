/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230606
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
    var_10 -= ((/* implicit */_Bool) (((~((~(((/* implicit */int) (short)5196)))))) | (((/* implicit */int) ((((/* implicit */int) ((signed char) (short)-5197))) <= (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) min((738551443U), (((/* implicit */unsigned int) var_6))));
        var_12 = ((/* implicit */unsigned char) ((signed char) ((max((var_0), (((/* implicit */unsigned int) var_1)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))));
        arr_2 [(signed char)5] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) (unsigned char)130)));
    }
}
