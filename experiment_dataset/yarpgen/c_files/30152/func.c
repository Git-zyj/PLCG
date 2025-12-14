/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30152
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1587366003U)) ? (644061375966963579LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138)))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (arr_1 [i_0 + 2])))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) ((short) var_0)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) var_2);
                        arr_14 [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) 3932450824U)) | ((-9223372036854775807LL - 1LL)))))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (arr_7 [i_1] [i_1 + 1] [i_1]))))));
                        arr_15 [i_0] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6)))))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) arr_12 [i_3] [i_1] [i_3])))), (((/* implicit */int) (signed char)127)))))));
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (1795876751) : (((/* implicit */int) var_13))))) ? ((+(arr_10 [i_0]))) : (((arr_7 [10ULL] [i_1] [i_1]) + (2009797145U)))))) : (((((/* implicit */_Bool) 8569371913904019545ULL)) ? (max((((/* implicit */unsigned long long int) arr_5 [i_0])), (21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                        arr_16 [i_0 - 2] [(signed char)13] [i_2] [i_3] [i_2 + 1] [i_3] = ((/* implicit */unsigned long long int) 2096896U);
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */short) var_10);
}
