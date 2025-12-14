/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19732
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 += ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)0)))) == (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (short)-12749)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((2477836250574680888LL) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [1LL])))));
        var_13 = ((/* implicit */unsigned int) min((var_13), ((~((+(((unsigned int) (signed char)-107))))))));
    }
    var_14 = ((/* implicit */unsigned int) var_9);
}
