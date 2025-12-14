/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46343
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)178)), (var_7)))) : (((((((/* implicit */int) var_5)) / (var_12))) / (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)35)), ((unsigned short)38135)))) > (((/* implicit */int) (unsigned short)7464)))))));
        var_14 = (unsigned short)7464;
    }
}
