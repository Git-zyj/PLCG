/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219471
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
    var_16 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)82)) ? (var_10) : (((((/* implicit */_Bool) 14533996044450213071ULL)) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (signed char)-83)))))), (((((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_12)) + (157))))) & (((/* implicit */int) var_0))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_0))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 3]))) : (arr_0 [i_0 - 3] [i_0 - 2])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 - 3] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            for (unsigned short i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) - (((/* implicit */int) (signed char)-91))))) ? (((/* implicit */int) max((arr_11 [(signed char)0] [(signed char)16] [6U] [20]), (((/* implicit */short) var_0))))) : (((/* implicit */int) (signed char)-99)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)82)) >> (((1740499426U) - (1740499396U)))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */unsigned int) (-(((unsigned long long int) (signed char)-94))));
    }
}
