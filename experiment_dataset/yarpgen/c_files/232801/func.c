/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232801
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))) | (((/* implicit */int) max((var_8), (((/* implicit */unsigned char) var_2))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12426)) ? (((/* implicit */int) (short)12434)) : (((/* implicit */int) (unsigned short)0))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) ((var_12) >= (((/* implicit */int) (short)12434))))) : (((/* implicit */int) max((arr_9 [i_1] [i_0] [i_2]), (((/* implicit */short) arr_12 [i_4] [i_1] [i_0])))))))) == (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [7LL])) ? (87520950) : (((/* implicit */int) var_2))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9182))) ^ (18446744073709551611ULL)))))));
                                arr_13 [i_0] [i_1 + 1] [i_1] [i_3 + 2] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) ((unsigned int) 5ULL))) || (((((/* implicit */int) arr_9 [i_1] [i_1 - 3] [i_2])) != (((/* implicit */int) arr_9 [i_1] [i_4] [i_2]))))))));
                                arr_14 [i_0] [i_1] [i_0] [i_3 + 2] [i_0] = ((/* implicit */long long int) ((int) min((((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_3] [i_4]))) : (var_18))), (((/* implicit */unsigned int) max((arr_8 [i_0] [i_2] [i_3] [i_4]), (((/* implicit */unsigned char) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]);
                    arr_16 [i_1] [i_1] [i_2 - 2] = arr_3 [i_1] [i_2 - 4];
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) min((var_6), (max((min((((/* implicit */unsigned long long int) var_11)), (5747590394054746375ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0))))))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 87520969)) ? (((((/* implicit */int) (signed char)-94)) & (((/* implicit */int) (unsigned char)218)))) : (((((/* implicit */_Bool) (unsigned short)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)-8989)))))) : (((/* implicit */int) var_15))));
}
