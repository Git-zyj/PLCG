/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227582
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
    var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65535))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) 2851134287U);
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (arr_5 [i_0] [i_1] [2LL]))), (((/* implicit */unsigned long long int) arr_1 [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) || (((/* implicit */_Bool) ((unsigned short) 1443833014U)))))))));
                    var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)0))))) : (1443833008U)))), ((+(max((((/* implicit */unsigned long long int) arr_4 [i_0])), (11357760307741922585ULL)))))));
                    arr_9 [i_0] [i_0] = min(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0)));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (arr_5 [(signed char)14] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50024)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) & (((/* implicit */int) (unsigned short)0))))) : ((+(arr_5 [i_0] [i_0] [i_0])))))) ? (2851134303U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */short) (+(-2147483642)));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1795566445U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)7))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) -2831382805193952470LL))));
    }
    var_24 &= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (-2147483647 - 1))))))))));
}
