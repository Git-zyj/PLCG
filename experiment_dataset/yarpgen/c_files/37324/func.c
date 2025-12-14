/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37324
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
    var_10 = ((/* implicit */long long int) max((var_10), (var_2)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)0))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_12 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_0)))))));
                    arr_11 [i_1] [i_1] [13] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_5))))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_4))));
                    arr_14 [i_0] [6ULL] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (-817533315)))) / (((unsigned int) var_7))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((((/* implicit */int) (short)31)) % (-26))) == (var_0)));
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
                                var_16 = ((/* implicit */signed char) var_8);
                                var_17 -= ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */int) max((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */short) (!(((/* implicit */_Bool) var_6)))))));
                    var_18 = ((/* implicit */unsigned long long int) var_2);
                    var_19 = ((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1]);
                    /* LoopSeq 4 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) (-(((unsigned int) min((28), (817533304))))));
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_2 [i_0] [i_1]))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        arr_32 [i_1] [(short)1] [3U] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */unsigned long long int) arr_9 [i_8] [8ULL] [i_1] [i_0])) % (var_7))))) | (((/* implicit */unsigned long long int) (+(((arr_31 [i_0]) & (((/* implicit */int) var_9)))))))));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_13 [i_0] [i_0] [i_4] [i_8]) + (3503115713247940897LL)))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), (arr_2 [i_4] [i_0]))))) % (((unsigned long long int) arr_16 [i_1] [i_1]))))));
                        var_23 = ((/* implicit */unsigned int) max((-5994797039481548828LL), (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) arr_4 [i_4] [i_1]);
                        arr_36 [i_0] [i_1] [i_4] [i_9] = arr_16 [i_0] [i_1];
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_25 &= ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_6))))), (var_9)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_1)))) != (var_5)))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(min((((long long int) (_Bool)1)), (((/* implicit */long long int) 0)))))))));
                        }
                        arr_39 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((max(((~(arr_23 [i_0] [(unsigned short)2] [i_4] [i_1] [i_0] [i_0]))), (var_7))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_22 [i_0] [i_0] [14LL] [i_4] [i_4]), (((/* implicit */int) var_1))))), (min((arr_21 [i_0] [i_4] [i_4] [i_9] [i_9]), (((/* implicit */unsigned int) (unsigned char)216)))))))));
                        var_27 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))) | (arr_27 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_1)) % (((/* implicit */int) var_1)))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        var_28 &= ((/* implicit */short) 1922015122);
                        var_29 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) arr_16 [i_0] [i_1]))) ? (((((/* implicit */_Bool) var_7)) ? (arr_27 [i_1] [i_1] [i_4]) : (((/* implicit */unsigned long long int) arr_20 [i_0] [(signed char)3] [i_11] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_4] [(_Bool)1] [i_0])) == (arr_31 [i_0]))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) arr_30 [i_0] [(unsigned short)11] [i_4] [(_Bool)0] [i_1]))) / (max((((/* implicit */long long int) var_0)), (var_2))))))));
                    }
                }
            }
        } 
    } 
}
