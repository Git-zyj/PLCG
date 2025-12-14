/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215647
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_3 [(short)2] [i_0] = ((/* implicit */unsigned char) ((0U) >= (((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned short) 10U);
            var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(arr_6 [i_0] [i_0] [i_0]))))));
            var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0]))));
        }
        arr_7 [(unsigned short)14] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 1])) ? (arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 1]) : (((/* implicit */unsigned long long int) 4294967286U))));
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49453)) || (((/* implicit */_Bool) ((-1574637917) & (((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))))));
}
