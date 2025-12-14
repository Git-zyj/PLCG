/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32886
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (2147483647) : (((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) var_15))));
    var_20 = max((((/* implicit */long long int) var_1)), (var_5));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_4 [i_0] [i_2]))))), (arr_0 [i_1 - 3] [i_1 + 2])))) : (((arr_9 [i_2] [i_2 - 1]) - (arr_9 [i_2] [i_2 - 1])))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_15)), ((~(arr_7 [i_2] [i_2] [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_5)))) : ((~(max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (var_16)))))));
                }
            } 
        } 
    } 
}
