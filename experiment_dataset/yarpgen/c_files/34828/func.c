/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34828
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) ((var_12) | (((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)64809)))))))));
            var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_3 [i_1] [i_1] [i_0]) != (7002828898856110253LL))))));
            arr_4 [i_0] [i_0] = ((/* implicit */short) var_1);
        }
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2691)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2691))) : (7002828898856110249LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-2675)), (arr_2 [i_0])))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0])))));
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_16 = ((/* implicit */signed char) (+(((unsigned long long int) (short)2702))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -268435456)) ? (arr_5 [i_2] [i_2]) : (arr_5 [0LL] [i_2])))) ? (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_2]) : (((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) max((arr_2 [i_2]), (((/* implicit */unsigned short) var_7)))))));
    }
    var_18 = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) 0)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) : (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
    var_19 &= ((/* implicit */_Bool) ((signed char) ((12651972773561197443ULL) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-2692)), (25)))))));
}
