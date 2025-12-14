/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236098
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
    for (long long int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_0 [i_0 - 2] [i_0]), (arr_0 [i_0 - 2] [i_0])))), (min((4050558667553498277LL), (((/* implicit */long long int) arr_0 [10U] [i_0]))))))) || ((_Bool)1)));
        var_12 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 -= ((/* implicit */unsigned long long int) var_6);
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_3 [15] [i_1]))) ? (min((((/* implicit */int) var_10)), (arr_4 [(_Bool)1]))) : (((((/* implicit */_Bool) 1150574702U)) ? (arr_4 [i_1]) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))) ? (min((((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */int) var_9))))), (((arr_3 [(signed char)4] [(short)21]) | (arr_3 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) -4050558667553498278LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((-4050558667553498277LL), (4050558667553498278LL))))))));
    }
    var_14 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 4050558667553498254LL))))) != (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */int) ((unsigned int) var_10));
}
