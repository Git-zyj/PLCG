/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235059
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
    var_12 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */long long int) -2062535837)) : (((((var_5) + (9223372036854775807LL))) << (((var_10) - (25399717))))))))));
                        arr_9 [15LL] [(_Bool)1] [6ULL] [i_3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_0] [0U] [i_3] [i_2 - 1] [i_2])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [7LL] [i_1 - 2] [7LL]))))) : ((+(arr_1 [i_0])))));
                        arr_10 [i_0] [i_1] [i_3] [13] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_2 + 1] [i_3])) : (((/* implicit */int) (unsigned short)7))));
                    }
                } 
            } 
        } 
        var_14 -= ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */int) var_6)));
        var_15 = ((/* implicit */unsigned char) ((var_7) ? (((var_1) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-43))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
    }
}
