/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246028
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
    var_19 = ((/* implicit */unsigned long long int) ((signed char) var_12));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) max((2584907609U), (((/* implicit */unsigned int) arr_6 [i_0] [13ULL]))))) ? (814914618482858823ULL) : (((814914618482858820ULL) / (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))));
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) min((((/* implicit */short) var_8)), (var_16)))) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) : (var_15)))));
                    arr_9 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_4 [i_1] [5]) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((int) arr_2 [i_0] [7ULL]))) : (arr_5 [i_1] [i_0])));
                }
            } 
        } 
    } 
}
