/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32194
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
    var_20 ^= ((/* implicit */long long int) 418054756276522162ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 7262226848005283687LL)) ? (418054756276522162ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_1])))) % (((/* implicit */unsigned long long int) arr_2 [i_1 + 1] [i_1 + 1] [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_3 [i_1]) / (((/* implicit */unsigned long long int) var_18)))), (((/* implicit */unsigned long long int) ((unsigned int) var_19)))))) ? (max((min((418054756276522162ULL), (((/* implicit */unsigned long long int) (short)30454)))), (min((arr_3 [(unsigned short)1]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) max((arr_2 [(short)9] [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 + 2] [i_1 - 2] [i_1 - 1]))))));
            }
        } 
    } 
}
