/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22744
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
    var_14 -= ((((/* implicit */int) (unsigned char)54)) * (((/* implicit */int) (!(((((/* implicit */_Bool) 101777669)) || (((/* implicit */_Bool) 1048124698))))))));
    var_15 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))))) ? (((unsigned int) -2275531406336681614LL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
                arr_9 [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)239))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_6 [i_0] [11])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8897)) ? (((/* implicit */int) arr_5 [i_1] [i_0])) : (((/* implicit */int) var_0))))) : (((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5))))));
                arr_11 [i_0] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) var_1))) / (6886719613434001003LL))), (((/* implicit */long long int) max((min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned short) var_8)))), (((/* implicit */unsigned short) (signed char)10)))))));
            }
        } 
    } 
}
