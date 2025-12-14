/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242911
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
    var_19 = max((((/* implicit */unsigned long long int) 7884188189102448837LL)), (10121502640725936890ULL));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [12] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 6845812730202645441LL)), (8522801455105041586ULL)));
                    arr_10 [i_0] = ((11109832016801650681ULL) | (((/* implicit */unsigned long long int) 726274046)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
    var_21 = (~((~(min((var_18), (((/* implicit */long long int) var_2)))))));
}
