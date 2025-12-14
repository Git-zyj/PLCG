/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50240
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
    var_15 *= ((/* implicit */short) (+(var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_16 = ((((/* implicit */int) arr_6 [i_0])) / (((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (signed char)4))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_10)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [20LL] [i_1] [i_1] [i_2] [4U] [i_3] [(signed char)4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) var_1)))))));
                                var_17 &= ((/* implicit */_Bool) ((long long int) ((1073676288U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    arr_18 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : (arr_16 [i_0] [i_1] [i_5]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))));
                    var_18 = var_6;
                    arr_19 [(_Bool)1] [i_1] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))) ? (((((/* implicit */_Bool) (short)32767)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)29937)))) : (((/* implicit */int) ((unsigned short) var_5))))) : (((/* implicit */int) var_11))));
                    arr_20 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_5] [i_5] [i_5] [i_5] [i_0])), (var_10))))) | ((~(arr_0 [i_0]))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((int) (+(var_4))));
                    var_20 = ((/* implicit */int) (-(((max((var_1), (((/* implicit */long long int) (short)0)))) - (((/* implicit */long long int) ((unsigned int) arr_9 [i_0] [i_1] [i_6] [(unsigned short)5])))))));
                    var_21 *= ((/* implicit */unsigned char) arr_16 [i_1] [i_1] [13LL]);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */int) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((signed char) var_3));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (max((2344021630U), (((/* implicit */unsigned int) var_7)))))))))));
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 10; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_10 [i_8] [i_9] [i_10] [i_10] [i_9 + 1] [i_8]))));
                    var_26 = ((/* implicit */unsigned short) arr_21 [10U]);
                    /* LoopSeq 1 */
                    for (long long int i_11 = 4; i_11 < 11; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_27 = max((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(-3159896168440041244LL))))))), (var_5));
                            var_28 = ((/* implicit */unsigned long long int) max(((+(arr_2 [i_9 - 1] [i_11 + 2]))), (((/* implicit */int) var_2))));
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 2) 
                        {
                            arr_41 [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1539914580)) ? (((/* implicit */int) arr_33 [i_9] [i_11 - 1] [i_11])) : (((/* implicit */int) arr_17 [i_9 - 2] [i_9 + 1] [i_9 + 3] [i_11 - 4]))))) + (((((/* implicit */_Bool) arr_21 [i_11 - 4])) ? (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50125)))))));
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_10))));
                            var_30 &= ((/* implicit */int) (!((!(((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_8 [i_11])))))))));
                        }
                        var_31 *= ((/* implicit */unsigned char) arr_13 [i_8] [4] [i_9 + 3] [i_9 + 3] [i_9] [i_8] [i_11]);
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_0)))));
    }
    var_33 *= ((/* implicit */unsigned short) min((var_5), (((max((-2LL), (((/* implicit */long long int) (_Bool)0)))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27903)))))));
}
