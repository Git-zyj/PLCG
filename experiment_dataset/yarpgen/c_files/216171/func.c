/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216171
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_10)) >> (((var_4) - (6865651243717903451LL))))) : (var_7))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 &= arr_0 [i_0];
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (var_1)))) ? (((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_2]))))))));
                    var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) <= (((((/* implicit */_Bool) 18402593264519844012ULL)) ? (-1431612410) : (((/* implicit */int) (unsigned short)19089)))))))));
                    arr_7 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_7) : ((-(((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_3 [i_1] [i_1])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (short i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1)))))))), (((1073741823U) - (3033530632U)))));
                                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) arr_2 [i_4 + 2] [i_3] [i_6 - 1])))))));
                                var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) var_10)), (-5335722573592648380LL)));
                                arr_20 [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) arr_4 [i_5]);
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_4] &= ((/* implicit */int) arr_10 [i_0] [i_3] [i_4]);
                    var_16 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)1023)))) == (((((/* implicit */int) arr_14 [i_0] [i_3])) / ((+(((/* implicit */int) (signed char)99))))))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-30)) ? (max((((/* implicit */long long int) var_5)), (var_3))) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_3))))))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 ^= arr_22 [i_7];
        /* LoopNest 3 */
        for (signed char i_8 = 4; i_8 < 21; i_8 += 2) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_19 = (!(((/* implicit */_Bool) arr_22 [i_9 - 1])));
                        arr_31 [i_10] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)29)))), (((/* implicit */int) arr_30 [i_8 - 1] [i_9 - 1] [(unsigned char)15] [i_8 - 1] [i_8]))));
                        arr_32 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)31324)))))), (arr_27 [(_Bool)1] [(_Bool)1] [i_8] [i_7])));
                    }
                } 
            } 
        } 
        arr_33 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_26 [i_7] [i_7] [(unsigned short)1] [i_7]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))));
    }
    for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 2) 
    {
        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11] [i_11] [i_11 + 1] [i_11 + 1]))) | (min((((/* implicit */unsigned long long int) ((3033530632U) | (arr_24 [i_11])))), (min((((/* implicit */unsigned long long int) arr_24 [i_11])), (arr_27 [i_11] [i_11] [i_11] [i_11])))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_22 [i_11 + 1]), (arr_22 [i_11 - 1])))) ? (((((/* implicit */_Bool) arr_28 [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) var_3)) : (min((((/* implicit */unsigned long long int) var_1)), (arr_27 [i_11] [i_11] [13LL] [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (var_6))))))))));
        /* LoopNest 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (short i_13 = 3; i_13 < 22; i_13 += 2) 
            {
                for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    {
                        var_22 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-52))));
                        var_23 = ((/* implicit */unsigned short) (-((+(arr_41 [i_11 + 1] [i_11])))));
                    }
                } 
            } 
        } 
    }
}
