/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212153
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
    var_13 = min(((-((-(var_12))))), (var_12));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) var_11))))), (min((2409978215845625892ULL), (16120376703586691122ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-2371828072795036139LL) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2 - 2] [i_2])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2326367370122860493ULL))))), (((((/* implicit */_Bool) var_9)) ? (5328867645773525427LL) : (-2371828072795036139LL)))))) : ((+(max((arr_6 [i_2] [i_2] [i_1] [i_0]), (16120376703586691123ULL)))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((6142498083883261582ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))))), (min((2326367370122860493ULL), (((/* implicit */unsigned long long int) 937298515)))))))));
                }
            } 
        } 
    } 
}
