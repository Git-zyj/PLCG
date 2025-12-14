/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200533
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) -6960896050721046017LL))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_0])));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) var_7)) : (arr_0 [i_0])))) ? (((var_1) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (var_10)))) || (((/* implicit */_Bool) ((arr_1 [i_0]) & ((+(arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_0])) : (arr_6 [i_1]))))) % (((/* implicit */unsigned long long int) (~(((arr_7 [i_0] [i_0] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_2])))))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
        {
            arr_15 [i_3] [i_3] [i_4 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_3] [i_4 + 2] [i_4]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3]))) - (var_0)))) : (7718014756445745705ULL)));
            /* LoopNest 2 */
            for (unsigned int i_5 = 1; i_5 < 7; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned long long int) arr_1 [i_6]);
                        /* LoopSeq 3 */
                        for (signed char i_7 = 4; i_7 < 10; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) arr_5 [7ULL] [7ULL] [i_7]);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)102)) ? (var_0) : (arr_20 [i_3 - 1] [i_3 - 1] [i_5] [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 10728729317263805910ULL)) && ((_Bool)1)))))));
                            var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4] [i_5])) ? (var_12) : (arr_10 [1U] [i_3])));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) arr_19 [i_3] [i_6] [i_5] [i_6] [i_7] [i_7 + 1]))))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            arr_29 [i_3] [i_3] [i_5 - 1] [i_3] = (~(arr_10 [i_4 + 2] [i_5 + 2]));
                            var_20 = arr_1 [(unsigned char)10];
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3] [i_6])) ? (arr_13 [i_3] [i_8]) : (arr_13 [i_3] [i_8])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_3] [i_4] [i_5 + 3] [i_6] [i_9])) << (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_3])) < (arr_17 [i_3] [i_3] [i_5] [(signed char)8])))))))));
                            arr_33 [i_3] [i_4 - 1] [i_5] [i_5] [i_3] [i_6] [i_9] = ((/* implicit */int) arr_27 [i_3] [i_3] [(unsigned short)8] [i_3 - 2] [(unsigned short)8]);
                        }
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_34 [i_3 - 1] [i_4] [i_5] [i_5 - 1] [i_10] [(_Bool)0] [i_10]))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_4 - 1] [i_5 + 4])))))));
                            arr_36 [i_3] [i_4] [i_4 + 1] [i_3] [i_6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_12 [i_4 - 3] [i_6]))))) << (((/* implicit */int) arr_23 [i_3] [i_4] [i_4] [i_4 - 3] [i_6]))));
                            arr_37 [i_3] = (-(arr_3 [i_3 - 2] [i_5 + 1] [i_6]));
                            arr_38 [i_5] [i_3] = ((((/* implicit */_Bool) ((arr_34 [i_3] [i_3] [i_4 - 3] [i_5] [i_6] [i_6] [i_10]) % (((/* implicit */unsigned long long int) arr_1 [i_5 + 4]))))) ? (((var_9) ? (var_12) : (arr_20 [i_3 - 2] [i_4] [i_6] [i_10]))) : (arr_24 [i_3 + 1]));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            var_25 |= ((/* implicit */signed char) (~(arr_17 [i_3] [i_3 - 1] [i_3] [i_3 - 1])));
                            arr_41 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3] [i_4 - 2] [i_5] [i_6] [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_18 [i_4] [i_5 + 2] [i_5 + 2] [i_5 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3]))) : (((((/* implicit */_Bool) var_11)) ? (arr_3 [i_3] [i_3] [i_11 + 2]) : (((/* implicit */unsigned long long int) var_6))))));
                            arr_42 [2LL] [i_3] [2LL] [i_3] [i_5] [i_6] [i_11] = ((/* implicit */unsigned int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4] [i_4 + 2] [i_11 + 1] [i_11])))));
                        }
                        for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3 + 1] [i_12] [i_3 + 1] [(signed char)8] [i_6] [i_3 + 1]))) >= (arr_20 [i_3 + 1] [i_4] [i_3 + 1] [7])))))))));
                            var_27 &= ((/* implicit */signed char) ((arr_7 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_4 - 3]) ? (((/* implicit */int) arr_14 [i_6] [i_3 - 2] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_3] [i_3 - 2] [i_4] [i_4 - 3]))));
                        }
                        arr_46 [i_3] [(signed char)8] [i_5] [i_3] [10LL] [10LL] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_1 [4ULL]))));
                        arr_47 [4ULL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_5 - 1])) ? ((~(arr_10 [(signed char)8] [i_6]))) : ((~(var_10)))));
                    }
                } 
            } 
        }
        for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            arr_50 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_0 [i_3]) : (arr_0 [i_3])));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1]))) : (((((/* implicit */_Bool) var_12)) ? (arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_13]) : (((/* implicit */unsigned long long int) var_10))))));
            arr_51 [i_3] = ((/* implicit */_Bool) (-(((var_12) - (((/* implicit */long long int) arr_48 [i_3] [i_3]))))));
            var_29 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3] [i_13])) << (((((/* implicit */int) arr_43 [i_3 - 1] [(signed char)8] [i_3] [i_13] [i_13])) - (123)))))) : ((~(arr_48 [(_Bool)1] [i_13])))));
        }
        arr_52 [i_3] = ((/* implicit */unsigned int) (signed char)51);
        arr_53 [i_3] = (~(((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 1])));
    }
    var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (var_11) : (var_0)))));
}
