/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229546
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(min((var_14), (((/* implicit */unsigned int) var_5))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (signed char)-115))))))) : (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))), (((/* implicit */unsigned long long int) ((unsigned short) var_16)))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (-((-(((unsigned int) var_2)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_14))) ? (min((((/* implicit */unsigned long long int) var_14)), (var_0))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_15))))))) ? (((unsigned long long int) max((var_0), (((/* implicit */unsigned long long int) var_12))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_11)))), ((~(-1196166795))))))));
    var_21 += ((/* implicit */_Bool) ((int) -1196166777));
    var_22 = ((/* implicit */short) var_5);
}
