/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220002
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_10 ^= ((signed char) max((var_9), (((/* implicit */int) ((signed char) var_3)))));
                    var_11 ^= min((((/* implicit */long long int) var_2)), (((((((/* implicit */int) (signed char)100)) >= (((/* implicit */int) (signed char)100)))) ? (arr_1 [i_1 + 2] [i_1 - 2]) : (((/* implicit */long long int) ((var_7) ? (arr_4 [i_0] [(signed char)7]) : (((/* implicit */unsigned int) var_8))))))));
                    var_12 ^= ((/* implicit */int) (short)23869);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) >= (min((155724058), (((/* implicit */int) (signed char)95))))))) : (max((((/* implicit */int) (unsigned char)255)), (155724058)))));
}
