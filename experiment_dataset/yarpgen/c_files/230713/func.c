/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230713
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) max((var_2), (-1LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2586365323616407900LL) / (-2586365323616407922LL)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (var_0))) : (var_2)))) : (((var_11) + (((/* implicit */unsigned long long int) var_2))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((((((/* implicit */_Bool) 2586365323616407900LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -2278264559220207082LL)), (var_6)))))) ? (max((((/* implicit */long long int) var_7)), (3252471775115127843LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) < (((/* implicit */int) var_13)))))) > (((arr_2 [i_0 - 1]) / (var_9))))))));
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */int) ((max((-1931190421111709290LL), (var_16))) >= (((/* implicit */long long int) (~(-89184116))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_12) >> (((var_4) - (8521847045367743893ULL)))))) ? (((/* implicit */long long int) 99402624)) : (((((/* implicit */_Bool) 89184138)) ? (arr_6 [i_1]) : (((/* implicit */long long int) -1131380757))))))) ? (70368744177663LL) : (((/* implicit */long long int) max(((+(var_15))), (0))))));
        arr_7 [i_1] [i_1] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (min((99402601), (89184111))) : (var_15)))) > (((4294967293U) * (((/* implicit */unsigned int) -89184116)))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2278264559220207082LL)) ? (((/* implicit */int) var_13)) : (134216704)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1972710558)) || (((/* implicit */_Bool) -5))))))));
        var_20 ^= ((/* implicit */unsigned int) var_11);
        arr_11 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) 1040384)) : (((((/* implicit */unsigned long long int) var_14)) / (3ULL)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_8 [i_2]) : (arr_8 [i_2])));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */int) (+(arr_12 [i_4 + 2])));
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59002))) % (((var_3) * (((/* implicit */unsigned long long int) -1972710558))))));
                    arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) -1LL);
                }
            } 
        } 
    }
    var_24 &= ((/* implicit */long long int) var_13);
}
