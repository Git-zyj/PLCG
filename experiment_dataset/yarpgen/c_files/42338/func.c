/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42338
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? ((~(((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) arr_2 [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_2 [(_Bool)1] [11U])))) ? (((/* implicit */int) ((unsigned short) (signed char)-118))) : (((/* implicit */int) ((short) var_9))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_0 [i_0 - 4] [i_0 + 1])))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (signed char)117)))))));
    }
}
