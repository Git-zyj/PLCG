/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38488
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1] [i_1] [i_0]) * (arr_2 [i_1] [i_0] [i_0])))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))) : (((((var_16) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_1])) + (12)))))));
                var_18 = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 807545373935520759ULL)))));
                var_19 = min((((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) (short)32761)), (67108863LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */long long int) var_10)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))) == (((/* implicit */int) var_15))))) % (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_1)))))));
}
