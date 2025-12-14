/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47813
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_12);
                    arr_9 [i_0] [i_0 + 1] [i_0] = ((4503599627370495LL) + (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((arr_7 [(_Bool)1]) - (8358163335911813924ULL)))))));
                    arr_10 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)39187)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((signed char) var_4)))));
                    arr_11 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4503599627370496LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_3 [20LL] [(signed char)10])))) ? (arr_3 [i_0 + 1] [i_1]) : (((unsigned long long int) arr_7 [i_2]))));
                    arr_12 [i_0 - 3] [i_0 - 1] [i_2] = ((/* implicit */long long int) ((arr_1 [i_0 - 1]) - (arr_1 [i_0 - 1])));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0 - 2]) : (arr_4 [i_0 - 2])));
    }
    var_13 = ((/* implicit */long long int) ((_Bool) (+(min((-291817959271424891LL), (4503599627370495LL))))));
    var_14 = ((/* implicit */unsigned short) var_11);
    var_15 |= ((/* implicit */long long int) var_5);
}
