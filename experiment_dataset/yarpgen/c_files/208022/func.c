/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208022
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */signed char) min((var_18), (var_4)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), ((~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [3U]))))))));
                var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (+(21)))) : (arr_2 [i_1])))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)32463)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_1 [(short)10])))) : (((((/* implicit */_Bool) (unsigned short)25812)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-1)))))))));
                arr_6 [(short)11] [(short)11] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((21) + (((/* implicit */int) (unsigned short)33073)))))))), (((((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_1]) | (((/* implicit */long long int) 1358191533U))))) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-55))))))));
            }
        } 
    } 
}
