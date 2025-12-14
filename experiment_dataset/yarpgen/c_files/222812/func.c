/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222812
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))), ((-(((/* implicit */int) var_1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (short)17129)) == (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) (short)-16)))))))));
                    var_18 = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1] [i_0 + 1])) ? (arr_2 [i_0 - 3] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))))))) & (var_4)));
                    arr_8 [i_0 - 2] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (short)-25)), (var_4)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((max((max((6679618575452516164ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3176515466U)))))), (((/* implicit */unsigned long long int) var_13))));
}
