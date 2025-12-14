/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209039
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (signed char)(-127 - 1));
        arr_3 [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 2])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) 473213389);
        arr_9 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)0)), (min((((/* implicit */short) (signed char)116)), ((short)-32429)))));
    }
    var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) max((351221942), (((/* implicit */int) (_Bool)1)))))))));
}
