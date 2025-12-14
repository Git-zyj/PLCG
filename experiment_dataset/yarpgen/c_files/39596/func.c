/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39596
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
    var_11 = (((-(-5420385546346149876LL))) == (((/* implicit */long long int) min((((/* implicit */int) var_10)), (((((/* implicit */int) var_0)) >> (((5420385546346149875LL) - (5420385546346149855LL)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) arr_4 [i_0]);
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32672)) : (((/* implicit */int) var_10))))))) < (((arr_5 [i_0] [7U] [(short)9]) >> (((4227838259935937242ULL) - (4227838259935937193ULL)))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) 1298005343U));
            }
        } 
    } 
}
