/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23745
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
    var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */long long int) -1429192239)) : (var_1))) : (((/* implicit */long long int) var_0))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_1 [i_0] [i_0])))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_0 [i_0] [i_0]))))));
        var_16 -= ((((/* implicit */_Bool) ((long long int) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4659288759443380946LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6824219262840247128LL)) ? (((((/* implicit */int) (signed char)123)) | (((/* implicit */int) (unsigned short)12792)))) : (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-123)) : (2147483647)))))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (10252234972345307956ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]))) ? ((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) (_Bool)0))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */int) arr_3 [i_1] [i_1])) / (((/* implicit */int) arr_2 [i_1] [i_1])))) : (((/* implicit */int) (signed char)-123))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))) && (((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))))))));
    }
}
