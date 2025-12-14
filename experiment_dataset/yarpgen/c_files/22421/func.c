/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22421
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (~((((~(var_0))) << (((var_4) - (3368751070586229941ULL)))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (!(arr_4 [i_1 - 3] [i_1 - 3] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_11))));
                                arr_20 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((unsigned int) arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530)))));
                                var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */short) arr_15 [i_0 - 1])), ((short)32767)))) / (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_1 + 3])))) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
                                var_20 = ((/* implicit */unsigned int) arr_4 [i_0] [i_5] [i_6]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_25 [i_0] [i_1 - 3] [(unsigned short)8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((var_4) << (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])) - (60))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1])))))));
                        var_21 |= ((/* implicit */int) max((arr_24 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) (short)32739))));
                        var_22 *= ((/* implicit */_Bool) (short)32750);
                    }
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_23 = ((((/* implicit */int) arr_5 [i_0] [i_8] [i_1 + 1])) < (((/* implicit */int) ((arr_11 [i_0 - 1] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]) == (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1 - 2])))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [(unsigned short)10] [i_8])) >> ((+(((/* implicit */int) arr_2 [i_0 - 1]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_6)) << (((((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (3368751070586229919ULL)))))))));
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_1] [i_1 + 3] [i_1 - 3] [i_1 + 1])) % (((/* implicit */int) arr_22 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 3])))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9])) & (var_12))))))))));
                        var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((arr_17 [i_0] [i_1 + 3] [i_2] [i_9] [i_9]) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) : (((arr_4 [(unsigned char)5] [i_1] [(unsigned char)5]) ? (var_16) : (((/* implicit */unsigned long long int) arr_30 [i_0] [i_9] [i_0] [i_9] [i_1] [i_9])))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1494467110U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))))))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_15))));
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
    {
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_10 - 1])) || (((/* implicit */_Bool) 826665426U))));
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) 3167099036U));
        arr_36 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_10])) : (((/* implicit */int) arr_33 [i_10]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
    {
        var_32 = ((/* implicit */unsigned short) (-(arr_37 [i_11] [i_11])));
        arr_41 [i_11] = 9223372036854775807LL;
    }
}
