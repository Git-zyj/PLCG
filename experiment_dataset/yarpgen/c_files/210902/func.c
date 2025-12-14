/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210902
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */long long int) max((arr_2 [i_2] [(unsigned short)1]), ((unsigned short)55664)));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_1]), (((/* implicit */long long int) (unsigned short)23514))))) && (((/* implicit */_Bool) (unsigned short)42021))));
                    var_18 &= ((/* implicit */signed char) (((+(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_8)))))) >> (((((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_0 [i_1]))) + (21318LL)))));
                    arr_11 [i_0] [(unsigned short)11] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (-(((/* implicit */int) max((var_6), ((unsigned short)23514)))))))));
                    var_19 = ((/* implicit */int) arr_1 [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_20 |= -2300435112414308087LL;
}
