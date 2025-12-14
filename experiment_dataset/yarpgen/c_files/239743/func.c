/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239743
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
    var_10 &= ((/* implicit */signed char) ((int) var_4));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [(short)12] [i_0] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned short) var_1);
                                arr_17 [i_0] [i_1] [14] [i_4] [14] [i_3] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_3] [(short)15])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((((/* implicit */int) arr_11 [i_0] [i_3])) - (var_5)))));
                                var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)5))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) (+(arr_0 [i_1])));
                arr_19 [i_0] [i_1] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)15367)))));
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (short i_5 = 4; i_5 < 20; i_5 += 4) 
    {
        arr_22 [(unsigned short)5] [i_5] |= ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) (unsigned short)50185)))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                {
                    arr_29 [i_6] [i_6] [(unsigned short)0] [i_6] = (-(((/* implicit */int) ((signed char) (unsigned char)1))));
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((3936889647U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19374)))));
                        var_14 = ((/* implicit */int) arr_32 [i_5 - 3] [i_6] [i_7] [i_6]);
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_15 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_21 [i_5] [i_6])) ? (0) : (((/* implicit */int) (unsigned short)0)))));
                        arr_36 [i_9] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) (signed char)-1);
                    }
                    var_16 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) arr_30 [i_5] [i_6] [i_7])))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) (-(var_5)))))));
                }
            } 
        } 
        arr_37 [i_5] [i_5] &= ((/* implicit */unsigned short) var_1);
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */_Bool) (unsigned char)31)) ? (arr_34 [(short)1] [i_5] [i_10] [(unsigned char)13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5 + 1]))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */int) arr_41 [i_5])) : (((/* implicit */int) arr_25 [i_5] [i_11] [i_11] [14U]))))))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 21; i_13 += 1) 
                        {
                            {
                                arr_47 [(unsigned char)8] [i_12] [i_11] = ((/* implicit */unsigned int) ((signed char) ((unsigned char) ((arr_31 [3U]) - (((/* implicit */unsigned int) arr_26 [i_12]))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (-(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (0))))))) : (((/* implicit */int) arr_20 [i_5]))));
    }
}
