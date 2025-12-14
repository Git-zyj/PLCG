/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239139
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
    var_14 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (min((var_2), (((/* implicit */unsigned int) var_7)))));
    var_15 = ((/* implicit */_Bool) var_3);
    var_16 -= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)24171))) >= (1345394488U))) ? (var_10) : (max(((~(var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-24170)) != (((/* implicit */int) (short)-25842)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((min((arr_4 [i_0]), (((/* implicit */unsigned int) var_8)))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17755)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1975))) : (var_2)))) ? (((((/* implicit */_Bool) 5277775306311733006LL)) ? (((/* implicit */int) (short)-24171)) : (-453832281))) : (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)24170))) == (arr_4 [i_0])))) : ((-(((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_6)) - (24168)))))))));
            }
        } 
    } 
}
