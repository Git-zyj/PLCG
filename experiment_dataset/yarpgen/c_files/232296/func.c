/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232296
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) max((13695113739245865568ULL), (((/* implicit */unsigned long long int) (~(arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) max((min((min((-4604650325961131768LL), (((/* implicit */long long int) -1067475710)))), (((/* implicit */long long int) arr_1 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) | (((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - (2959109998619237467LL))))))))))));
    }
    var_14 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (~(12525608859680477919ULL)))) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (74401125604910589ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
}
