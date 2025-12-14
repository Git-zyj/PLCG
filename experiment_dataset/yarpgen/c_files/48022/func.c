/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48022
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
    var_17 = 140737488355327ULL;
    var_18 ^= ((unsigned long long int) ((unsigned long long int) ((unsigned long long int) 4611686018427387903ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_4 [i_0]) : (arr_4 [i_0]))) << (((min((max((2641975523816450292ULL), (2849742499829863149ULL))), (max((var_12), (15804768549893101323ULL))))) - (2849742499829863138ULL))));
                arr_7 [i_0] = ((max((min((arr_0 [i_0]), (arr_5 [i_0] [i_1]))), (((((/* implicit */_Bool) var_9)) ? (15804768549893101332ULL) : (15804768549893101323ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) * (var_12)))))))));
                var_20 = ((unsigned long long int) ((unsigned long long int) (~(var_5))));
            }
        } 
    } 
}
