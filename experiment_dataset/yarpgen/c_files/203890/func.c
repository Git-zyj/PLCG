/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203890
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (12878624342737539229ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)127)))))) > (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), ((-(((/* implicit */int) (signed char)127)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_9);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((arr_5 [i_1]), (((/* implicit */unsigned int) var_15)))) / (((/* implicit */unsigned int) arr_6 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1])))))) : (max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_11))), (((/* implicit */unsigned int) var_10))))));
        var_19 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 12878624342737539217ULL)))) * (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)6308)))) / (((((/* implicit */long long int) 518457269)) | (var_0)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-127))));
        var_20 = ((/* implicit */unsigned char) min((((unsigned long long int) 12878624342737539221ULL)), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) ((long long int) min(((unsigned char)239), (((/* implicit */unsigned char) (signed char)-1)))));
        arr_11 [(short)24] &= ((/* implicit */signed char) (((-(((/* implicit */int) arr_9 [i_2] [i_2])))) * (((((/* implicit */int) arr_9 [i_2] [i_2])) / (((/* implicit */int) var_13))))));
    }
}
