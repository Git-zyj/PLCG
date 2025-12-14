/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3806
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_11 &= ((((/* implicit */_Bool) max((var_6), (((678029575094931696LL) >> (((-5352340951822334719LL) + (5352340951822334719LL)))))))) ? ((-(arr_5 [i_2 + 1] [i_2 + 1]))) : (max(((~(-5352340951822334719LL))), (-4955583568082981711LL))));
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((var_1), (9223372036854775807LL))) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775805LL) <= (arr_2 [i_2 - 1] [i_0 + 2]))))) : ((+(9223372036854775807LL))));
                }
            } 
        } 
    } 
    var_13 -= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((var_5) | (-1725726359821433147LL))) : (((-2423022498139835153LL) + (var_2)))))) ? (min((8183623638503828054LL), (4917739459176065927LL))) : (((((/* implicit */_Bool) 5628282798364324513LL)) ? (max((var_6), (var_4))) : (max((var_5), (3633526925739766766LL))))));
}
