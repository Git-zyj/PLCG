/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22256
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_8))));
    var_19 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 6; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) min((var_8), ((signed char)-11)))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_3] [i_4]))))) | (((((/* implicit */_Bool) ((short) var_14))) ? (arr_5 [4] [i_4 - 1] [4] [i_3 - 1]) : (((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))))))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)79)), (((arr_6 [i_3 + 3] [i_1] [i_0]) | (((/* implicit */int) (short)32767))))));
                                var_20 ^= ((/* implicit */short) min((min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), (var_3))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (9624721565218875348ULL))))));
                                arr_15 [(_Bool)1] [i_1] [i_2] [i_3] [(short)2] [i_2] = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)176)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)184))) : (2881677185750705789ULL)))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0] [i_0]))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2])))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0]))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_1))))) | (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))), ((~(18446744073709551615ULL))))))));
                    arr_16 [i_0] = ((/* implicit */int) var_7);
                }
            } 
        } 
    } 
}
