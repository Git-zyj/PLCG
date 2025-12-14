/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40535
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
    var_13 = ((/* implicit */_Bool) ((min((var_4), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) (_Bool)1))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((min(((unsigned char)254), (((/* implicit */unsigned char) var_9)))), (max((((/* implicit */unsigned char) var_9)), (var_1)))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_11)) * ((-(((/* implicit */int) var_1))))));
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)202)) + (((/* implicit */int) (short)-1)))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned int) min((var_7), (((((/* implicit */_Bool) 1218391660U)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_8)), (var_4))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) var_7)) | (var_12))), ((~(var_12))))))));
}
