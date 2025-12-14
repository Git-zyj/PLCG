/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229888
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
    var_12 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)78)) ? (-7975634517531893796LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7943233101567786218ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [(_Bool)1]))) : (3711994249U)))))), (((/* implicit */long long int) (+(var_3))))));
                arr_6 [7U] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0]))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) 582973046U))))) ? (((((/* implicit */_Bool) 2566709644U)) ? (((/* implicit */int) (unsigned short)65179)) : (((/* implicit */int) (signed char)-21)))) : (((/* implicit */int) (short)-22406))));
            }
        } 
    } 
}
