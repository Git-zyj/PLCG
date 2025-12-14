/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203937
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
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))), (min((min((var_6), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2011814406U)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((int) (~(((((/* implicit */_Bool) 690532988)) ? (690532987) : (((/* implicit */int) var_7)))))));
                    arr_8 [(_Bool)1] [(_Bool)1] &= min((min((8024837347798028080ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 690532998)) || (((/* implicit */_Bool) 222092860U))))))), (((/* implicit */unsigned long long int) min((((var_7) ? (var_5) : (((/* implicit */long long int) 690532993)))), (((/* implicit */long long int) 690533002))))));
                    var_14 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0]) : (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) var_9))))) : (((unsigned long long int) 12978031115096654702ULL)))));
                }
            } 
        } 
    } 
}
