/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209793
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */_Bool) 8514614486175094985ULL);
                    arr_11 [i_0] [i_1 - 4] [i_1] [i_2] = ((/* implicit */unsigned long long int) (signed char)-126);
                    arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1 - 4] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (arr_2 [i_1 - 1] [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36479)))))));
                    arr_13 [i_2] [i_0] [i_0] = var_10;
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned int) var_8)) : (3249135983U))), (((/* implicit */unsigned int) var_8)))))))));
}
