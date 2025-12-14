/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2358
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
    var_13 = ((/* implicit */unsigned int) (signed char)106);
    var_14 ^= ((/* implicit */unsigned int) ((var_12) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? ((+(((/* implicit */int) var_12)))) : (min((-474004829), (((/* implicit */int) (unsigned short)3)))))) : (92281437)));
    var_15 ^= ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (var_7)))), (var_4)))) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (((int) (~(((/* implicit */int) (unsigned char)67)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) max((var_8), (((/* implicit */long long int) min((((/* implicit */int) var_12)), (arr_5 [i_1] [i_2 - 3] [i_1]))))));
                    arr_7 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) var_11);
                    arr_8 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */signed char) max((arr_3 [2] [i_0]), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                }
            } 
        } 
        arr_9 [i_0] = (!(((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_0]))));
        arr_10 [i_0] [i_0] = var_11;
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_5);
                    var_18 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_3 + 4])) ? (((/* implicit */long long int) 92281444)) : (var_1)))) ? (min((92281427), (((/* implicit */int) arr_2 [i_4] [i_3 - 1])))) : (((/* implicit */int) arr_2 [i_0] [i_3 + 3]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        arr_18 [i_5] = ((/* implicit */short) ((long long int) (+(arr_16 [i_5]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 2; i_6 < 11; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((signed char) arr_28 [i_5] [i_5] [i_6 + 1] [i_9 - 1] [i_9 - 1] [i_5] [i_9 - 1]));
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522)))));
                                arr_29 [i_5] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_9 - 1] [5U] [i_9]))) : (((((/* implicit */_Bool) arr_5 [i_5] [i_8] [i_5])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_5] [i_7] [i_6] = ((/* implicit */short) arr_27 [(unsigned char)2] [i_5] [i_6] [(unsigned short)1] [(unsigned short)1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        arr_33 [i_5] [i_5] [i_6 + 3] [(signed char)9] [i_5] [i_10] = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_6 + 1] [i_5] [i_7]))));
                        var_21 ^= ((/* implicit */unsigned char) (+(arr_5 [i_7] [i_7] [i_6])));
                        arr_34 [i_5] [i_5] [(short)8] [i_7] = ((/* implicit */unsigned short) ((_Bool) var_11));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            arr_37 [7] [i_5] [i_7] [i_10] [13] [i_5] [i_5] = ((/* implicit */short) (-(arr_3 [i_6 + 2] [i_5])));
                            arr_38 [i_5] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) arr_4 [(unsigned char)13] [i_5] [(unsigned char)4] [i_5]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_9)) : (9223372036854775807LL))));
                            arr_42 [i_12] [(_Bool)1] [i_5] [i_12] [i_12] = ((((((/* implicit */int) var_6)) > (((/* implicit */int) (_Bool)0)))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((-(-1645976632))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) var_10);
                            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16422)) ? (arr_35 [11] [i_6] [i_6 + 1] [i_5] [i_6]) : (arr_16 [i_5]))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                        {
                            arr_48 [i_5] [i_5] [i_7] [(unsigned short)10] = ((/* implicit */short) ((((((/* implicit */_Bool) 2147479552)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (9223372036854775807LL))) > (((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5] [i_5] [i_7])))))));
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (-512856266))))));
                            arr_49 [i_5] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) 614787079)) ? (((/* implicit */unsigned long long int) arr_16 [i_5])) : (((((/* implicit */_Bool) var_8)) ? (17159730346171564600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                            arr_50 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_47 [i_6 + 3] [i_5] [i_6 + 3] [i_5] [(signed char)11]))) ? (var_8) : (((/* implicit */long long int) -92281422))));
                        }
                        var_26 ^= ((/* implicit */_Bool) var_8);
                    }
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned int) (signed char)-115);
    }
    var_28 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) * (min((((/* implicit */unsigned long long int) var_1)), (var_4)))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_0), (var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min(((_Bool)1), (var_12)))))))));
}
