/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236846
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
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                arr_5 [i_0] [10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -970436128)) & (((unsigned long long int) arr_3 [i_0 - 2] [9ULL]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_4 - 1] &= ((unsigned int) arr_13 [i_2] [i_3] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 24; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_20 = (-(arr_12 [(_Bool)1] [(_Bool)1] [i_3]));
                                var_21 *= ((/* implicit */unsigned long long int) ((_Bool) (+(min((((/* implicit */int) arr_6 [i_2])), (0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_7 [i_2 + 2])))))))));
        arr_20 [i_2] &= ((/* implicit */signed char) arr_15 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (_Bool)1);
            arr_23 [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((((int) var_18)) + (2147483647))) << (((((((/* implicit */long long int) (-2147483647 - 1))) - (-9223372036854775805LL))) - (9223372034707292157LL)))));
        }
    }
    /* LoopSeq 3 */
    for (long long int i_8 = 1; i_8 < 14; i_8 += 3) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned long long int) arr_18 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1] [i_8]);
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 3) 
        {
            for (int i_10 = 4; i_10 < 12; i_10 += 3) 
            {
                {
                    arr_33 [i_8] [i_8] = max((var_10), (((/* implicit */int) max((arr_28 [i_8 + 2]), (arr_28 [i_8 + 1])))));
                    arr_34 [i_8] [i_9 - 2] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((2367246631U) & (2198567218U)))));
                    arr_35 [i_10] [i_10] [i_8] = ((/* implicit */_Bool) max((((/* implicit */long long int) max((1160848976U), (1160848971U)))), (((long long int) arr_27 [i_8] [i_8 - 1] [i_8]))));
                }
            } 
        } 
        arr_36 [i_8] = ((/* implicit */unsigned int) arr_24 [i_8]);
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((max((arr_25 [i_11] [i_11]), (arr_25 [i_11] [i_11]))) / (((/* implicit */long long int) max((arr_8 [i_11] [i_11]), (arr_8 [i_11] [i_11]))))));
        arr_39 [i_11] = ((/* implicit */int) arr_21 [i_11]);
        arr_40 [i_11] = ((/* implicit */_Bool) ((max((arr_3 [i_11] [i_11]), (((/* implicit */unsigned int) ((int) arr_12 [i_11] [i_11] [i_11]))))) << (((min((((/* implicit */unsigned int) var_14)), (arr_0 [i_11] [i_11]))) - (212657258U)))));
    }
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
    {
        var_25 = arr_9 [i_12 - 1];
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_12 - 1])) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))));
    }
    var_27 = ((/* implicit */signed char) var_19);
}
