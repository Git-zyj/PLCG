/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35637
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
    var_19 *= ((/* implicit */unsigned long long int) ((max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (var_18)))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2534801096913555559LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))))));
    var_20 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7895)) ? (min((min((arr_3 [i_0]), (((/* implicit */unsigned int) (short)7898)))), (min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) 8388607ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6126542411744343962LL))), (((/* implicit */long long int) min(((unsigned char)255), ((unsigned char)159)))))))));
            var_22 = ((/* implicit */unsigned int) 1642387003);
        }
    }
    var_23 -= ((/* implicit */short) ((signed char) var_6));
}
