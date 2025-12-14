/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224676
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((min((arr_0 [i_0]), (((/* implicit */short) ((_Bool) (signed char)2))))), (((/* implicit */short) (signed char)-94))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_17 += ((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 3]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1 - 2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((arr_4 [i_0] [i_1 - 2]) + (2147483647))) >> (((/* implicit */int) var_9)))) : (((arr_4 [i_0] [i_1 + 2]) | (arr_4 [i_0] [i_1 - 1])))));
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_0]), (((/* implicit */unsigned int) arr_4 [i_2] [i_2]))))) ? (min((((arr_8 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) var_12))));
            var_20 = ((min((arr_8 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((((/* implicit */int) (unsigned short)12517)) <= (((((/* implicit */_Bool) (unsigned short)64796)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_9)))))))))));
        }
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    var_23 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_11))))));
}
