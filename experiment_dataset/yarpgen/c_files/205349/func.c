/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205349
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
    var_18 = ((/* implicit */signed char) ((var_0) + (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */short) (-(2161662447U)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1 - 3] [i_2] [i_0] = ((/* implicit */unsigned char) 3697708039U);
                        var_19 *= ((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) 17881903491828008423ULL)) ? (((/* implicit */unsigned long long int) 2133304849U)) : (var_5))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_5 [i_1 - 3] [i_2] [i_3])), (arr_8 [i_0] [i_1] [(short)8] [i_3 - 2]))))))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_1))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (2161662463U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2133304855U)))))) : (min((((/* implicit */unsigned int) (unsigned char)87)), (var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)1068)) << (((((/* implicit */int) (short)1068)) - (1061)))))) ? (((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned int) var_0)) : (2133304848U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)191)))))))));
                    }
                }
            } 
        } 
    } 
    var_21 = 1203895789U;
}
