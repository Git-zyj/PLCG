/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47340
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
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)55))));
    var_18 = ((/* implicit */unsigned char) (+((+((((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-55))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = arr_5 [i_0] [i_0] [i_0];
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 536870848)) ? (((/* implicit */int) (signed char)-100)) : (536870848)))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_2 - 1] [i_1] [i_0]);
                    arr_10 [i_1] [i_1] [i_2 - 2] = ((/* implicit */short) arr_7 [i_2] [i_2] [i_2] [20U]);
                }
                /* LoopSeq 4 */
                for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_3] = ((unsigned int) 4049302424U);
                    var_20 -= (-(max((arr_8 [i_0] [i_0] [(signed char)2] [i_0]), (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])))));
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-93)), (max(((-(((/* implicit */int) (signed char)-100)))), (((/* implicit */int) var_4))))));
                }
                /* vectorizable */
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
                {
                    var_22 -= ((((/* implicit */_Bool) var_10)) ? (((arr_0 [i_4]) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                    arr_17 [i_1] [i_1 - 1] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1] [i_0])) ^ (((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 1] [i_0 - 2]))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) -602403030))));
                    arr_20 [i_1] = ((/* implicit */long long int) arr_0 [i_0 - 1]);
                    var_24 -= ((/* implicit */unsigned int) (_Bool)0);
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_25 = ((2187977468U) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1547821902U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-70368744177664LL)))) ? (((((/* implicit */_Bool) 4086113946222589732ULL)) ? (3494860565U) : (2106989812U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 - 1] [i_1 + 1] [i_6 + 1] [i_6]))))) - (3494860544U))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(-602403030)));
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            arr_30 [i_1] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4133913U)) ? (4049302421U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 800106730U)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 2] [i_0] [i_0 - 1])) >= (((/* implicit */int) min((var_6), ((unsigned char)7))))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */_Bool) 2147352576U)) || (((/* implicit */_Bool) arr_11 [i_1])))))))));
                        }
                        arr_31 [i_7 + 1] [i_1] [i_1] [i_0] = ((/* implicit */short) 17965911718448145512ULL);
                        arr_32 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)10633))) ? (((((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1] [i_6] [i_7 - 1])) << (((2147614719U) - (2147614704U))))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)4096))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_1 - 1] [i_6] [i_9])) ? (19ULL) : (((/* implicit */unsigned long long int) arr_34 [i_0 + 1] [i_1 + 1] [i_6 + 1] [i_9]))));
                        var_29 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_12 [i_9] [i_6] [i_0])))) - (((/* implicit */int) arr_2 [i_6 + 1] [i_1 - 1] [i_0 - 2]))));
                        var_30 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))) & (var_8)))));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_9] [i_0 - 3] [i_0 - 3] [i_0 - 3]))))) ? ((~(800106731U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_0 - 3] [i_9])) - (((/* implicit */int) var_1)))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_10 = 2; i_10 < 23; i_10 += 1) 
    {
        for (unsigned int i_11 = 1; i_11 < 23; i_11 += 2) 
        {
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 22; i_13 += 1) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_52 [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10 - 1] [i_10] = ((/* implicit */signed char) min((((4133913U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_10] [i_10])))))))), (((/* implicit */unsigned int) (signed char)-35))));
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((4133927U), (arr_41 [(signed char)14] [i_10]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_46 [i_10] [i_10] [i_12] [i_13])))))))) ? (min((((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))));
                                var_33 -= ((signed char) ((unsigned long long int) 4133894U));
                                var_34 = ((/* implicit */_Bool) (-((+((-(arr_47 [i_11] [i_12] [i_13] [i_14 - 1])))))));
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (max((arr_47 [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 2]), (4290833398U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_10 - 1] [i_12] [i_10] [i_10 - 2])))));
                }
            } 
        } 
    } 
}
