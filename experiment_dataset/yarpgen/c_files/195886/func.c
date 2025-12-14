/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195886
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_12 = max(((~((~(var_9))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (-8510875006895489694LL)))), (var_10))));
                    var_13 = ((/* implicit */unsigned short) ((_Bool) (signed char)127));
                    arr_9 [i_2] [i_1] [i_0] [i_2] = (unsigned short)54757;
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) & (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4294967293U)) : (var_0))))) | (var_8)));
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (min((1225937623405156956LL), (-5485988940664846752LL)))))), (((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (unsigned char)234))))) ? (var_8) : (var_8)))));
}
