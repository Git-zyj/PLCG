/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19865
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (var_13)))) ? (min((((/* implicit */int) var_14)), (var_12))) : (((/* implicit */int) var_10))))) ? (var_2) : (((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (min((-972483391), (1184722320)))))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (var_4))) : (max((((/* implicit */int) var_11)), (var_4))))) : (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_12)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967268U)) ? (-972483391) : (972483398)))), (var_7)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned char) var_5);
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_12))), (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
        var_20 = var_12;
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (((_Bool)1) ? (12U) : (2717034463U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((var_13), (((/* implicit */unsigned int) var_8))))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (var_9)))), (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                arr_17 [i_1] [10ULL] [(short)6] [i_1] = ((/* implicit */int) var_13);
            }
            var_22 = max((var_6), (((/* implicit */unsigned long long int) var_1)));
        }
    }
}
