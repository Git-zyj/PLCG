/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24078
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [0ULL])), (min((((/* implicit */int) (signed char)16)), (arr_4 [i_1])))));
                    var_11 -= ((/* implicit */_Bool) -828485400);
                    var_12 -= ((/* implicit */unsigned short) arr_7 [i_0 - 2] [i_1 - 3] [i_1 - 3]);
                    var_13 = ((/* implicit */unsigned long long int) ((short) (~((+(((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2])))))));
                    var_14 -= ((/* implicit */short) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-9870))))))) : (((/* implicit */int) ((unsigned short) var_1)))))));
}
