/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23478
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)47963)) : (((/* implicit */int) ((unsigned short) var_9)))));
                var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_6))), (((/* implicit */unsigned long long int) 0U))));
                var_19 = ((/* implicit */unsigned char) (+((+(-253688131)))));
                var_20 = ((/* implicit */long long int) max((max((var_8), (arr_1 [i_0]))), (((arr_1 [i_0]) + (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
                var_21 = ((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (160309043048224151LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 6703376236641098959LL)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((-7533760047102653574LL) + (9223372036854775807LL))) >> (((11097296674002917260ULL) - (11097296674002917213ULL))))))));
    var_23 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_5));
}
