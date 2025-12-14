/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5296
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((var_17) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((+(((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-4330083203830157580LL))))) : (((/* implicit */long long int) (-(arr_2 [i_0] [i_0] [i_0])))))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))))) : (((((arr_2 [i_1] [i_1] [i_0]) - (((/* implicit */unsigned int) var_2)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -176230017)) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_4)))))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_0])) || (((/* implicit */_Bool) ((var_2) ^ (((/* implicit */int) arr_4 [i_0] [i_2])))))));
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2] [i_0]))));
            var_25 = ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_0])))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_12))))));
            var_26 = ((/* implicit */unsigned short) (((+(-4330083203830157576LL))) - (((/* implicit */long long int) arr_6 [i_2] [i_0]))));
        }
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) <= (18009364568903168703ULL))))) & (arr_0 [i_0]))) <= (((((/* implicit */unsigned int) ((var_2) >> (((4294967295U) - (4294967268U)))))) - ((~(812059716U)))))));
        arr_7 [i_0] [i_0] |= ((/* implicit */int) var_9);
    }
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_7)))))));
}
