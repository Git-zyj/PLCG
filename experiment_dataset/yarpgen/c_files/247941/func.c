/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247941
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) (~(((unsigned long long int) 1082535676U))));
                                arr_13 [i_2] [i_1] = ((/* implicit */int) 1082535671U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            {
                                arr_19 [4ULL] [i_1] [4ULL] [i_5] [i_0] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_1] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6])) ? (arr_17 [i_0] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]) : (arr_17 [i_1] [i_6] [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) > (((var_9) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [i_2] [i_1] [7LL]))))))))));
                                var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))) >= (((unsigned int) (~(3212431595U))))));
                                arr_20 [i_0] [i_0] [i_0] [(unsigned char)13] [i_2] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6 - 1]))) & (1082535713U))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_6] [i_6 + 1] [i_6 - 1])) ^ (((/* implicit */int) arr_12 [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (3212431580U)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-5057292575370290746LL))))))));
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((max((((/* implicit */unsigned int) arr_21 [i_7])), (arr_22 [i_7] [i_7]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))))) : (max((1082535676U), (262143U)))));
        var_15 += ((_Bool) ((((/* implicit */int) (signed char)3)) + (((/* implicit */int) min((((/* implicit */short) var_7)), (arr_21 [i_7]))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 3; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 17; i_12 += 1) 
                        {
                            {
                                arr_36 [i_10] [i_9] [(_Bool)1] [i_11] [i_10] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)205))));
                                var_16 = ((/* implicit */unsigned long long int) (unsigned char)36);
                                var_17 = (((!(((/* implicit */_Bool) arr_21 [(unsigned char)17])))) ? (((unsigned long long int) arr_33 [i_10])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                arr_37 [i_10] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) var_3);
                            }
                        } 
                    } 
                    arr_38 [i_8] [i_10] [i_10] [19U] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
            } 
        } 
        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_21 [i_8 - 1]))))));
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_33 [16U]))) - (arr_29 [i_8] [i_8 - 1] [i_8]));
    }
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)8))));
}
