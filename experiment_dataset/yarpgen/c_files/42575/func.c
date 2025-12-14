/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42575
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0 - 3] = var_9;
        arr_3 [(unsigned char)15] [(_Bool)1] |= ((/* implicit */unsigned short) max((-1594191176), (((((/* implicit */int) ((((/* implicit */unsigned int) 2132453740)) <= (116978576U)))) * (((((/* implicit */_Bool) var_6)) ? (-1594191203) : (((/* implicit */int) var_11))))))));
        var_12 ^= ((/* implicit */signed char) arr_0 [i_0] [i_0 - 2]);
        arr_4 [i_0] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (signed char)-79)))), (((/* implicit */int) (unsigned short)3920))));
    }
    var_13 = ((unsigned short) (short)-6964);
}
