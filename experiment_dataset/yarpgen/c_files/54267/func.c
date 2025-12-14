/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54267
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [(short)13] = ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (5464205732415317097ULL))), (((/* implicit */unsigned long long int) min((arr_4 [i_0]), (arr_4 [i_2]))))));
                    var_19 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2]))))) * (arr_3 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                {
                    arr_17 [i_3] [i_4 + 4] = ((/* implicit */unsigned short) arr_10 [i_3]);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-41)) ? (1611994010U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3])))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) 9223372036854775798LL)) ? (var_14) : (10488888123792427134ULL))))))))));
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) arr_0 [i_3])), (max((var_1), (((/* implicit */long long int) arr_14 [i_3] [i_4])))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (max((var_16), (((/* implicit */unsigned long long int) 196608)))))))));
}
