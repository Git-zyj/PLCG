/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243558
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
    var_20 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (+((-(((((/* implicit */_Bool) var_10)) ? (arr_7 [i_2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */unsigned int) ((12740965810522540568ULL) ^ (10823567622946702136ULL)));
                                var_21 ^= var_5;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 *= ((((((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))))) - (((((/* implicit */_Bool) var_17)) ? (var_18) : (((/* implicit */unsigned long long int) var_15)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3663137447292395598LL)) : (12740965810522540574ULL)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) var_13))))));
}
