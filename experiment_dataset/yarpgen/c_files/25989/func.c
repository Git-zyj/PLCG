/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25989
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
    var_18 = ((/* implicit */unsigned short) max(((~(var_12))), (((((/* implicit */_Bool) (~(var_3)))) ? ((~(-6733647896478435443LL))) : (((((/* implicit */_Bool) (short)-29458)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10609))) : (8380416LL)))))));
    var_19 &= ((/* implicit */short) 8018344595375884288ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) & (14535670496904029994ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17191847145037241292ULL)) ? (((/* implicit */int) (short)-29458)) : (((/* implicit */int) (short)-10610)))))));
                arr_5 [i_0] [3U] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_1 - 1] [i_1 - 1] [i_0]))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1] [i_0])) ? (arr_3 [i_1 - 1] [i_1 - 1] [i_0]) : (arr_3 [i_1 - 1] [i_1 - 1] [i_0]))) : (min((arr_3 [i_1 - 1] [i_1 - 1] [i_0]), (arr_3 [i_1 - 1] [i_1 - 1] [i_0])))));
            }
        } 
    } 
}
