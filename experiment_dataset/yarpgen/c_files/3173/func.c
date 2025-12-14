/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3173
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) arr_0 [i_2 - 1]);
                    var_16 = ((/* implicit */short) var_5);
                    var_17 = ((/* implicit */long long int) min((((min((1511783511), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1])))) - (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))), (((/* implicit */int) var_8))));
                    var_18 = ((/* implicit */_Bool) (unsigned char)94);
                }
                arr_8 [i_0] [i_0] [8U] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))))), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1]))))) - (((/* implicit */int) (short)-2244)))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? ((~(((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) var_3)))))) : (((((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_5 [i_1]))))) ^ (1511783511)))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0 - 1]))) ? (((/* implicit */long long int) arr_1 [i_1])) : (((((long long int) var_11)) & (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)13] [(signed char)13] [i_0]))))))))));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1]);
                                arr_17 [i_5 - 2] [i_3] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (unsigned int i_6 = 3; i_6 < 10; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_6 - 2] [i_6 - 3])) < (((/* implicit */int) arr_4 [i_6 + 2] [i_6 - 2])))) ? (((/* implicit */int) arr_4 [i_6 - 3] [i_6 - 3])) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_4 [i_6 - 1] [i_6 + 1])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) arr_22 [i_6]);
                        arr_29 [i_9] [i_6] [i_6] [i_6 - 2] = ((/* implicit */short) ((((min((2006036436U), (((/* implicit */unsigned int) (unsigned short)10891)))) - (2411425891U))) + ((+(max((3798252661U), (((/* implicit */unsigned int) (unsigned short)34))))))));
                        arr_30 [i_6 - 1] [i_6] [i_7] [(unsigned char)7] [(_Bool)1] = ((/* implicit */unsigned int) arr_21 [i_6 - 1]);
                    }
                    for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) var_1);
                        var_26 = ((/* implicit */unsigned short) arr_11 [i_6] [i_7] [i_7] [i_6]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 9; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_39 [(unsigned char)10] [(short)0] [i_8] [i_6] [(signed char)2] [(unsigned char)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_11 + 3])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_11 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_11 + 2])) + (98))) - (20)))))) : (((unsigned int) (unsigned short)65210))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-88))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)255))))) : (((/* implicit */int) (unsigned short)54645))))) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [(signed char)9] [(unsigned char)8])), (arr_6 [i_12] [i_8] [i_6 - 3])))) : (((/* implicit */int) max(((unsigned short)65527), (var_9)))))))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6 - 3] [i_11 - 1]))) : (min((min((10014805875882071074ULL), (((/* implicit */unsigned long long int) arr_13 [i_6 - 3] [i_6] [i_7] [i_8] [i_11 - 1] [i_12])))), (((/* implicit */unsigned long long int) var_9))))));
                                var_29 = ((/* implicit */unsigned short) arr_26 [i_11 + 2] [i_6 + 2] [i_8] [i_11] [i_6] [(unsigned char)8]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
