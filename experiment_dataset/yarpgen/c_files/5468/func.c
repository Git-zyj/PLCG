/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5468
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_5))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)243)) % (((/* implicit */int) (signed char)-104))))) + (((unsigned long long int) (signed char)-121))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1436943803U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (((/* implicit */int) (signed char)-109)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) + (var_14)))));
        arr_4 [11ULL] = arr_0 [i_0];
        arr_5 [8ULL] [(signed char)3] = ((/* implicit */int) (signed char)126);
    }
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) -522766228))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 14546592719082861046ULL))) || (((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) var_15))))));
    var_20 = ((/* implicit */unsigned int) 5663200962783724476ULL);
}
