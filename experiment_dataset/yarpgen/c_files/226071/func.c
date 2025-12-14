/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226071
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 1] [i_1] = (((+(arr_2 [i_1]))) / (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))));
                var_19 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 2])))))));
                var_20 |= ((/* implicit */signed char) arr_1 [i_0] [i_0 - 1]);
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((13726155067583924442ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [(signed char)3])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6015)) || (((/* implicit */_Bool) ((1051107814U) + (1051107828U))))))) : ((+(((((/* implicit */int) (short)6144)) / (((/* implicit */int) (_Bool)1))))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [7U])) : (arr_4 [i_0 - 2] [i_0 - 1] [i_1]))) - (((((/* implicit */_Bool) var_3)) ? (9662495406899267206ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? ((+(var_3))) : (((/* implicit */long long int) -975384086))));
            }
        } 
    } 
    var_22 |= ((/* implicit */_Bool) var_12);
    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) ((var_9) < (((/* implicit */unsigned int) var_8))))), (max((var_9), (((/* implicit */unsigned int) var_8)))))))))));
}
