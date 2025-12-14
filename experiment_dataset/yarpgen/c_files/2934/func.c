/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2934
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
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (-(var_1)))) ? (min((14705434189322518363ULL), (36028797018963968ULL))) : (((((/* implicit */_Bool) 3741309884387033252ULL)) ? (var_7) : (1826007661800636250ULL))))) < (min(((-(var_6))), (var_12)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_0] [i_0] = arr_5 [i_1] [6ULL] [i_2] [i_1];
                    arr_8 [i_0] = arr_6 [i_0];
                }
            } 
        } 
    } 
}
