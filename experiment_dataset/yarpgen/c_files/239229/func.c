/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239229
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
    var_18 += var_0;
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_9), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */int) var_15)) << (((/* implicit */int) (_Bool)1)))) : (max((var_4), (var_0))))) <= ((((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)5))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_0 [i_0])) % (arr_1 [i_0])))));
            arr_5 [i_0] = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)61))) : (14238494316274143177ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (max((((/* implicit */long long int) (unsigned short)57517)), (arr_8 [i_2]))))))));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */short) arr_2 [i_2]))))), (((((/* implicit */int) (unsigned char)13)) | (((/* implicit */int) (unsigned char)12))))));
    }
}
