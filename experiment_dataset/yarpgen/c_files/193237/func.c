/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193237
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
    var_18 += ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-31415)), (var_2)))) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_0 + 3] [i_1 + 2])), (arr_1 [i_1 + 2])))) ? (((((/* implicit */_Bool) arr_3 [2ULL] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 + 1])))) : ((~(((/* implicit */int) arr_3 [i_1 - 1] [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)31414)), (var_2)))) ? (((/* implicit */unsigned long long int) ((int) (short)31425))) : ((((_Bool)1) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31426)))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) arr_0 [i_2] [i_2]);
    }
}
