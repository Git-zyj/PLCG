/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196448
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
    var_19 = ((/* implicit */_Bool) 9223372036854775807LL);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 &= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [6U])) << (((max((((/* implicit */unsigned int) var_5)), (((arr_4 [i_0] [i_1] [(signed char)13]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-29556))))))) - (3807251577U)))));
                var_21 = ((/* implicit */short) arr_1 [i_0 - 1] [i_1 - 1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) max((14087995403662367991ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
        var_23 = ((/* implicit */_Bool) ((3957707325326498824ULL) & (((/* implicit */unsigned long long int) 592043824U))));
        arr_9 [i_2] = ((/* implicit */unsigned char) max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) arr_6 [i_2])), (arr_7 [i_2] [i_2]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))))))));
    }
    var_24 = var_6;
}
