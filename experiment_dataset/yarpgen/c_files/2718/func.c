/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2718
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_1] [i_1] [i_1 - 1]), (arr_2 [i_1] [i_1] [i_1 - 1])))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) 214860527905409650LL)) : (12349696631942298517ULL))))));
                var_20 = ((/* implicit */unsigned short) ((unsigned char) max((arr_2 [i_1] [i_1 - 1] [i_1 - 1]), (arr_2 [i_1] [i_1 - 1] [i_1 - 1]))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_1 - 1]), (arr_2 [i_1] [i_1 - 1] [i_1 - 1])))) ? (((((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_1])), (arr_1 [i_0])))) & ((+(-146912317712243334LL))))) : (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */int) ((arr_1 [(unsigned char)2]) <= (((/* implicit */int) var_2))))))))));
            }
        } 
    } 
    var_21 = var_19;
}
