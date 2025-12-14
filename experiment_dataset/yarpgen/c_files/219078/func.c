/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219078
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
    var_11 = ((/* implicit */signed char) ((max((max((var_9), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) == (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_0] [(unsigned char)7] [i_0])) | (-970083573))) < (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [(short)6] [i_1] [i_0])), (arr_6 [i_0]))))))), (max((var_0), (((/* implicit */unsigned int) ((970083572) / (((/* implicit */int) arr_5 [i_2] [i_2] [i_2]))))))))))));
                    var_13 += arr_4 [i_0];
                }
            } 
        } 
    } 
}
