/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212868
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
    var_15 = ((/* implicit */long long int) min((((signed char) 2748637404U)), (((/* implicit */signed char) (_Bool)1))));
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)65535)), (-146820736)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)0)))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_2 [i_2]))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_9))))))))));
    var_20 = ((/* implicit */signed char) 1749937114);
}
