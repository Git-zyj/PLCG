/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39542
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 1]);
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] = arr_4 [3U] [i_1] [i_1 - 1];
                                arr_18 [(short)2] [i_0 - 1] [i_1] [i_1] [(_Bool)1] [i_3] [i_0] = max((min((min((0ULL), (14665589375891381879ULL))), (arr_0 [i_0]))), (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [15U]))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3 - 1]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (((unsigned short) (~(18446744073709551615ULL))))));
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((arr_12 [i_0 + 1] [i_1] [i_2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1 - 2] [i_2] [i_2])) ? (((/* implicit */int) (short)-3511)) : (((/* implicit */int) arr_14 [i_0 + 1])))))));
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) min((((((/* implicit */int) arr_1 [i_0 - 1])) * (((/* implicit */int) ((_Bool) var_10))))), (((/* implicit */int) max((arr_8 [i_0] [i_0 - 1] [i_1 + 1]), (arr_8 [i_0] [i_0 + 1] [i_1 + 1]))))));
                        var_18 = ((/* implicit */unsigned short) ((short) var_6));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))));
    /* LoopSeq 1 */
    for (unsigned int i_6 = 1; i_6 < 12; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                {
                    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_7 + 1] [i_6 - 1])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [(signed char)10])), ((-(arr_26 [i_6] [2LL]))))))));
                    arr_30 [i_6] [i_7] [i_8] = ((/* implicit */signed char) (unsigned char)20);
                }
            } 
        } 
        var_21 = (_Bool)1;
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((signed char) (unsigned char)45)))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned char i_10 = 2; i_10 < 15; i_10 += 3) 
            {
                {
                    arr_37 [i_6] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_15 [i_6]);
                    var_23 = arr_9 [i_6] [i_9] [i_10];
                    arr_38 [i_10] [(_Bool)0] [(_Bool)0] [i_6 + 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 18U)) : (arr_27 [i_6] [i_9])))))) ? (((((/* implicit */_Bool) max((arr_13 [(unsigned char)0] [i_9] [i_9] [i_6] [(unsigned char)0]), (((/* implicit */unsigned long long int) arr_24 [(_Bool)1] [i_9]))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((3106516308U), (((/* implicit */unsigned int) arr_4 [i_6 + 3] [i_9] [i_6 + 3]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6])))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned int i_12 = 2; i_12 < 20; i_12 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned short) var_1);
                var_25 -= ((/* implicit */short) min((arr_21 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned short) (_Bool)1))));
                var_26 = ((/* implicit */signed char) var_14);
            }
        } 
    } 
    var_27 -= ((/* implicit */short) (unsigned char)51);
}
