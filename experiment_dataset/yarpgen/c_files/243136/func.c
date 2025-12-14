/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243136
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) var_1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_13 = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))))))));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        }
        arr_6 [i_0] [i_0] = ((/* implicit */short) (-(-5154179065405872027LL)));
    }
}
