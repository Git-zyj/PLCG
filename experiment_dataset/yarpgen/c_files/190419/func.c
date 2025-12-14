/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190419
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
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)31)) < (((/* implicit */int) ((2199023255551LL) <= (2199023255572LL))))))), (2199023255528LL)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)93))))))), (((((/* implicit */_Bool) (unsigned short)0)) ? (2199023255551LL) : (((/* implicit */long long int) 119823014))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max(((short)32767), (((/* implicit */short) var_3))));
                arr_5 [i_1] [i_1] [(unsigned char)7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */long long int) var_17)) : (2199023255551LL)))) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (var_2)))))) && (((/* implicit */_Bool) ((((var_4) == (((/* implicit */long long int) ((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65490))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)14)) == (((/* implicit */int) var_11)))))))))));
                arr_6 [i_1] [i_0 - 3] [i_0 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65486)) ? (((/* implicit */int) var_14)) : (var_10))))));
            }
        } 
    } 
}
