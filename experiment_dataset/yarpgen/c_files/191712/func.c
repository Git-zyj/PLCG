/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191712
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
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)107)), (5049861788965923122LL)));
    var_17 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (min((5670347688903429636LL), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (short)17065))) / (-9122034357782592026LL))), (arr_1 [i_1]))) : (((((/* implicit */long long int) var_3)) / (arr_3 [i_1])))));
                var_18 = (!(((/* implicit */_Bool) arr_2 [i_1])));
            }
        } 
    } 
    var_19 |= ((/* implicit */short) (+(-1)));
}
