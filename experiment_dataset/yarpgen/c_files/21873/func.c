/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21873
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
                    arr_6 [i_0] [14] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0] [i_0]);
                    var_20 &= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 1481349282)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) - (((((/* implicit */_Bool) (~(arr_5 [8] [i_2] [i_1] [(signed char)11])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)17] [i_0] [i_2]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_5 [i_0] [i_2] [i_0] [i_0])) : (arr_3 [i_1])))))));
                    var_21 ^= ((/* implicit */unsigned short) max((1481349297), (-1481349291)));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned char) min((((/* implicit */int) var_0)), ((-(((/* implicit */int) (short)32767))))));
    var_23 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) -1481349297)), (((unsigned int) ((_Bool) var_14)))));
}
