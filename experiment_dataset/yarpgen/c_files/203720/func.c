/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203720
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) ? (max((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37672))))), (((/* implicit */unsigned int) ((1122657069) + (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1))))))))));
                                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((((((/* implicit */_Bool) arr_1 [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (-1094041872363323105LL)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (arr_7 [i_0] [i_2] [i_1] [7ULL])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (arr_5 [i_0] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) min((arr_6 [i_0]), (arr_11 [(_Bool)1] [(_Bool)1] [i_2]))))))));
                                arr_13 [i_0] [i_0] [(unsigned short)16] [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */unsigned int) ((((long long int) var_7)) < (((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (_Bool)1))))))));
                                var_12 = ((/* implicit */short) (!(max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1])))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned char) var_2)))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_1 - 1] [i_2 - 2] [17U] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) max((var_0), (arr_6 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) 1722305015)) : (((unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1])) ? (-1122657069) : (((/* implicit */int) var_4)))))));
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_2))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-47)), ((unsigned short)8123))))) != (((0ULL) << ((((((_Bool)1) ? (arr_11 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */unsigned int) 262142)))) - (3021776251U)))))));
                        arr_19 [i_0] [i_2] [i_2] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 855324798U)) ? (((/* implicit */int) (short)-12418)) : (((/* implicit */int) (unsigned char)96))));
                        var_16 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_1] [i_1 + 1])) ? (arr_18 [i_0] [2ULL] [i_1] [i_1 - 1]) : (arr_18 [i_0] [i_0] [i_1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_18 [i_0] [i_2] [i_1] [i_1 - 1])) ? (((/* implicit */long long int) arr_18 [i_0] [i_1 - 1] [i_1] [i_1 + 1])) : (var_6))));
                        arr_20 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_6] |= ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)8476))) > (8459392479416626484LL)))), (9022926489046678204ULL))));
                    }
                    arr_21 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) ^ (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */int) arr_4 [i_2 - 1])))))) : ((+(arr_1 [i_0]))))) : (((((/* implicit */_Bool) min((((/* implicit */int) (short)511)), (-913537222)))) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : (21U)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 3; i_7 < 18; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    arr_32 [i_7 - 1] [i_7 - 1] [i_7 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_29 [i_7 - 1] [i_8])))))));
                    arr_33 [i_7] [i_7] [i_7] = ((/* implicit */signed char) max((arr_12 [i_7] [(signed char)4] [(_Bool)1] [(signed char)4] [(signed char)4]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_8 [i_7 - 3] [4ULL] [i_7 - 2] [i_7 - 1] [i_8])))))));
                    var_18 = (~(((/* implicit */int) ((unsigned char) arr_24 [i_7 - 3] [i_7 - 3]))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_38 [i_7] [(unsigned char)15] = ((/* implicit */int) arr_0 [i_7]);
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_45 [i_7] [i_8] [i_10] [i_11] [i_7] = ((/* implicit */unsigned char) var_1);
                                arr_46 [i_7] [(short)2] [(short)2] [i_7] [10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-47)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (unsigned short)7168)) : (((/* implicit */int) arr_35 [i_12])))) : (((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_13 = 4; i_13 < 18; i_13 += 2) 
                {
                    arr_49 [i_8] = ((/* implicit */int) min(((+(var_1))), (((/* implicit */unsigned int) (unsigned short)43481))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_42 [i_7 - 3] [i_7 - 2] [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_42 [i_7 - 3] [i_7 - 3] [i_7 - 3]))))))));
                }
                arr_50 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_7)))))) + (((/* implicit */int) arr_15 [8LL]))));
            }
        } 
    } 
}
