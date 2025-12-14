/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194470
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
    var_20 |= ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) -339188584);
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3078604619477717022LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (3078604619477717022LL)));
                    var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(unsigned char)4])) && (((/* implicit */_Bool) arr_4 [i_1 + 1] [(signed char)10] [i_1 + 2]))));
                    arr_9 [i_1] [i_1 + 1] [10LL] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1] [i_1 + 3]))));
                    var_24 = ((/* implicit */long long int) ((int) arr_7 [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1]));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)4])))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_26 = ((((((/* implicit */int) var_19)) != (arr_7 [i_3] [i_3] [i_3] [i_3]))) ? ((-(((/* implicit */int) arr_5 [i_3])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) < (min((arr_0 [i_3] [i_3]), (((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_3] [i_3]))))))));
        var_27 = (-(((1027946901403978214LL) >> (((4049003315324933916LL) - (4049003315324933904LL))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 8; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2411775600U)) || (((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((arr_12 [i_6]), (arr_12 [i_4 - 3]))))));
                        var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_4 - 1])) ? (((/* implicit */long long int) arr_10 [i_4 + 1] [i_4 - 2])) : (var_10))), (((/* implicit */long long int) arr_14 [i_3]))));
                        arr_20 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3] [i_6] [8])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43944))) != (arr_0 [(short)8] [i_5])))) : (((/* implicit */int) ((arr_10 [i_3] [i_4]) != (arr_8 [i_3] [i_3] [i_6] [i_6])))))) : (((/* implicit */int) arr_4 [i_3] [i_6] [i_5]))));
                        var_30 = min(((-(arr_7 [i_4 + 1] [i_4 + 2] [i_6] [i_4 - 3]))), (((((((/* implicit */int) (signed char)-57)) == (arr_8 [i_6] [i_6] [i_6] [i_3]))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)64)) < (((/* implicit */int) var_6))))) : (((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_6])))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (unsigned char)202)))))));
        arr_23 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_22 [i_7]))) ? ((~(((/* implicit */int) arr_22 [i_7])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7])) || (((/* implicit */_Bool) (-(var_4)))))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned char)11))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7]))) & (var_10))) : (((/* implicit */long long int) var_16))));
    }
}
