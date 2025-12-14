/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54275
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) max((var_5), (((/* implicit */short) var_13))))) & (((/* implicit */int) (short)-28501))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6560311431261384028ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (3798616176090914253LL)))))) < (((((/* implicit */_Bool) (unsigned short)62786)) ? (((/* implicit */unsigned long long int) 2086409133)) : (0ULL)))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 3])) && (((/* implicit */_Bool) 1532749377))));
            }
        } 
    } 
}
