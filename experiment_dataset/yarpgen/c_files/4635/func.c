/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4635
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((unsigned long long int) min((((var_12) | (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [5]))))), (((/* implicit */unsigned int) arr_5 [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) (~((+(arr_8 [0])))))) ? (((int) ((arr_6 [i_3] [i_1] [i_2]) ? (arr_2 [i_3] [i_1]) : (((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [i_1] [i_2] [i_3] [i_4]))))) : (((((/* implicit */_Bool) ((signed char) arr_12 [i_4] [i_2] [i_2] [i_2] [i_2]))) ? (arr_7 [i_0] [i_1] [i_4]) : (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0])), (var_16)))))));
                                arr_17 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (var_7))) ? (min((arr_16 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_1 [7U])))) : (((unsigned long long int) arr_13 [3])))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0])))) ? ((~(var_1))) : (((/* implicit */int) ((signed char) var_12))))))));
                                arr_18 [(_Bool)1] [(_Bool)1] = (+((-(((/* implicit */int) ((unsigned short) var_13))))));
                                var_19 = min((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [7LL])))))) >= ((+(-5121615712864839404LL)))))), (max((((/* implicit */int) ((signed char) var_1))), (min((arr_7 [i_0] [i_2] [(signed char)4]), (((/* implicit */int) var_15)))))));
                                var_20 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (min((var_7), (((/* implicit */unsigned long long int) arr_8 [i_1])))) : ((~(arr_11 [i_0] [i_1] [(_Bool)1] [i_3])))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */signed char) ((unsigned int) min((((/* implicit */int) ((signed char) var_4))), (((arr_0 [i_0]) ? (((/* implicit */int) arr_10 [i_0] [(signed char)3] [i_1] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))), (max((((/* implicit */unsigned long long int) var_16)), (var_2))))))))));
    var_22 = ((/* implicit */unsigned int) (+((~((-(((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (unsigned char i_5 = 3; i_5 < 21; i_5 += 1) 
    {
        arr_24 [i_5 + 1] [i_5] = ((/* implicit */unsigned short) var_0);
        var_23 = ((/* implicit */unsigned short) ((signed char) 898075697603553016ULL));
        var_24 = ((int) ((int) (+(((/* implicit */int) arr_22 [i_5 - 2] [i_5 - 2])))));
    }
    for (int i_6 = 1; i_6 < 20; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                {
                    arr_35 [i_8] [8] [i_6 + 1] = ((/* implicit */short) ((long long int) arr_25 [i_6 + 2] [i_6 - 1]));
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_37 [i_10] [i_9] [i_8] [i_6])), (arr_25 [i_10] [i_8]))))))), (arr_37 [i_8] [i_6 + 2] [i_8] [i_8]))))));
                                var_26 = ((/* implicit */long long int) ((((/* implicit */int) max((arr_22 [i_6 - 1] [i_8]), (arr_22 [i_6 + 1] [i_6 + 1])))) % (((/* implicit */int) arr_26 [i_6]))));
                                arr_41 [i_9] [i_10] [i_9] [(_Bool)1] [i_8] [17LL] [(_Bool)1] = ((int) arr_38 [i_6 + 1]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_6 + 1] [i_7])) ? ((~(arr_27 [(short)4] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_27 [i_6 + 2] [i_8]))))));
                    var_28 = ((/* implicit */long long int) max((var_10), (((((/* implicit */_Bool) max((var_9), (arr_34 [(signed char)13] [i_7] [i_8] [(unsigned short)19])))) ? (max((arr_33 [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) arr_22 [i_6] [i_6 + 2])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [(short)1] [(short)9])))))))));
                }
            } 
        } 
        arr_42 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_6 - 1])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 15; i_11 += 1) 
    {
        arr_46 [i_11] [i_11] = ((/* implicit */unsigned int) ((signed char) ((unsigned int) arr_28 [i_11])));
        var_29 = ((/* implicit */unsigned int) (~(17548668376105998600ULL)));
        arr_47 [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_11])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11]))))))));
        var_30 = ((/* implicit */unsigned char) max((var_30), (var_5)));
    }
}
