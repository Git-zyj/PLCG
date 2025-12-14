/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249883
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */_Bool) 8388607)) && (((/* implicit */_Bool) (unsigned char)151))))) : (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) var_2)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */int) (unsigned char)221)) * (-8388627))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [(signed char)6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 2])) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_10 [i_2] [i_3 + 1] [i_0 + 1]))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3 - 2])) || (((/* implicit */_Bool) var_7)))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_16))))))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((+(var_4))) > (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))))));
                            arr_22 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_4);
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_27 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))) | (((((/* implicit */int) var_10)) * (((/* implicit */int) var_5)))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_3] [i_6] = ((/* implicit */unsigned int) var_0);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((long long int) (~(var_8)))))));
                            arr_29 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) | (arr_6 [i_0] [i_0] [i_0])));
                        }
                    }
                    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= ((+(var_8)))))) & (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_2] [i_1] [(signed char)12] [i_1] [(_Bool)1]))))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_20 [i_1] [13LL] [i_1] [i_2] [i_7 + 2] [i_1] [i_1]) + (arr_7 [i_2] [i_2] [i_2] [i_7])))) == (var_4)));
                        var_26 = ((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_2]);
                        var_27 &= ((/* implicit */unsigned short) ((arr_21 [i_1] [i_1] [i_1] [i_1] [i_7] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_0)) <= (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))))));
                        var_28 = ((/* implicit */unsigned char) arr_9 [i_0] [(short)16] [i_7]);
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_35 [i_8] [(short)17] [i_8] [i_0] [i_8] = ((/* implicit */int) arr_0 [i_0]);
                        arr_36 [i_0] [i_2] [i_1] |= ((/* implicit */short) (((-(arr_18 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]))) >= (arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) != (((/* implicit */int) arr_3 [i_0 - 1]))));
                        var_30 += ((/* implicit */long long int) ((((/* implicit */int) var_15)) != (((((/* implicit */int) var_3)) * (((/* implicit */int) var_1))))));
                        var_31 = ((/* implicit */unsigned long long int) (-(var_4)));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_10 [(signed char)3] [(signed char)3] [i_2]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 4; i_10 < 18; i_10 += 3) 
                    {
                        arr_41 [6LL] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_4);
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((long long int) var_8)))));
                    }
                }
            } 
        } 
    } 
}
