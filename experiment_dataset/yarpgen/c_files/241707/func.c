/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241707
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
    var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)15)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)1))))) % (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (859504535U)))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (_Bool)1);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (((+((-(((/* implicit */int) (unsigned char)0)))))) - ((-((+(((/* implicit */int) (signed char)26))))))));
    var_22 = ((/* implicit */int) var_9);
}
