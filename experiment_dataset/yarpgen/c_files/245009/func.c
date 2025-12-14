/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245009
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? ((~(arr_3 [i_1]))) : (((/* implicit */int) ((signed char) (signed char)-1)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (arr_0 [i_0] [5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) (~(var_12))))));
                var_16 = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) 307069341)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (signed char)-1)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -5549530087002970123LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7861))) : (-7834655247126715966LL))))) && (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_8))), (((((/* implicit */_Bool) 1432433648U)) ? (var_12) : (((/* implicit */int) (short)20672)))))))));
    var_18 -= ((/* implicit */unsigned long long int) var_13);
    var_19 = var_5;
    var_20 = ((/* implicit */short) ((unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (2047U))))));
}
