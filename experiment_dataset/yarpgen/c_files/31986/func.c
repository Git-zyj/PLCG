/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31986
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
    var_20 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)238)) - (((/* implicit */int) (unsigned char)226)))))))), (3U));
    var_21 = ((/* implicit */unsigned char) var_11);
    var_22 |= ((/* implicit */unsigned short) ((((19U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((var_13), (((/* implicit */long long int) (signed char)127)))))));
                var_24 = ((/* implicit */_Bool) ((long long int) (unsigned char)18));
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) -9223372036854775807LL);
                    var_26 = max((((/* implicit */long long int) (+(4294967276U)))), (min((((/* implicit */long long int) 19U)), (7449346519045484LL))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_9))));
                    var_28 |= ((/* implicit */short) ((arr_6 [i_0] [i_0]) == (((/* implicit */long long int) max((arr_8 [i_1 - 1] [i_1]), (((/* implicit */unsigned int) (short)32767)))))));
                }
                for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    arr_15 [i_1] [i_1] [0U] = ((/* implicit */short) 4294967292U);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 661410435)) / (var_15))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_6] [i_1] [i_4 - 1] [i_6])) / (((/* implicit */int) arr_7 [i_0] [(short)9] [i_4 - 1] [i_5])))))));
                                var_30 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)5))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4 - 1] [i_1] [i_4] [i_4 - 1] [i_4] [i_4]))) - (arr_9 [i_4 - 1] [i_1] [i_4])))) && (((/* implicit */_Bool) ((-9223372036854775807LL) / (((/* implicit */long long int) 26U)))))));
                }
            }
        } 
    } 
}
