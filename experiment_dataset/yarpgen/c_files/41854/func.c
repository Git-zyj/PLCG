/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41854
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [12] = ((/* implicit */short) var_3);
                var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) 18417758238532010651ULL)) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (max((((/* implicit */int) (unsigned short)28590)), (var_10))) : (((/* implicit */int) (signed char)-92)))) : (((((/* implicit */_Bool) ((unsigned int) arr_3 [(short)8] [3ULL]))) ? (((/* implicit */int) min(((unsigned short)36966), (var_2)))) : (((/* implicit */int) (short)3))))));
                arr_6 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1]);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) * (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)28605)), (-1060184620)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)28590))))) : ((+(var_3))))))))));
            }
        } 
    } 
    var_17 += ((/* implicit */int) var_13);
}
