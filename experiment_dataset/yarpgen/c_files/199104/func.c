/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199104
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) arr_3 [(signed char)0] [(signed char)0])) <= (((/* implicit */int) (short)7)))))));
                var_18 = var_12;
                var_19 |= ((/* implicit */unsigned short) (((~(min((((/* implicit */int) (short)866)), (var_14))))) & (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)205)), ((unsigned short)56771)))) >= (var_14))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) min(((unsigned char)51), (max(((unsigned char)54), (((/* implicit */unsigned char) var_8))))))))));
}
