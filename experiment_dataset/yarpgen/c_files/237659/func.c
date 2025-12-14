/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237659
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
    var_18 = ((/* implicit */long long int) (unsigned short)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 ^= ((signed char) (signed char)-18);
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)113)))))));
        var_21 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_11 [(signed char)1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (-2147483642) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_3]))) : (max((arr_7 [i_1] [i_3]), (arr_7 [i_1] [i_1])))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_5 [i_1]) : (((/* implicit */int) (unsigned short)7))))), (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (-2147483642) : (((/* implicit */int) (unsigned short)5))))) : (((((/* implicit */_Bool) (signed char)18)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65523))))))))))));
                    var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (arr_7 [i_1] [i_2]))) | (((((/* implicit */_Bool) (short)-21964)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)162)))))));
                }
            } 
        } 
        arr_12 [i_1] = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]);
    }
}
