/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190741
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
    var_19 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) (short)-4733);
                var_21 = (((~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-5388))) & (arr_0 [i_0]))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) arr_1 [i_1])))) : ((+(((/* implicit */int) (short)8176))))))));
            }
        } 
    } 
    var_22 *= ((signed char) var_1);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (((((((/* implicit */_Bool) (short)-29962)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (13620506793373623597ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
}
