/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239468
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
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [6ULL] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -1807627393)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 - 2])) : (((/* implicit */int) (unsigned short)6066))))));
                    var_12 -= ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_10)) ? (arr_6 [i_2] [i_2] [i_0] [i_2]) : (((/* implicit */int) var_9)))))), (arr_6 [i_1] [i_1] [i_2] [i_2])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-18510)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)55518)))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 524160)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (short)8755)))) : (945951611)))));
    var_14 = ((/* implicit */int) ((short) (short)-28992));
    var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (68719476608ULL)))) ? (((/* implicit */int) (unsigned short)56888)) : (((/* implicit */int) var_5))))));
}
