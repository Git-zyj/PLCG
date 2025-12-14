/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206283
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_1] [i_1 - 1] [i_3 - 1]);
                                arr_18 [i_0] [1U] [i_0] [i_3] [(short)8] [i_3] [i_0] = ((/* implicit */unsigned short) 1317230678U);
                                arr_19 [i_2] [i_0] [i_2 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9696)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) arr_0 [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_2] [i_4] [i_2] [11U])) ? (arr_8 [i_0] [(signed char)1] [(unsigned short)1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)8])))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)22702)) : (((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_0]))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_0] [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) (+((+(arr_14 [i_0] [i_1] [i_2 + 1] [i_2 - 1] [i_0] [i_2 + 1] [i_2])))));
                    arr_21 [i_2] [(signed char)0] [(signed char)0] [i_0] = ((/* implicit */unsigned char) 2977736621U);
                    arr_22 [i_0] [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-9688))) ? ((~(arr_14 [i_0] [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)27986)) : (((/* implicit */int) (unsigned short)65535)))) <= (((/* implicit */int) arr_15 [i_1 - 1] [i_0] [i_2 + 1] [i_0] [i_1 - 1]))))))));
                }
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    arr_27 [i_0] = ((/* implicit */short) arr_6 [i_0]);
                    arr_28 [(short)7] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) : (arr_7 [i_0] [i_0]))))))));
                    arr_29 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) var_6);
                }
                arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1 - 1]))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) var_7);
    var_13 = ((/* implicit */unsigned long long int) var_7);
}
