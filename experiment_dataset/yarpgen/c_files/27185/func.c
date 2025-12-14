/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27185
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
    var_19 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) arr_1 [i_0] [i_1]);
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */int) ((unsigned short) arr_3 [i_2] [i_1] [i_2]))) / (742066306))), (arr_1 [i_0] [i_0])));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            {
                var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_3 [i_3] [i_4 + 3] [i_4 - 1])) ? (((/* implicit */long long int) arr_3 [i_4] [i_4 + 3] [i_4 - 1])) : (var_9))), (((/* implicit */long long int) (-(arr_3 [(short)8] [i_4 + 3] [i_4 - 1]))))));
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)-87)) ? (742066306) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) arr_8 [i_6] [i_6] [i_5] [i_3]))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_3])) | (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) var_8);
}
