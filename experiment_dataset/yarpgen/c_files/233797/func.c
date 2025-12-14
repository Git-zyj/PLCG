/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233797
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
    var_11 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -6616125502095853956LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)15287))))) : (max((-3278373753096029564LL), (((/* implicit */long long int) var_10))))))) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_8))))))) : ((+((~(var_1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0])))))));
        var_13 = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned short) var_9)), ((unsigned short)6144))));
    }
    var_14 = ((/* implicit */signed char) var_4);
}
