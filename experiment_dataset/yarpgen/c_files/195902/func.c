/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195902
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(min((2216229116U), (((/* implicit */unsigned int) (short)18759))))));
                    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_1] [i_2]))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((int) 2216229116U)))));
                }
            } 
        } 
    } 
    var_16 = 2078738184U;
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((unsigned int) var_6)))) - (((/* implicit */int) var_5))));
    var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((2078738188U), (((/* implicit */unsigned int) var_10))))) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))))), ((!((!(((/* implicit */_Bool) 37371278))))))));
}
