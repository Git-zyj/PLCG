/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201081
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) arr_5 [i_0] [(short)11] [i_2]);
                    arr_9 [i_2] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (var_5))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (1652610839U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (arr_8 [i_0] [i_0] [i_0])))))));
                    var_17 = ((/* implicit */int) max((3ULL), (((/* implicit */unsigned long long int) 422630049))));
                    arr_10 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) max(((+(18ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_3 [i_0] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [12U] [(signed char)1]))) : (40687340U))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_3);
}
