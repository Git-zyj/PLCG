/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35535
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
    var_19 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)171));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (signed char)-81)), (530966217U))), (((/* implicit */unsigned int) ((signed char) (short)7)))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 18446744073709551615ULL))));
        }
    }
}
