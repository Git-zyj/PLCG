/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5495
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
    var_16 |= ((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            {
                arr_7 [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned short) arr_4 [i_1 + 2]);
                arr_8 [i_0 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? ((~(0U))) : (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (arr_4 [i_0])));
                arr_9 [i_0] [i_1] &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_2))))))), (((/* implicit */int) (signed char)-70))));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_2] [i_3] [(unsigned char)2] = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0 - 1] [i_3])), (var_15)))) ? (((/* implicit */int) ((unsigned short) 14U))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) (short)2047)))))))));
                                arr_17 [i_2] [i_1] [i_1] [i_3] [i_4] = ((((/* implicit */int) (((-(((/* implicit */int) (signed char)28)))) <= (((/* implicit */int) min((var_14), (var_14))))))) - (((/* implicit */int) (((~(arr_11 [(unsigned char)10] [i_3] [i_4]))) <= (((/* implicit */unsigned long long int) var_15))))));
                                arr_18 [i_3] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 8108543137835127063LL))) && (((/* implicit */_Bool) (-(0U)))))))));
                                arr_19 [i_3] &= ((/* implicit */long long int) 4294967295U);
                            }
                        } 
                    } 
                } 
                arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) max((4294967295U), (((/* implicit */unsigned int) ((_Bool) 14078079084485584515ULL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                {
                    arr_29 [i_7] [i_7] [(short)21] = ((/* implicit */unsigned int) max((((unsigned char) (~(((/* implicit */int) arr_21 [i_5 - 1]))))), (var_12)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                arr_36 [i_5] [i_6] [(_Bool)1] [i_9] = (+(1473615497));
                                arr_37 [i_5] [(unsigned short)0] [i_8] [i_9] = ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
