/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248976
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((var_11), (((unsigned char) var_1)))))));
    var_16 -= ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((1261580795) << (((((((/* implicit */int) ((signed char) var_8))) + (36))) - (23)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_4] = ((/* implicit */long long int) arr_12 [i_0 - 1] [i_1] [(unsigned char)9] [i_3] [i_3]);
                                arr_15 [i_0] [1] [i_0] [i_0] [4LL] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((long long int) var_14));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 - 2] [i_0] [(unsigned short)14] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))) ? (arr_5 [i_6] [i_1] [i_0 + 2]) : (((/* implicit */int) var_4))));
                                arr_20 [(_Bool)1] [(_Bool)1] [(unsigned short)9] [(_Bool)1] [i_5] [i_6] = ((/* implicit */_Bool) arr_13 [i_5] [i_1] [i_6] [i_5] [i_6]);
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_5 [i_7] [i_7] [i_8])) < (arr_13 [(short)0] [i_7] [i_8] [i_8] [i_8]))) ? ((+(arr_17 [2LL] [(unsigned char)1] [0LL] [(unsigned short)6] [0LL]))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (((((/* implicit */int) var_13)) - (-1261580796))))))));
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                }
            } 
        } 
        var_20 -= ((/* implicit */unsigned char) ((unsigned int) min((max((((/* implicit */int) (unsigned char)109)), (arr_0 [i_0] [i_0]))), (((/* implicit */int) (unsigned short)65531)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~((-(((/* implicit */int) var_12)))))))));
        arr_30 [i_9] [i_9] = -1261580811;
    }
    for (short i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        arr_34 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) : (226254351U)));
        arr_35 [(unsigned short)7] = ((/* implicit */unsigned int) ((signed char) -1261580770));
    }
}
