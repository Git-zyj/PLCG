/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243209
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (((((/* implicit */_Bool) (unsigned short)48317)) ? (min((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) 35357694U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-81))))))))))));
                arr_4 [i_0] &= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((unsigned char) (_Bool)1))))) * (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)56051))))) >= (((/* implicit */int) var_11))));
}
