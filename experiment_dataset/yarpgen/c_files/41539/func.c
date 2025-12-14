/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41539
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((arr_0 [i_1] [4LL]) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_1] [i_2 - 2] [i_3] [i_2 - 2])) ? (arr_10 [i_2 + 1] [i_3] [i_0] [i_2] [i_3]) : (arr_10 [i_2 - 1] [i_1] [i_2] [i_3] [4LL])));
                        arr_13 [i_0] [9ULL] [i_0] [i_3] = ((/* implicit */_Bool) arr_7 [i_3] [3] [i_0]);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0]))));
                        arr_17 [i_0] [i_0] [i_2 + 1] [i_4] = ((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_2 - 2] [i_2 - 2]) + (arr_8 [(short)10] [i_0] [i_2 - 2] [i_2 - 2])));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!((_Bool)1))))));
                            var_19 = ((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_19 [i_0] [i_6] [i_2 - 1] [i_1]) : (var_4))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0]))))));
                            arr_23 [i_2] [(unsigned short)4] [i_2] [i_2] [i_0] [5U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (4098739040U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_2 - 2] [i_2 - 2])))));
                            arr_24 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_11)))))) + ((+(arr_19 [i_0] [i_0] [i_0] [i_6])))));
                        }
                        var_20 = ((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) == (arr_3 [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        var_21 = (!(((/* implicit */_Bool) (~(var_9)))));
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_2]))));
                    }
                    var_22 = ((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_2 + 1] [i_1]))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */short) var_12)), ((short)24389)));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */int) arr_25 [0LL] [4U]);
        var_25 &= ((/* implicit */int) (unsigned char)134);
        var_26 |= ((/* implicit */unsigned int) ((arr_14 [i_8] [i_8] [i_8] [2]) < (arr_5 [i_8] [i_8])));
    }
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 17; i_9 += 1) 
    {
        for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (9156205477992163038ULL)))) ? ((+(arr_34 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_9] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1550609651)))) : (((long long int) var_12))))))))));
                var_28 = ((/* implicit */signed char) ((short) var_5));
                arr_35 [i_9 - 1] [i_10] [i_9 - 1] = ((/* implicit */int) ((unsigned int) 9156205477992163042ULL));
                /* LoopSeq 3 */
                for (int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_29 *= ((/* implicit */unsigned long long int) (+(arr_33 [i_12])));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_30 [i_9 - 1] [i_9 + 1]))));
                        var_31 = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 1 */
                        for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))) > (var_9)));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((15LL) > (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_31 [i_10])) / (arr_42 [i_9] [i_9] [i_11] [i_12] [(signed char)5])))))))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_13 - 1])) || (((/* implicit */_Bool) (short)-16089))));
                            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_12] [i_11 + 1])) || (((/* implicit */_Bool) arr_37 [i_11] [i_11] [i_12] [i_11 + 2]))));
                        }
                    }
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 392785034U))))))) / (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_33 [2LL]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_9] [8LL] [i_9] [i_10] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_11] [2U] [2U] [7LL] [i_9]))) : (arr_34 [16U]))))))))))));
                    arr_45 [i_10] [(short)0] [i_10] [i_11] = ((/* implicit */signed char) (~((~(arr_42 [i_9 + 1] [i_11 - 1] [i_11] [i_11] [i_11])))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4))))), (arr_44 [i_14] [i_14] [i_14] [i_9 - 1] [i_9]))))) / (arr_36 [i_9] [i_10] [i_10] [i_10])));
                    var_38 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_44 [i_9] [i_9] [5U] [i_14] [i_14]))))) >= (((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */unsigned long long int) -18LL)))))))));
                    arr_49 [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_31 [i_14]) ^ (((/* implicit */int) arr_44 [(unsigned short)0] [(unsigned short)0] [i_14] [i_14] [i_9]))))) ^ (((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */long long int) 0U)), (var_14))) : (((/* implicit */long long int) 2147483638))))));
                }
                for (int i_15 = 3; i_15 < 15; i_15 += 2) 
                {
                    var_39 = ((/* implicit */int) (~(-23LL)));
                    var_40 = ((/* implicit */signed char) (~(arr_51 [i_9])));
                    arr_53 [i_10] [i_10] [i_15] [i_15] = ((/* implicit */_Bool) min(((+(arr_42 [(signed char)4] [(signed char)4] [i_15] [i_15 - 2] [(signed char)4]))), (arr_42 [i_9] [i_10] [i_10] [i_15 + 3] [i_10])));
                }
            }
        } 
    } 
    var_41 = ((/* implicit */signed char) (+(((((/* implicit */int) var_5)) / (-31)))));
    var_42 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -7214076003527084056LL))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (_Bool)1))) || ((_Bool)1))))));
}
