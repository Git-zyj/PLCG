/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27422
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))))), (var_9)));
                var_17 = ((/* implicit */short) ((((/* implicit */int) (((-(37747749119690757ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58218))))))))) == (((/* implicit */int) var_15))));
                var_18 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((min((var_4), (((/* implicit */unsigned long long int) var_12)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3989519009U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U))))))), (346736460)));
                var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 346736460)) == (10327153549778654676ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */short) (signed char)-3))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_9))))))), (0U)))));
}
