/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47358
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) % (var_14)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((unsigned int) arr_0 [i_1 - 1]);
            var_18 = ((((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 2])) < (((/* implicit */int) arr_3 [i_0 - 1] [i_1 - 1])));
        }
        var_19 &= ((/* implicit */short) max((((/* implicit */unsigned int) arr_4 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)104))))) ? ((+(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-115)))))))));
    }
    var_20 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))));
    var_21 = ((/* implicit */unsigned char) var_3);
}
