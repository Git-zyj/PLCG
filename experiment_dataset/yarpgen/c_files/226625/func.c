/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226625
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 -= (((!(((/* implicit */_Bool) min((var_7), (651082448U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)111)) || (((/* implicit */_Bool) arr_2 [i_4] [7U])))))) : (max((((/* implicit */unsigned int) ((unsigned char) 4294967280U))), (var_7))));
                                arr_12 [i_2] [(unsigned char)0] |= max((1103457101U), (4083665800U));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((var_2), ((unsigned char)7)))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [(unsigned char)1])) : (((/* implicit */int) ((unsigned char) (unsigned char)233))))), (((/* implicit */int) var_13))));
                    arr_14 [i_1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)2)) ? (arr_0 [i_0 + 1] [(unsigned char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 3] [i_2] [i_2] [i_1]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_0 + 1]))))));
                    arr_15 [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)15))))) - (arr_5 [i_1] [i_1 - 2])))) ? (min((((/* implicit */int) arr_11 [1U] [i_0] [i_0] [i_0] [i_0 - 2])), ((+(((/* implicit */int) arr_2 [i_0 - 1] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) 939524096U)) || (((/* implicit */_Bool) (unsigned char)89)))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (unsigned char i_7 = 3; i_7 < 19; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 3; i_8 < 20; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((unsigned char) min((arr_26 [i_7] [i_6 + 2] [i_7 + 2] [i_8] [i_8 + 3] [i_9 - 1]), (arr_26 [i_7] [i_6 + 1] [i_7 + 1] [i_8] [i_8 + 1] [i_9 + 1]))));
                                var_22 *= ((unsigned int) (unsigned char)0);
                            }
                        } 
                    } 
                    arr_31 [i_7] [i_7] [(unsigned char)0] [i_5] = ((/* implicit */unsigned char) 2625813755U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_10 = 1; i_10 < 13; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            {
                arr_40 [i_10 - 1] [7U] = ((/* implicit */unsigned char) arr_22 [12U] [i_11] [12U]);
                arr_41 [i_10] [i_10] = ((((/* implicit */_Bool) ((2625813755U) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_33 [3U])))))) ? (((((/* implicit */_Bool) ((unsigned char) 3050743219U))) ? ((-(813728830U))) : (((((/* implicit */_Bool) var_5)) ? (2625813755U) : (3758096384U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                var_23 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 2823570287U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [(unsigned char)14] [i_11] [i_10] [i_11] [i_10] [i_10]))) : (2823570287U))), (((/* implicit */unsigned int) var_8))));
            }
        } 
    } 
    var_24 |= max((((/* implicit */unsigned int) var_2)), (((unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_18) : (var_5)))));
}
