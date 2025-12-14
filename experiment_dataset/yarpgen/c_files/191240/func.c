/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191240
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
    var_18 = ((/* implicit */signed char) (unsigned short)255);
    var_19 = ((/* implicit */long long int) 3968);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) 72057044282114048ULL)) ? (((/* implicit */int) (_Bool)0)) : (3968)));
                var_20 = ((unsigned long long int) ((((/* implicit */int) var_2)) & (min((3970), (-3950)))));
                arr_6 [i_1 + 1] = 9122151749730021466ULL;
                var_21 *= ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) (unsigned char)167)) && (((/* implicit */_Bool) (unsigned short)0)))) ? (((4206098678755482181LL) << (((((/* implicit */int) (unsigned char)128)) - (128))))) : (var_8))));
                arr_7 [i_1 + 2] [(short)0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-7)), (var_0))))));
            }
        } 
    } 
}
