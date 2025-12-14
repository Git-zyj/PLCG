/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19726
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
    var_10 = ((/* implicit */_Bool) var_0);
    var_11 &= ((/* implicit */int) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_4 [i_0]))));
            var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((unsigned long long int) arr_3 [i_1 + 2] [(_Bool)1] [14])) < (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_1] [i_1])))))));
        }
        arr_5 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))), ((((_Bool)1) || (((/* implicit */_Bool) (unsigned short)49017))))));
        var_14 += ((/* implicit */unsigned short) (_Bool)0);
    }
}
