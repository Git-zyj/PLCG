/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28313
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */long long int) 4269229811U)), (299966586769544078LL)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) (((((-(7ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) * (min((((/* implicit */unsigned long long int) (-(3558198552U)))), (((((/* implicit */_Bool) -1440295592)) ? (18446744073709551615ULL) : (17995352303432532524ULL)))))));
                                arr_16 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_6 [i_0] [i_1] [i_2]))))))), ((~(arr_2 [i_0 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 4; i_6 < 14; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_11 [i_0] [i_2 - 1] [i_2] [i_5] [i_6 - 3] [i_5 - 1])) + (2147483647))) << (((((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_6 - 4] [i_6 - 3] [i_5 - 1])) + (103))))), (((/* implicit */int) min((arr_11 [i_0] [i_1] [i_2] [i_5] [i_6 - 2] [i_5]), (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))));
                                var_12 ^= max(((+(((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_2 + 2] [i_5] [i_6]))) : (var_6))))), (((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_5]))))), (var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) (-2147483647 - 1));
    var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_4))))));
}
