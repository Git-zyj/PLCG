/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210147
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
    var_15 = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_6)), (3888890677U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))) % (4294967283U)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((var_4), (((/* implicit */unsigned int) var_0)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) | (min((((/* implicit */unsigned long long int) (signed char)-97)), (4503599627366400ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) >= (406076618U)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) > (4294967282U))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 2) 
    {
        for (short i_3 = 3; i_3 < 10; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 12U)) ? (3888890663U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))))), (((/* implicit */unsigned int) (unsigned short)36660)))))));
                    arr_15 [i_2 - 1] [i_2] [i_2] &= min((max((((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4])))))), (((((((/* implicit */int) var_10)) + (2147483647))) >> (((10994784272226186224ULL) - (10994784272226186199ULL))))))), (((/* implicit */int) (signed char)116)));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                arr_21 [i_6] [i_6] [i_3] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */long long int) arr_0 [i_2]);
                                var_18 = ((((/* implicit */int) var_9)) < ((~(((/* implicit */int) arr_0 [i_2])))));
                                var_19 = ((/* implicit */unsigned long long int) min(((short)-1), (((/* implicit */short) (signed char)-74))));
                                var_20 = ((/* implicit */int) max((((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13661))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)116)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */short) (unsigned char)98);
                        arr_24 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((9223372036854775801LL), (((/* implicit */long long int) arr_17 [i_2] [i_2 - 2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_2]))))) : (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [15ULL]))) : (2542613988U)))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) 12U);
}
