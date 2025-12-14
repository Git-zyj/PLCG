/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21039
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-2085907094711146018LL)))) && (((-5122916047608691652LL) != (max((((/* implicit */long long int) var_18)), (-5122916047608691632LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((_Bool) var_1));
            var_22 ^= ((/* implicit */unsigned long long int) (short)-21594);
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -5122916047608691652LL);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_23 -= ((/* implicit */short) (!((((_Bool)1) || (((/* implicit */_Bool) 5122916047608691632LL))))));
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (short)-10991)) ? (-5122916047608691651LL) : (5122916047608691650LL)))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (2085907094711146018LL) : (((/* implicit */long long int) -636918876))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2] [i_2])) && (((/* implicit */_Bool) (short)32762))));
        }
        var_27 = ((/* implicit */short) (+(2085907094711146007LL)));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */int) (short)11944)) % (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (1018788590505968648LL)))) ? ((+(1761720835113030495ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_14)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
}
