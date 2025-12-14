/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40923
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
    var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */int) (_Bool)0))))));
    var_15 &= ((/* implicit */long long int) 4280747787U);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) != (((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_5)), (var_3)))))));
                    var_17 = ((/* implicit */unsigned long long int) var_5);
                    var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned int) var_1)) : (arr_1 [i_0])));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((((!(((/* implicit */_Bool) var_2)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((var_3) != (((/* implicit */long long int) var_13)))) ? (((/* implicit */long long int) min((var_1), (((/* implicit */int) var_12))))) : (((var_3) & (((/* implicit */long long int) var_1)))))))));
    var_20 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
}
