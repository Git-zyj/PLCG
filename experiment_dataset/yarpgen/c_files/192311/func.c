/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192311
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) / (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)3299)), (-470365256)))) ? (min((((/* implicit */int) (short)3)), (470365286))) : (((/* implicit */int) ((unsigned char) -1397971836)))))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -470365296)) ? (max((6633275241390536666LL), (((/* implicit */long long int) -470365256)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) > (var_4))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_2] = (((_Bool)1) ? (((((/* implicit */_Bool) var_1)) ? (((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32743))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (470365295)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_5 [i_0 - 1] [i_1] [i_2]), (((/* implicit */long long int) var_3))))))));
                    arr_8 [i_0 + 1] [(signed char)6] [i_2] [(signed char)6] = ((/* implicit */_Bool) ((signed char) ((signed char) arr_1 [i_1 + 1] [i_1 + 1])));
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(470365296)))) && (((/* implicit */_Bool) (-(max((((/* implicit */long long int) (unsigned short)0)), (arr_5 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~((-(((int) var_7)))))))));
}
