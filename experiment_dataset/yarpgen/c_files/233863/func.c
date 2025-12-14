/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233863
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned short)15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) (~((((((~(((/* implicit */int) var_10)))) + (2147483647))) << (((4095LL) - (4095LL)))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)7219)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) ((short) (_Bool)0))) : (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((((((/* implicit */int) arr_6 [i_1] [(unsigned short)8] [i_3] [i_4])) == (((/* implicit */int) (unsigned short)61219)))) ? (((((/* implicit */int) (unsigned short)43939)) & (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) arr_8 [10LL])) : (((/* implicit */int) arr_1 [i_1] [i_2])))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_8 [(signed char)20])), ((unsigned short)65521)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [(_Bool)1] [(_Bool)1])) / (var_7))))))))))));
                                var_19 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_8 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    var_20 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65521))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_25 [i_5] [i_6] [i_6] [i_8] [i_9] [i_9] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (441371913U))))) ? (((/* implicit */int) (short)-24106)) : (((/* implicit */int) ((((/* implicit */int) (short)8929)) == (((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)1)))))))));
                                arr_27 [i_9] [i_8] [i_9] [i_8] [i_9] [i_6] [i_5] = ((/* implicit */_Bool) ((4294967295U) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) - (18446744073709551615ULL))) - (118ULL)))));
                                arr_28 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_9] [i_6]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_7 [i_9] [i_5])))))) : (min((arr_17 [i_6]), (arr_17 [i_5])))));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_9] [i_9])) ? (arr_2 [i_9] [i_6]) : (arr_2 [i_9] [i_9])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5])) && (((/* implicit */_Bool) (unsigned short)65521))))) >> (((((((/* implicit */_Bool) (short)7367)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (arr_0 [i_5]))) - (241U)))))) : (((2084783354U) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))));
                            }
                        } 
                    } 
                    var_23 = (~(((/* implicit */int) ((((/* implicit */int) arr_26 [i_5] [i_7] [i_7] [i_5] [i_5] [i_5] [i_5])) <= (((/* implicit */int) var_1))))));
                    var_24 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_6] [i_7] [i_5] [i_5] [i_6] [i_6]))) % (4294967295U)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-24106)))))) == (((/* implicit */long long int) min((max((var_7), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) arr_6 [i_5] [4] [i_6] [i_7])))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) (unsigned char)127);
}
