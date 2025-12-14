/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241924
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
    var_15 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) 16868586247971939025ULL);
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)0)), (arr_5 [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))))) : (((/* implicit */unsigned int) -1982702468)))));
            }
        } 
    } 
    var_16 = min((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) 12469592401103082871ULL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_8)), (var_1))))))));
    var_17 |= ((/* implicit */unsigned int) ((long long int) (!(var_2))));
}
