/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205464
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
    var_17 |= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) ((signed char) (_Bool)0))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) arr_3 [i_1] [8U] [i_1]);
                var_19 = ((/* implicit */unsigned long long int) (-(max(((+(-1LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_3 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_7);
    var_21 = ((/* implicit */signed char) ((1572846724358113463LL) & (-2688398137910142050LL)));
}
