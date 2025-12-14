/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221726
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
    var_10 = ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (unsigned short)46991)), (var_4))) < (var_9))))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((942678942U) - (942678938U)))))), (min((((/* implicit */unsigned int) var_2)), (942678944U))))));
    var_11 = ((/* implicit */short) ((signed char) max((((/* implicit */unsigned int) (short)-10298)), (var_0))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (3352288353U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), ((-(((((/* implicit */_Bool) arr_5 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) var_0))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((var_4) ^ (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 6226461655246033216LL)))) ? (((-6441515408127899188LL) + (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11404)) ? (((/* implicit */int) (short)-4519)) : (((/* implicit */int) arr_0 [i_0])))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_8);
}
