/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247416
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
    var_10 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (var_9) : ((-(var_2)))))) ? ((+(var_5))) : (((((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (_Bool)1)) : (var_4))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)73))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] = (+(((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])) ? (2950326499U) : (var_1))));
                var_11 = ((/* implicit */int) ((((/* implicit */_Bool) 2948954338U)) ? (((((unsigned int) arr_3 [i_0] [i_0])) << (((var_1) - (2129787139U))))) : (max((arr_2 [i_0] [i_1 + 1] [i_0]), (((/* implicit */unsigned int) var_5))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_5 [i_1 - 2] [i_1 + 1]) : (((arr_3 [i_0] [i_1 - 2]) ? (arr_5 [i_1 + 1] [i_0]) : (var_5))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) (signed char)-81);
    var_13 = ((((/* implicit */int) (!(((/* implicit */_Bool) -2047556980))))) < (var_5));
}
