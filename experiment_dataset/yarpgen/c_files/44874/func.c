/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44874
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) ((short) (unsigned short)55895));
                arr_8 [i_0] [i_1] [2ULL] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((((/* implicit */int) (unsigned short)9641)) < (((/* implicit */int) (unsigned short)16128)))), (max(((_Bool)0), (arr_0 [(short)6]))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(max((arr_9 [(_Bool)1] [i_1]), (arr_9 [4U] [4U]))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(158669821U)))))))) == (((max((((/* implicit */unsigned int) (_Bool)1)), (158669808U))) & (((/* implicit */unsigned int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)55894)) - (55863))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_2 - 2] [i_2 + 1] [i_1]) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2])))))))) ? (((/* implicit */int) arr_5 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) arr_5 [i_0]);
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((/* implicit */long long int) (_Bool)1)), (min((max((((/* implicit */long long int) arr_9 [(unsigned short)4] [i_1 + 3])), (arr_3 [i_0] [(unsigned short)0] [(unsigned short)0]))), (((/* implicit */long long int) max((158669809U), (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_2] [i_3] [i_4]))))))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_20 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) != (3553247776U)));
                            var_21 = ((/* implicit */unsigned long long int) arr_19 [i_0 - 3] [(signed char)2] [(signed char)2] [i_3] [i_5]);
                            var_22 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)55915)) * (((arr_14 [i_0] [i_3 - 1] [i_2] [i_2] [(unsigned short)3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [4LL] [(unsigned short)7]))))));
                            var_23 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_4 [i_2] [i_5])))));
                        }
                    }
                }
                /* vectorizable */
                for (unsigned short i_6 = 3; i_6 < 9; i_6 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) (unsigned short)55895);
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((((/* implicit */_Bool) 158669821U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7))) : (158669826U)))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 3; i_8 < 8; i_8 += 2) 
                        {
                            var_26 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40294))) | (6989792327041743897LL));
                            arr_29 [i_1] [i_0] [i_1 + 4] [i_6] [i_1 + 4] [i_1 + 4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62130)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_9 = 2; i_9 < 9; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */short) ((arr_0 [i_1 + 2]) ? (arr_24 [i_6 - 3] [i_9 - 1]) : (arr_24 [i_6 - 3] [i_9 + 2])));
                            var_28 += ((/* implicit */unsigned short) (~(arr_28 [i_7] [i_0 + 2] [i_1 + 2] [i_9 + 2])));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_0] [i_6 + 1] [i_6] [i_0])) ? (((/* implicit */int) ((unsigned short) arr_27 [i_7] [i_6]))) : (((((/* implicit */_Bool) arr_20 [i_0] [2LL] [7LL] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_9 + 1] [i_6 - 2]))))));
                            var_30 = ((/* implicit */unsigned short) ((arr_23 [i_9 + 2] [i_0 - 3] [i_6 - 3] [i_9] [i_1] [(unsigned short)7]) || (((/* implicit */_Bool) (unsigned short)35155))));
                        }
                        for (short i_10 = 4; i_10 < 10; i_10 += 2) 
                        {
                            arr_36 [i_1] [i_7] [i_6 + 1] [(unsigned short)7] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_6 + 1] [i_1 + 4]))));
                            arr_37 [i_6 - 2] [i_1] [i_1] [i_6 - 2] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_10 - 1])) < (((/* implicit */int) var_2))));
                            arr_38 [i_1] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_0] [i_1 + 1] [i_10 - 4] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_10] [i_1 + 1] [i_10 - 4] [i_6 - 1]))) : (var_7)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            arr_43 [i_1] [i_1] [i_1] [i_0] = 0LL;
                            arr_44 [i_1] [i_1] [i_6] [i_6] [(short)1] [i_7] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 12596205193243656033ULL))));
                        }
                        var_31 *= ((/* implicit */short) arr_35 [0ULL] [i_1] [i_1 + 1] [i_1 + 4] [i_1 + 1]);
                    }
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned short) max((var_1), (var_14))))), (var_13))))));
}
