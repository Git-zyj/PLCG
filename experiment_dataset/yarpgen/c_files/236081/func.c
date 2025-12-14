/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236081
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
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((_Bool) arr_10 [i_2] [i_2] [i_2])))));
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29792))) | ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (arr_9 [i_4] [i_4] [i_4]))) - (min((((/* implicit */unsigned long long int) arr_6 [i_1])), (arr_17 [i_4])))))));
                                arr_18 [i_0] [i_1] = ((/* implicit */unsigned char) var_3);
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) == (var_13)))), (((var_6) + (((/* implicit */long long int) ((/* implicit */int) (short)14))))))));
                                arr_19 [i_0] [i_4] [i_3] [i_2] [i_1 - 1] [i_1 - 2] [i_0] = arr_16 [i_0] [i_1] [i_2] [(short)4] [i_4];
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((((/* implicit */unsigned int) 2024882766)) > (32736U))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (arr_0 [i_1 - 2]) : (((/* implicit */long long int) arr_4 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4193959069U)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == ((-(14211874805217326792ULL)))))))));
            }
        } 
    } 
    var_22 += ((/* implicit */signed char) var_11);
}
