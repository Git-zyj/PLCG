/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241211
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
    var_17 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((unsigned int) var_7))), (((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))))), (((/* implicit */unsigned long long int) max(((+(var_9))), (((((var_5) + (9223372036854775807LL))) << (((var_11) - (2652181202U))))))))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (_Bool)1))))) | (max((17592186044415ULL), (18446726481523507185ULL)))))) ? (12429389209530523927ULL) : (((/* implicit */unsigned long long int) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_15))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) (+(max((((arr_3 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_16))), (arr_0 [i_0] [i_0])))));
                var_20 = ((/* implicit */long long int) min((max((min((arr_4 [17U] [i_0] [i_1]), (((/* implicit */unsigned int) arr_3 [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1])) <= (((/* implicit */int) arr_5 [i_0] [i_1]))))))), (max((min((3145728U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))));
            }
        } 
    } 
}
