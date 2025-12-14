/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216413
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
    var_10 = ((/* implicit */short) 2150182567U);
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (-(var_5))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0 - 4])), (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [3LL] [i_0 - 4]))) : (var_6)))));
        var_12 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) + (((/* implicit */int) (unsigned short)59735))))) ? (((((((/* implicit */_Bool) (unsigned char)0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 4] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 4] [i_0 - 4])) : (((/* implicit */int) var_9)))))));
        var_13 = ((/* implicit */signed char) (-(arr_0 [i_0 - 1])));
        var_14 = ((/* implicit */signed char) var_7);
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_12 [i_3] [i_1 - 3] [i_1 - 2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(min((3310620296U), (((/* implicit */unsigned int) (_Bool)0))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((0LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2])))) ^ (var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((arr_7 [i_0] [(unsigned char)11] [i_2] [i_3]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 1] [i_2] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)5993))) : (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        var_16 = ((/* implicit */long long int) (short)32767);
                    }
                } 
            } 
        } 
    }
}
