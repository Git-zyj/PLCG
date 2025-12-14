/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207776
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
    var_19 = ((/* implicit */unsigned long long int) (+(var_5)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [6] [i_0] = (~(((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2765148553U)) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned short)58312))));
    }
}
