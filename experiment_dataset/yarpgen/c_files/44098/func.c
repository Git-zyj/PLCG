/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44098
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned char)63)))) + (2147483647))) >> (((/* implicit */int) ((signed char) (short)-32761)))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 1]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) (((_Bool)1) ? (2062067116) : (765190971)));
            arr_5 [16LL] = ((/* implicit */long long int) ((_Bool) arr_3 [i_0 - 1]));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_1 + 1])))));
            arr_6 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0 + 1]);
        }
        for (long long int i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_2 - 2]);
            var_24 = ((/* implicit */long long int) (unsigned char)255);
            var_25 *= ((/* implicit */_Bool) -229284314);
            arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13102)) ? (365561882U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)101)))))) || (((/* implicit */_Bool) (-(arr_4 [i_0 + 1]))))));
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_26 = (((-(var_0))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_10)) : (arr_4 [i_0]))));
            arr_12 [i_0] [i_3] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0])) + (25967)))));
            arr_13 [i_3] [i_0] = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) (signed char)127)))));
            var_27 = ((/* implicit */signed char) var_3);
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9)) ? (var_2) : (((/* implicit */long long int) -1534312890))))) ? (((/* implicit */int) arr_0 [i_4] [i_4])) : ((~(((/* implicit */int) (unsigned char)167))))));
        /* LoopNest 2 */
        for (signed char i_5 = 4; i_5 < 8; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) 1595733328);
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_29 = ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)242))))) ^ (((((/* implicit */_Bool) arr_26 [i_6] [i_5] [i_7] [9U] [i_8] [i_5 - 1] [(signed char)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14463))) : (arr_10 [i_5 - 4]))));
                                var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) arr_8 [i_4] [(unsigned char)12])) : (((/* implicit */int) ((signed char) arr_19 [i_4] [i_5 - 3] [i_8])))));
                            }
                        } 
                    } 
                    arr_28 [i_6] [(short)8] = ((/* implicit */signed char) (((+(9019084227637549455LL))) >> (((((((/* implicit */long long int) var_10)) ^ (var_11))) - (8926655744688203072LL)))));
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_35 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1933670335171970119LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)10))) : (-8624362542436049431LL)));
                                var_32 = ((/* implicit */unsigned int) var_17);
                                var_33 = ((/* implicit */short) ((long long int) arr_29 [i_9] [i_6] [i_5] [i_4]));
                                var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 17085184283558929785ULL)) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) ((arr_0 [i_4] [i_5]) || (((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4] [(unsigned char)7])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned long long int) var_10);
}
