/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194754
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
    var_15 = ((/* implicit */unsigned short) ((67108352U) + (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */int) (signed char)-19)), (15360))) > (((/* implicit */int) var_5))))))));
    var_16 = ((/* implicit */unsigned long long int) (signed char)3);
    var_17 = ((/* implicit */unsigned int) (signed char)-3);
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)209))) ^ (-9223372036854775806LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_2 - 1])) ? (arr_5 [i_2 - 3] [i_2 - 3]) : (((/* implicit */int) (signed char)-47)))) * ((-(((/* implicit */int) (signed char)-1))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) var_5)) >> (((/* implicit */int) min((var_9), (((/* implicit */short) var_10)))))))));
                    arr_7 [i_0] [(unsigned short)12] [i_2] = ((/* implicit */signed char) min(((+(((/* implicit */int) min((((/* implicit */short) var_0)), (arr_4 [(short)1] [(_Bool)1] [i_2])))))), (((((/* implicit */int) arr_4 [(unsigned char)7] [i_2 - 3] [i_2])) - (((/* implicit */int) min((((/* implicit */short) (signed char)-9)), ((short)11591))))))));
                }
            } 
        } 
    } 
}
