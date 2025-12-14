/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232265
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
    var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (short)-4561)) : (((/* implicit */int) (signed char)69))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)8)))) : (min((((((/* implicit */_Bool) (short)32767)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((var_9) <= (var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_3] [i_3] [i_2] [i_3] |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-69)))))))) <= (((/* implicit */int) ((((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_3]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 - 1]))))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) arr_2 [i_3] [i_1] [9LL]))));
                            var_18 = ((/* implicit */unsigned short) max((((long long int) arr_7 [i_0])), (((arr_0 [i_1 + 1]) / (arr_7 [i_0])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
                    {
                        {
                            arr_17 [i_1] [i_0] = ((/* implicit */signed char) var_10);
                            var_19 ^= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)46))))), (((((/* implicit */_Bool) 16140724383545828696ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_15))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5175)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)65530))))))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_1 [i_0] [2LL])), (((((/* implicit */_Bool) ((arr_10 [i_4] [i_4] [i_4]) | (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)-127)))) : (arr_11 [i_1 + 1] [i_0] [i_5 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
