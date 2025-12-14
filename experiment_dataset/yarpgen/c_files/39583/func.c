/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39583
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (var_12)))), (max((var_1), (3046708540U)))))) | (min((((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_12)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) - (14928168794304398784ULL))))))));
                    var_19 = ((/* implicit */unsigned char) (~(((int) (-(var_10))))));
                    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((min((((/* implicit */short) arr_3 [i_0] [i_1])), (arr_4 [i_0] [i_2] [i_2]))), (((/* implicit */short) min((arr_2 [i_1]), (arr_3 [i_2] [i_1]))))))), ((((!(((/* implicit */_Bool) arr_0 [i_2] [i_1])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) : (var_14)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_11);
    var_22 = ((/* implicit */short) (~(((int) 9366585589445315521ULL))));
}
