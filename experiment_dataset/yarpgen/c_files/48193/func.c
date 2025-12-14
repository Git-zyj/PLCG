/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48193
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
    var_12 -= ((/* implicit */int) (~(10082691296881692913ULL)));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (+(((unsigned int) var_11)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (((unsigned int) (unsigned char)231)))) < ((-(var_1)))));
        arr_3 [i_0] = min((((/* implicit */unsigned int) arr_1 [i_0])), (max((((arr_1 [i_0]) ? (((/* implicit */unsigned int) 2147483642)) : (var_1))), (((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_14 = min((((arr_4 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62493))) : (((((/* implicit */unsigned long long int) var_3)) & (5972501868899684308ULL))))), (((/* implicit */unsigned long long int) (_Bool)1)));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_15 = arr_4 [i_3];
                        var_16 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) / (((/* implicit */int) arr_8 [i_1] [6]))))), (((((/* implicit */_Bool) 2402096954U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))));
                    }
                } 
            } 
        } 
        arr_12 [4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) ? (((1892870345U) | (((/* implicit */unsigned int) -553950388)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))));
    }
}
