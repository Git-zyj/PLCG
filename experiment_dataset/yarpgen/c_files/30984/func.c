/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30984
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 *= (_Bool)1;
                var_19 |= ((/* implicit */unsigned int) ((((arr_2 [i_0 + 4] [(unsigned short)8]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))) << (((((/* implicit */int) arr_2 [i_1 - 1] [(short)12])) & (((/* implicit */int) arr_2 [i_0] [0U]))))));
            }
        } 
    } 
    var_20 = max((((/* implicit */long long int) var_8)), (min((min((((/* implicit */long long int) var_7)), (-3343520932422788560LL))), (((/* implicit */long long int) var_13)))));
}
