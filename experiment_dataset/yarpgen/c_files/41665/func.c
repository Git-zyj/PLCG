/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41665
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
    var_19 = ((/* implicit */short) ((min((min((var_4), (var_8))), (((/* implicit */unsigned int) ((var_15) != (((/* implicit */unsigned int) var_7))))))) * (var_2)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [9ULL] [i_1])) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [(signed char)4] [i_2])))))))));
                    var_21 += ((/* implicit */int) (unsigned short)65535);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [8U] [i_1] [i_2] [i_3] [i_4]))) >= (var_15)));
                                arr_12 [(unsigned char)11] [12] [i_2] [i_2] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)76), (((/* implicit */unsigned char) var_9)))))) + (min((var_0), (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((var_7), (((var_7) - (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_1] [i_0] [(unsigned short)4]))))))), (((((/* implicit */_Bool) arr_11 [i_0] [(short)11] [i_2] [15ULL] [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1030))) : (((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [9ULL] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}
