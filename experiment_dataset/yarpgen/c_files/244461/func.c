/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244461
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_1 [i_0 - 1] [i_0 - 1]))) != ((+(((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 4]))))));
                    var_10 = ((unsigned long long int) (!(((/* implicit */_Bool) (-(arr_2 [i_2] [i_1]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((long long int) var_7)) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */_Bool) ((72057594037911552ULL) >> (((((/* implicit */int) var_3)) + (107)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_4))))) : (min((var_0), (((/* implicit */unsigned long long int) var_6))))))));
    var_12 = ((/* implicit */long long int) var_3);
    var_13 *= ((/* implicit */unsigned long long int) var_6);
}
