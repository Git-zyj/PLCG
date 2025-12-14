/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218943
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0 + 1] [i_1 + 1] [i_1] [i_2] = min((max(((-(((/* implicit */int) (_Bool)1)))), ((-(var_2))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_3 [(unsigned short)5] [i_1 + 1])) : (var_14))));
                    arr_7 [2ULL] &= ((/* implicit */long long int) ((((unsigned long long int) arr_1 [i_0 + 1])) != (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)65256)) : (-1352717013))) == ((((-2147483647 - 1)) / (((/* implicit */int) (unsigned short)279)))))))) / (var_12))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_17))));
}
