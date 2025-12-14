/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239645
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((2611556571616044186ULL), (((/* implicit */unsigned long long int) arr_4 [i_0 + 1]))))) ? (((/* implicit */int) ((18446744073692774400ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 4])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)50735)) != (((/* implicit */int) arr_4 [i_0 + 1])))))));
                var_20 &= ((/* implicit */unsigned char) ((unsigned short) ((long long int) arr_4 [i_0 + 2])));
                arr_5 [i_1 + 2] [i_1] [i_1 + 1] &= (short)26328;
                arr_6 [i_0 + 3] [i_0 + 3] [i_0 + 3] = (unsigned char)19;
            }
        } 
    } 
    var_21 += ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(var_2)))), (var_12)));
}
