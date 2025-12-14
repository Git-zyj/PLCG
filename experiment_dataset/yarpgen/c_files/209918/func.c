/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209918
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1] [(unsigned char)5]);
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1] [(unsigned short)9])) > (((/* implicit */int) min(((unsigned short)92), ((unsigned short)23192)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_11 = ((/* implicit */unsigned short) min(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1])))))), (((/* implicit */int) (unsigned short)11548))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [(signed char)6] [i_4 + 2] |= ((/* implicit */signed char) var_8);
                                arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (unsigned char)71))))) < (min((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_6 [i_0] [i_1]))))), ((~(((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((unsigned short)11548), ((unsigned short)43226))))));
                }
                arr_18 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32667))) < (max((((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned char)3])), (var_0)))));
                arr_19 [i_1] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_1])))), (((/* implicit */int) ((unsigned short) (signed char)-52)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15672)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-105))) : (var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44024)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16201702885554664172ULL)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_8)))))))))));
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            {
                arr_25 [i_5 + 1] = ((/* implicit */unsigned long long int) arr_20 [i_6 + 1] [i_6 + 2]);
                /* LoopSeq 2 */
                for (unsigned short i_7 = 3; i_7 < 12; i_7 += 2) 
                {
                    arr_28 [(unsigned short)1] [i_6] [i_7] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) var_3)), (arr_27 [i_5 - 1] [i_6 - 1] [i_7] [i_7 - 1]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_5 + 2] [i_6 + 2] [i_7] [i_7 + 4])) < (((/* implicit */int) arr_27 [i_5 + 2] [i_6 + 2] [i_7] [i_7 - 3])))))));
                    var_15 = max((13246432102683498933ULL), (((/* implicit */unsigned long long int) (signed char)-52)));
                    arr_29 [i_5] [i_6 + 2] [i_6 + 2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_26 [i_5 - 2] [i_6 + 1] [i_7 - 3] [i_5 - 2])), ((unsigned char)111)))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)21511)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) arr_20 [i_5] [i_7 - 3])))), (((/* implicit */int) arr_27 [i_5 - 1] [i_6 + 2] [i_6 + 2] [i_7 - 1]))))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) / (var_0)))))));
                    arr_30 [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)37046)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)19133))))));
                }
                for (signed char i_8 = 3; i_8 < 15; i_8 += 3) 
                {
                    arr_33 [(unsigned short)8] [(unsigned short)8] [(signed char)9] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_5] [(unsigned short)4] [i_8]))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_8 - 2] [i_6] [(unsigned short)5])) : (((/* implicit */int) (unsigned short)49324)))) : (((/* implicit */int) (signed char)-98))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (-(((min((((/* implicit */unsigned long long int) arr_31 [i_5] [i_5] [i_5])), (var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                                arr_41 [i_9] [i_6 + 1] [(unsigned short)14] [i_9] [i_10] = ((/* implicit */unsigned long long int) (signed char)80);
                            }
                        } 
                    } 
                }
                arr_42 [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)11693)) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)-110))));
            }
        } 
    } 
}
