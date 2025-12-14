/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192381
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
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_1 [i_0])))), ((+(((/* implicit */int) arr_1 [i_0])))))))));
        var_20 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))))))));
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (8581545984ULL) : (17600774274659675320ULL)));
            var_24 = ((/* implicit */_Bool) var_8);
        }
        var_25 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)0)) ? (16450720032729565164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [2ULL] [i_2]) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))))))));
        arr_11 [i_2] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_3)))));
        var_26 += (-(13323703682972783451ULL));
    }
}
