/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219039
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) & (var_11))))))) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (short)32747)))) > (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_9))))))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [14U])) ? (arr_2 [i_1 - 1]) : (arr_2 [i_0])))));
                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)132))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)176)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((unsigned char) (short)30729)))));
}
