/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239240
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((short) (unsigned char)188)), ((short)-32099)))) ? ((-(max((682385025), (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) -1950926542);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_2] [i_3] [i_4]);
                                arr_15 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_8 [i_1] [i_1]);
                                arr_16 [i_4] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(8388607U)));
                                var_14 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] [i_4 + 3])) / (((/* implicit */int) (_Bool)1))));
                                arr_17 [i_0] = ((/* implicit */unsigned char) -4135684900578779710LL);
                            }
                        } 
                    } 
                }
                var_15 = ((/* implicit */unsigned int) -4135684900578779710LL);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        var_16 |= ((/* implicit */unsigned char) ((unsigned long long int) arr_12 [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 1] [i_1]));
                        arr_24 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [4LL] [i_5] [i_6 + 1] [(signed char)7] [i_6 + 2] [i_6 - 1])) ? (((/* implicit */int) arr_22 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) (unsigned short)17842))));
                    }
                    arr_25 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5] [i_5]))));
                    var_17 = ((/* implicit */unsigned char) -2113023752);
                }
                /* vectorizable */
                for (unsigned int i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_7]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((1764523862426244251ULL) > (((/* implicit */unsigned long long int) arr_26 [i_7] [i_1] [i_0] [i_0]))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_7] [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 4] [i_7 - 2])) == (((/* implicit */int) arr_10 [i_7 + 1] [i_7 + 4] [i_7 + 1] [i_7 + 1] [i_7 - 3] [i_7 + 3]))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_8 = 2; i_8 < 12; i_8 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_8]);
                    var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_8] [i_1]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)15855)) != (((/* implicit */int) (unsigned short)49680))))) : (((((/* implicit */int) (short)32098)) << (((536805376U) - (536805368U))))))), (((/* implicit */int) arr_4 [i_1] [i_1]))));
                    var_22 = ((/* implicit */int) min((((((/* implicit */_Bool) ((16775168) / (((/* implicit */int) arr_10 [i_8] [i_8 + 2] [i_8] [i_8] [i_8] [i_8]))))) ? (max((((/* implicit */long long int) arr_30 [i_1] [i_8 - 2])), (-2240926233995161507LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)54460)) & (arr_6 [i_0] [0LL] [i_0] [i_0])))))), (((/* implicit */long long int) ((arr_1 [i_8 - 2] [i_8 - 2]) ? (((/* implicit */int) arr_1 [i_8 + 2] [i_8 - 1])) : (((/* implicit */int) arr_1 [i_8 + 1] [i_8 + 2])))))));
                }
                for (unsigned int i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17842)))))));
                    arr_34 [i_0] [i_1] = ((/* implicit */unsigned char) 159814543);
                }
            }
        } 
    } 
}
