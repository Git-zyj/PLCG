/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203193
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((int) max((arr_0 [i_0]), (arr_0 [i_0]))));
                arr_5 [i_0] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)118))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (4294967289U))))))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (164389113) : (((/* implicit */int) arr_3 [0ULL] [(unsigned char)10] [i_1]))))));
                arr_6 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_0])))) + (min((((/* implicit */int) (signed char)118)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (signed char)127))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) (_Bool)1);
    var_13 = ((/* implicit */long long int) ((unsigned long long int) (+((+(((/* implicit */int) var_11)))))));
}
