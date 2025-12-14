/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52717
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) (!(((/* implicit */_Bool) min((2758024587217259167ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_2]))))))))))));
                    arr_6 [i_1] = ((/* implicit */unsigned int) min((arr_2 [i_1 + 3] [13LL]), (((/* implicit */long long int) ((((3928488278U) & (3143587686U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [19]))))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((max((var_15), (((/* implicit */int) var_7)))) >> (((((/* implicit */int) var_14)) - (14733))))) >= (((/* implicit */int) var_14))));
    var_20 = ((/* implicit */long long int) var_0);
    var_21 = ((/* implicit */_Bool) var_4);
}
