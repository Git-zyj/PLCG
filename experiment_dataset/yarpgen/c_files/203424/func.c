/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203424
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
    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) ((signed char) (unsigned short)9778)))))) ? (((/* implicit */unsigned long long int) (-(var_14)))) : (min((10885279982632534192ULL), (((/* implicit */unsigned long long int) (~(var_13))))))));
    var_16 = ((/* implicit */int) max((0LL), (((/* implicit */long long int) var_11))));
    var_17 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40698))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_12))))) : (285987658U)))));
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (arr_1 [i_0 - 3])))) ? (max((((/* implicit */unsigned long long int) (unsigned char)108)), (10385054894867023743ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (779145649U)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)15138)) >> (((((/* implicit */int) (short)-21251)) + (21259)))))), (((((/* implicit */_Bool) (short)23578)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (var_14))))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) var_10)))), ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (-(2002618152483423916LL)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) var_2)) : (arr_0 [(unsigned char)5] [i_2])))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */int) var_0);
                        var_21 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (short)-3340)), (((unsigned long long int) arr_5 [i_3] [i_2] [i_0] [i_0])))), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (_Bool)1)), (-2147483640))))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_0 - 1]));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [15U] [(unsigned short)8] [i_2] [i_0 - 4] [i_0] [i_0 - 3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-23579))));
                            var_24 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0] [7] [i_0] [i_0 + 1] [i_0 - 2]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (4008979637U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((-3977555927851507462LL) & (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_1] [8ULL]))))))))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 3054518930U))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 4] [i_0 + 1])) : (arr_6 [(unsigned short)17] [i_0 + 1] [i_2])));
                            arr_18 [i_6] [i_0] [i_2] [(unsigned short)13] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)0);
                            arr_19 [i_0 - 1] [i_0 - 2] [(unsigned char)5] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                        }
                        /* LoopSeq 2 */
                        for (int i_7 = 2; i_7 < 22; i_7 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-5423934512699247427LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_28 = ((/* implicit */unsigned char) ((_Bool) (signed char)-121));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) var_13)))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_25 [i_0] [9] [i_0] [13] [i_0] = ((/* implicit */signed char) arr_3 [8U] [i_0 - 4] [i_0]);
                            var_29 = ((/* implicit */unsigned char) -1400731859);
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)0)))) / (((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_0] [i_0 - 4] [i_0] [i_0]))))))));
                            var_31 |= ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) var_8)) - (18)))));
                            var_32 |= ((/* implicit */unsigned char) (signed char)-68);
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) var_6);
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41837))) == (arr_5 [i_9] [(short)2] [i_1] [1U]))))));
                            arr_29 [(_Bool)1] [i_0] [i_2] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) ((int) arr_9 [i_9]));
                            var_35 = ((signed char) var_10);
                        }
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) % ((~(-5423934512699247427LL)))));
                            arr_35 [i_0] = ((/* implicit */signed char) (_Bool)0);
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4096)) % (-1)));
                        }
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_4)) ^ (var_14)));
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)50340))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                        {
                            arr_41 [i_0 + 1] [2] [(short)10] [i_1] [i_2] [i_4] [i_0] = ((/* implicit */unsigned char) (~(arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] [15U])));
                            arr_42 [17] [i_4] [i_0] [i_1] [i_0 + 1] = ((/* implicit */_Bool) var_10);
                            var_39 = ((/* implicit */unsigned char) (signed char)30);
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((unsigned short) var_2)))));
                            var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [2LL] [i_2] [i_2] [i_4] [i_12])) : (((/* implicit */int) var_9))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            {
                                arr_51 [i_0 - 3] [i_1] [i_0] [i_13 - 2] [i_14] = (+(((/* implicit */int) ((((unsigned long long int) 1560425850601142399LL)) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_7)) & (((/* implicit */int) var_12)))), (((var_13) & (((/* implicit */int) var_10))))))) ? (((int) min((-2040915211), (((/* implicit */int) (unsigned short)41007))))) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))))))));
                                var_43 ^= ((/* implicit */long long int) max(((+(((((/* implicit */_Bool) arr_16 [(unsigned char)16] [i_2] [i_2] [(short)4] [i_1] [(unsigned short)17] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (var_14))))), (((/* implicit */unsigned int) max((((signed char) 8636595595692209370LL)), (((/* implicit */signed char) ((((/* implicit */int) var_11)) < (var_4)))))))));
                                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (arr_6 [i_1] [i_2] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20))))), (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_14] [i_2] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
