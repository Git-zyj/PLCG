/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196775
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_0);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0]) | (arr_0 [i_0 + 2])))) ? ((-(((/* implicit */int) (signed char)-108)))) : (((((/* implicit */int) (signed char)107)) & (((/* implicit */int) (signed char)125))))));
        arr_4 [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-108)) ? (((((/* implicit */int) (signed char)107)) | (((/* implicit */int) max(((signed char)93), ((signed char)109)))))) : (((/* implicit */int) (((-(arr_1 [5U]))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122)))))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_6))));
        var_20 = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) (signed char)108)))));
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) var_14);
        var_22 = ((/* implicit */unsigned int) var_17);
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_8 [i_2] [i_2]), (min((((/* implicit */signed char) var_13)), ((signed char)102)))))) ? (((((/* implicit */_Bool) (signed char)93)) ? (((unsigned int) (signed char)107)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) <= (arr_7 [(signed char)1] [8LL])))))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) var_18);
    }
    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))));
}
