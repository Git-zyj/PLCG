/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210424
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
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) + (-1115433672928841155LL))), (((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((((long long int) (unsigned char)157)) - (149LL))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */short) (~(((/* implicit */int) min(((unsigned short)19267), ((unsigned short)19254))))));
                                var_18 = ((/* implicit */int) ((long long int) var_0));
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) min((var_9), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)19267)) : (((/* implicit */int) (unsigned short)46269)))) << (((((/* implicit */int) (unsigned short)46268)) - (46261)))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0] [i_1] [i_2]) | (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(max((((/* implicit */long long int) var_15)), (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35036)) ? (((((/* implicit */int) (unsigned short)19256)) << (((/* implicit */int) (unsigned char)6)))) : (((/* implicit */int) (unsigned short)19245))));
                        arr_19 [11] = ((/* implicit */unsigned char) (+(33554428)));
                        var_20 = ((/* implicit */long long int) ((min((((((/* implicit */int) var_13)) << (((((var_4) + (6609087199767722919LL))) - (4LL))))), ((~(arr_3 [i_1] [i_1]))))) + (((/* implicit */int) arr_10 [i_1]))));
                    }
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_9 [i_6 + 1] [1U] [i_2] [i_2] [i_1] [1U])) ? (((((/* implicit */_Bool) var_10)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (unsigned short)19265)))) : (((/* implicit */int) (unsigned char)86)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) == (arr_16 [i_0] [18LL] [14] [i_6 + 1]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) (+(-17592186044416LL)));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))) ? (((/* implicit */long long int) var_9)) : ((~(var_4)))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                        {
                            arr_28 [i_8] [i_8] [i_6 - 1] [(signed char)5] [i_2] [(signed char)5] [i_0] &= ((/* implicit */unsigned char) arr_7 [6] [6] [i_2] [i_2] [6] [6]);
                            arr_29 [i_0] [i_0] [i_1] [i_2] [12U] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)19265))))), (var_6)))) && (((((/* implicit */int) var_8)) < (((/* implicit */int) var_10))))));
                            var_24 -= ((/* implicit */int) var_7);
                            var_25 = ((/* implicit */unsigned short) arr_25 [i_1] [i_1]);
                        }
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                        {
                            arr_33 [i_0] [i_0] [i_0] [3U] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 729879779)) ? (((/* implicit */int) (unsigned short)19272)) : (1696134131)));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) << (((arr_11 [i_6] [i_6] [i_6 - 1] [(unsigned short)12] [i_6]) + (1895101405316976186LL)))))) ? (((/* implicit */int) ((unsigned char) var_15))) : (((((((/* implicit */int) var_7)) >> (((((/* implicit */int) var_13)) - (172))))) << (((var_4) + (6609087199767722910LL)))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_27 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((17592186044416LL) >= (-17592186044411LL)))), (var_7)));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (((-(((/* implicit */int) arr_24 [i_6] [(unsigned short)14] [(unsigned char)18] [i_6 + 1] [i_2] [(_Bool)1] [(unsigned char)18])))) << (((((((/* implicit */int) var_12)) + (149))) - (7))))))));
                            var_29 += ((/* implicit */_Bool) ((((arr_4 [i_6 - 1] [i_6 - 1] [i_10]) << (((((/* implicit */int) ((unsigned char) var_4))) - (106))))) << (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46280))))) << (((((/* implicit */int) arr_21 [i_6] [i_6] [i_6 + 2] [(signed char)0])) + (30)))))));
                            var_30 += ((/* implicit */long long int) arr_26 [i_0] [i_0] [i_2] [i_6] [i_10]);
                        }
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_38 [(unsigned char)2] [i_0] [17LL] [(unsigned short)14] [i_0] = ((((/* implicit */_Bool) (unsigned short)46269)) ? (((/* implicit */int) (short)13791)) : (((/* implicit */int) (unsigned short)46269)));
                            var_31 = max((((/* implicit */long long int) (-(var_6)))), ((~(max((((/* implicit */long long int) 1027261547)), (var_4))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */signed char) ((arr_27 [i_0] [(signed char)6] [i_0] [i_1] [i_2] [i_0] [(short)15]) < (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        var_33 = ((/* implicit */int) max((var_33), (arr_3 [i_2] [i_0])));
                        var_34 ^= ((/* implicit */unsigned int) arr_26 [i_12] [i_2] [(short)11] [i_1] [4U]);
                        arr_42 [i_12] [i_2] [15LL] [15U] [i_12] [i_1] = ((/* implicit */int) arr_30 [i_0] [i_0] [(unsigned short)13] [i_0] [i_0]);
                        arr_43 [i_12] [i_12] [i_2] [(unsigned short)5] [i_2] = ((/* implicit */short) arr_37 [(_Bool)0] [(unsigned char)11] [i_1] [i_1] [i_1] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) var_1);
                                var_36 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_15) | (((/* implicit */int) arr_35 [i_0] [i_1] [i_2] [i_2] [i_13 - 1] [i_13] [i_14]))))) ? (-1027261543) : (((/* implicit */int) arr_2 [i_13 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
