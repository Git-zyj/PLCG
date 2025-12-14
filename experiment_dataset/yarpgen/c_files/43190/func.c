/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43190
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
    var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))), (((18446744073709551610ULL) >> (((-9015127617245232788LL) + (9015127617245232831LL)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) var_9);
                    var_13 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [i_0]))))) % (min((arr_2 [i_0] [i_2]), (((/* implicit */unsigned long long int) (short)-24757))))))));
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) ^ (((((/* implicit */_Bool) 448311998703332155LL)) ? (-9015127617245232761LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                }
            } 
        } 
    } 
}
