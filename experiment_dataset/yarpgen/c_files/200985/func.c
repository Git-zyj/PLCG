/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200985
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
    var_18 += ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_1] [2LL] [i_1] = ((/* implicit */signed char) min(((((!(arr_3 [i_1] [(unsigned char)21] [(short)0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_2 [i_0] [i_0] [i_0])), ((short)17757))))) : (max((16569636137054073215ULL), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((_Bool) ((arr_1 [9ULL]) ? (-2104769417) : (((/* implicit */int) var_3))))))));
                var_19 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_0]);
                var_20 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 1877107936655478401ULL))) ? (((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) var_10))))) : (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_2 [17U] [i_0] [17U]))))))), (arr_0 [i_1 + 1] [i_0]));
            }
        } 
    } 
}
