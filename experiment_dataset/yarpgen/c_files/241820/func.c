/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241820
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = min((((/* implicit */unsigned long long int) -1222344422)), (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5492))))));
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_1 [i_0] [(signed char)10]), ((-(((/* implicit */int) (signed char)54)))))))));
        var_18 -= ((/* implicit */unsigned long long int) (signed char)64);
    }
    var_19 += ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) ((-4222784886237086955LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)52)))))) || (((/* implicit */_Bool) 7774039881046001745ULL))))), (min(((signed char)-54), ((signed char)-65)))));
    var_20 = ((/* implicit */_Bool) (unsigned short)23157);
    var_21 = ((/* implicit */int) (signed char)79);
}
