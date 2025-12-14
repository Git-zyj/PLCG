/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32520
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
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) ((signed char) 13LL));
                arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned char) 827437262));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_16 [i_5] = ((/* implicit */signed char) var_5);
                            var_17 = ((/* implicit */_Bool) min((var_17), (((max((((arr_14 [i_2] [i_4] [i_2] [i_4]) / (var_4))), (((((/* implicit */int) (signed char)13)) / (1608527299))))) != (((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_4 - 1] [i_2 - 1])) ? (((/* implicit */int) (unsigned short)164)) : (((/* implicit */int) arr_8 [i_3 + 1] [i_4 + 1] [i_2 + 1]))))))));
                            var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_5] [i_3 - 2] [i_2]), (arr_7 [i_2]))))) : ((-(13LL))))), (max((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_3]))) - (-4LL))), (((/* implicit */long long int) -1571925273))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) arr_15 [i_5] [i_2] [i_2] [i_5])), (3U))) : (arr_9 [i_3] [i_4])))) >= (((((/* implicit */_Bool) -29LL)) ? (var_14) : (((/* implicit */long long int) arr_15 [i_2] [i_3 + 2] [i_4 - 2] [i_5]))))));
                            var_20 = ((/* implicit */signed char) ((long long int) min((((/* implicit */long long int) 2287788682U)), (13LL))));
                        }
                    } 
                } 
                arr_17 [i_2] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 1]))))), ((+(-14LL)))));
                /* LoopSeq 3 */
                for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_12 [i_6])) == (0LL)));
                        var_22 = ((/* implicit */int) ((((((/* implicit */int) (signed char)23)) == (((/* implicit */int) arr_8 [i_2] [i_2] [i_7 - 1])))) ? (arr_22 [i_2 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 9U)) != (-4LL)))))));
                    }
                    var_23 = ((/* implicit */long long int) max((var_23), (min(((-(arr_20 [i_6 + 1] [i_6 + 1] [i_6 + 1]))), (((/* implicit */long long int) (signed char)-1))))));
                    arr_23 [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_2] [i_2 + 1])) < (((/* implicit */int) arr_7 [i_2 - 1]))))) % (((/* implicit */int) ((((/* implicit */unsigned int) arr_21 [i_2] [i_2] [i_3] [i_2 + 1] [i_6] [i_2])) != (arr_9 [i_2] [i_2 - 1]))))));
                    arr_24 [i_2] [i_3] [i_6] [i_3] = (i_6 % 2 == 0) ? (((/* implicit */long long int) min((((((((/* implicit */int) arr_7 [i_3 + 1])) * (((/* implicit */int) var_12)))) << (((((137438953472LL) / (((/* implicit */long long int) arr_19 [i_2] [i_3] [i_6] [i_3 - 1])))) - (121LL))))), (((/* implicit */int) (signed char)0))))) : (((/* implicit */long long int) min((((((((/* implicit */int) arr_7 [i_3 + 1])) * (((/* implicit */int) var_12)))) << (((((((137438953472LL) / (((/* implicit */long long int) arr_19 [i_2] [i_3] [i_6] [i_3 - 1])))) - (121LL))) + (600LL))))), (((/* implicit */int) (signed char)0)))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (signed char)-95))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_9] [i_9] [i_2 - 1] [i_9])) ? (arr_14 [i_2] [i_3] [i_2 - 1] [i_3]) : (((/* implicit */int) (signed char)124))));
                                arr_34 [i_3] = ((/* implicit */unsigned short) ((long long int) var_11));
                                var_26 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27747))) <= (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])))) > (arr_14 [i_2] [i_9] [i_2] [i_10])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_32 [i_3 - 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                }
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) ((((2036608723446867357LL) << (((arr_9 [i_11] [i_3]) - (3305882271U))))) == (((/* implicit */long long int) 4294967295U))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (unsigned char)15))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_2] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_1)) ? (8388607) : (8388607)))));
                        var_30 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)30111));
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))));
                        var_32 &= ((/* implicit */_Bool) arr_30 [i_12] [i_2 - 1] [i_12] [i_3 + 1] [i_3] [i_2 - 1]);
                    }
                }
                var_33 = ((/* implicit */int) max((var_33), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_3 + 1] [i_3 + 3])) || (((/* implicit */_Bool) arr_38 [i_2] [i_2 + 1]))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) 1571925289)), (arr_13 [i_2] [i_3])))) ? (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) (unsigned short)65529)))) : (((((/* implicit */int) arr_39 [i_3 - 2] [i_3] [i_3] [i_2 - 1] [i_3] [i_2 + 1])) - (((/* implicit */int) arr_26 [i_2] [i_2] [i_3]))))))))));
                var_34 = ((/* implicit */long long int) arr_37 [i_2] [i_2]);
            }
        } 
    } 
    var_35 = 1187546202U;
    var_36 &= ((/* implicit */unsigned int) -2138411087);
    var_37 = ((/* implicit */signed char) min((var_11), ((_Bool)0)));
}
