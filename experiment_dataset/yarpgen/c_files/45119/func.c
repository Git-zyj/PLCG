/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45119
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 += ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((signed char) arr_3 [i_2]))), (((short) arr_8 [i_0] [i_0])))))) : (((((/* implicit */_Bool) max((33822867456ULL), (33822867456ULL)))) ? (((/* implicit */unsigned long long int) max((arr_5 [i_0]), (((/* implicit */long long int) (signed char)23))))) : ((+(arr_0 [i_0])))))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7518130173334232803ULL)) ? (-8671819029655849599LL) : (((/* implicit */long long int) -1286376249))))) ? (((/* implicit */int) min(((signed char)-4), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (unsigned char)215))))) / (min((arr_1 [i_0] [i_1]), (arr_1 [i_1] [19LL])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) max((max(((+(var_9))), (min((var_2), (((/* implicit */int) var_6)))))), (var_9)));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        for (int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) arr_5 [i_3]);
                                var_14 = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_3] [i_4] [i_4])) : (arr_1 [i_5] [i_4]))), (((/* implicit */unsigned long long int) arr_5 [i_4 - 2])))));
                                var_15 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_4]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) - (arr_0 [i_5]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_24 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_21 [(short)5] [i_5] [i_7])) : (arr_22 [i_3] [i_4] [i_4] [13]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((arr_22 [i_8 + 2] [i_8 + 3] [i_8 + 1] [i_8 + 1]) + ((~(((/* implicit */int) arr_23 [i_5] [i_5] [i_5]))))));
                        var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_4])))))) : (arr_0 [i_3]));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [9ULL] [i_4 - 1] [(unsigned char)12])) ? (arr_17 [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_5] [i_5])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_5] [i_4 + 1] [i_3]))))) : (((/* implicit */int) arr_10 [i_8]))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) (signed char)0);
                        var_20 = ((((/* implicit */_Bool) ((unsigned int) (~(arr_25 [i_9]))))) ? (((((/* implicit */long long int) arr_8 [i_5] [i_9])) + (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_5 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_24 [i_3] [i_3] [i_4] [i_5] [i_5] [i_9])))))))));
                        arr_30 [i_4] [i_9] [i_5] [i_4 - 2] [i_5] [i_3] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */int) arr_3 [i_3])), ((~(((/* implicit */int) arr_21 [i_3] [i_4] [i_3])))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) (unsigned char)36);
                        var_22 += ((/* implicit */unsigned int) ((long long int) ((long long int) arr_22 [i_10] [i_5] [(signed char)9] [i_3])));
                        var_23 = ((/* implicit */int) 14318763047826895106ULL);
                        var_24 += ((/* implicit */signed char) arr_29 [i_3] [10LL] [i_5]);
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_25 += ((/* implicit */unsigned short) (~(arr_7 [i_12] [i_4 - 2] [i_3])));
                            var_26 &= ((/* implicit */_Bool) ((short) (~(((/* implicit */int) arr_6 [i_5])))));
                        }
                        var_27 = ((/* implicit */signed char) ((unsigned short) ((signed char) arr_26 [i_3] [i_4 - 2] [i_5] [i_3])));
                        var_28 = (((!(((/* implicit */_Bool) arr_19 [i_4] [i_4 - 2] [i_5] [i_11])))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((signed char) arr_20 [(signed char)1] [i_4] [i_3] [i_11]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 3; i_13 < 18; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_4])) : (arr_8 [i_3] [i_4])))) || (((/* implicit */_Bool) max((arr_3 [i_5]), (arr_23 [i_13] [i_5] [i_3])))))))));
                        arr_40 [i_3] [(unsigned char)13] [i_5] [i_5] [i_5] [i_4] = (+(arr_12 [i_3] [i_4] [i_5]));
                    }
                    for (signed char i_14 = 3; i_14 < 18; i_14 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_14 + 1] [i_14 - 3])) ? (((/* implicit */int) arr_31 [i_14 - 2] [i_14 - 3])) : (((/* implicit */int) arr_31 [i_14 - 3] [i_14 - 1]))))) ? (((((/* implicit */_Bool) arr_31 [i_14 + 2] [i_14 - 3])) ? (((/* implicit */int) arr_31 [i_14 - 1] [i_14 + 2])) : (((/* implicit */int) arr_31 [i_14 + 2] [i_14 - 3])))) : (((/* implicit */int) min((arr_3 [i_14 - 3]), (arr_31 [i_14 + 2] [i_14 - 2]))))));
                        var_31 *= ((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [(signed char)19] [i_14]);
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_14 [i_3] [i_3] [i_3] [18]) : (arr_33 [i_3])))) ? (((((/* implicit */_Bool) arr_42 [(signed char)15] [i_4] [i_4])) ? (((/* implicit */int) arr_39 [0ULL] [(signed char)10] [i_4] [0ULL])) : (((/* implicit */int) arr_39 [i_14] [i_4] [i_5] [(unsigned short)14])))) : (((((/* implicit */_Bool) arr_37 [i_3] [i_3] [i_3] [i_3] [(signed char)17] [i_3] [i_3])) ? (((/* implicit */int) arr_31 [i_3] [i_3])) : (arr_38 [i_14] [i_4 - 1] [10ULL] [i_14 + 2]))))))))));
                        var_33 = ((/* implicit */unsigned char) max((min((min((arr_26 [14U] [14U] [i_5] [(unsigned char)7]), (((/* implicit */unsigned long long int) arr_20 [i_14] [i_3] [i_14] [i_14])))), (((((/* implicit */_Bool) arr_41 [i_4] [i_4])) ? (arr_42 [i_4 + 1] [i_4] [i_5]) : (((/* implicit */unsigned long long int) arr_38 [i_3] [i_4 - 2] [(unsigned short)16] [i_14 - 2])))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_35 [i_4 + 1])) ? (arr_44 [i_3] [(signed char)6] [(signed char)6]) : (((/* implicit */long long int) 4103072011U)))))))));
                    }
                    var_34 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5])) ? (arr_32 [i_3] [i_3]) : (((/* implicit */unsigned int) arr_22 [i_3] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */int) arr_18 [i_5] [i_5] [i_4] [(short)12] [i_3])) : (arr_7 [i_3] [i_3] [i_5]))) : (arr_22 [i_3] [8LL] [i_3] [i_3]))) > (min((((/* implicit */int) ((short) arr_1 [i_5] [i_4]))), (((((/* implicit */_Bool) arr_12 [i_3] [4LL] [i_3])) ? (arr_7 [i_3] [i_3] [i_5]) : (arr_22 [(_Bool)1] [i_4] [i_4] [(_Bool)1]))))));
                    arr_45 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5])) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_4 [i_3]))))) ? (((((/* implicit */long long int) 4103072037U)) - (arr_17 [i_3] [i_4 - 2] [i_4]))) : (arr_2 [i_5])))) ? ((+(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) arr_41 [i_3] [i_4])) : (((/* implicit */int) arr_6 [i_5])))))) : (((/* implicit */int) ((signed char) (signed char)5)))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_6)), (var_0)))) ? ((-(var_7))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) var_2))))))) ? ((~(var_2))) : (((((/* implicit */_Bool) max((var_2), (var_9)))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_1))))));
}
