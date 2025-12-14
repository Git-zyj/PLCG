/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214571
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((max((((/* implicit */int) var_10)), (var_11))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) : (((((/* implicit */unsigned int) -1490174489)) & (max((arr_1 [i_0]), (var_9)))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned int) (_Bool)1);
        var_12 = ((/* implicit */short) (((-((-(arr_0 [i_0]))))) > (((/* implicit */long long int) ((unsigned int) -539749433994419982LL)))));
    }
    var_13 += ((/* implicit */unsigned char) var_1);
    var_14 |= ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
    var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
}
