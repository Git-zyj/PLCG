/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53375
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
    var_15 = ((/* implicit */short) var_12);
    var_16 = ((/* implicit */unsigned char) max((((unsigned long long int) ((_Bool) 409721434))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)57)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 += ((/* implicit */int) arr_0 [i_0 + 1] [(short)18]);
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            arr_8 [i_1] |= ((/* implicit */short) (~(((((/* implicit */_Bool) min((var_3), (((/* implicit */short) arr_0 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
            var_18 = ((/* implicit */short) min(((~(arr_5 [i_1 - 2] [i_1 - 1]))), (arr_5 [i_1 - 1] [i_1])));
        }
        for (int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            arr_12 [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) var_13));
            var_19 = ((/* implicit */unsigned char) var_10);
        }
    }
}
