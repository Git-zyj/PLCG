/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212796
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((unsigned char) var_9);
                var_10 ^= (unsigned char)190;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            {
                var_11 = ((unsigned int) (unsigned char)190);
                var_12 = ((unsigned char) ((unsigned int) (unsigned char)190));
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */int) var_5)) ^ (((/* implicit */int) (unsigned char)39)))), (((/* implicit */int) (unsigned char)190))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 3) 
                        {
                            {
                                arr_22 [i_4] [i_3] [i_4] [i_4] [i_3] [i_2] = (unsigned char)73;
                                arr_23 [i_2] [i_5] [i_4] [i_2] [i_5] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 - 1])) - (21)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) arr_20 [i_2] [(unsigned char)4] [i_4] [i_4] [i_6])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)216))))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)0))))) ? (max((var_1), (3393446100U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))))))));
                    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)14))));
                    arr_25 [i_4] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)231))));
                    arr_26 [i_4] = var_0;
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            var_14 |= ((/* implicit */unsigned char) 4294967295U);
                            var_15 = ((((/* implicit */_Bool) max((arr_30 [i_7 - 1] [i_7 + 2] [i_2] [(unsigned char)16] [i_2]), (arr_30 [i_7 + 3] [i_7 + 1] [i_3] [i_3] [i_2])))) ? (3548163335U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4)))));
                            var_16 = ((/* implicit */unsigned char) ((unsigned int) 0U));
                            var_17 = ((/* implicit */unsigned char) max((arr_11 [i_2] [i_3] [i_2]), (((/* implicit */unsigned int) ((max((1U), (((/* implicit */unsigned int) arr_7 [i_2])))) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)246)) - (((/* implicit */int) var_9))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_9 = 2; i_9 < 11; i_9 += 1) 
    {
        for (unsigned char i_10 = 1; i_10 < 12; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 12; i_12 += 3) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)84))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_21 [i_9 - 2] [i_10 - 1] [i_10] [i_12 - 2] [i_12 - 3])) : (((/* implicit */int) (unsigned char)202))))));
                                arr_44 [i_13] [i_10] [i_11] [i_10] [i_9] = var_6;
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)253)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_3))));
}
