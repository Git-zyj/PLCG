/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247671
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
    var_17 = ((/* implicit */int) max((((((/* implicit */int) var_11)) > (((/* implicit */int) ((((/* implicit */_Bool) -1345717085)) && (((/* implicit */_Bool) 1048568))))))), (var_16)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)54248))));
                var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-11)))) && (((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1]))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (1665176115) : (((/* implicit */int) (unsigned short)44097))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_0 [i_0] [i_1]))))) : (-1665176131)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) min((arr_2 [(_Bool)1] [(_Bool)1] [i_0]), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : ((~(((/* implicit */int) (unsigned char)252))))))));
            }
        } 
    } 
}
