/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249653
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
    var_14 -= ((/* implicit */unsigned int) max(((+((-(((/* implicit */int) var_1)))))), (((/* implicit */int) var_6))));
    var_15 -= ((/* implicit */long long int) (-(max((min((var_10), (((/* implicit */unsigned int) var_0)))), (1U)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((arr_2 [i_0]), (((/* implicit */unsigned int) var_4))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) & ((~(((/* implicit */int) var_0)))))))));
                    arr_11 [i_0 + 2] [i_1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) (+(arr_2 [i_0])));
                }
                /* LoopSeq 1 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_17 = ((unsigned int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0]))) - (var_10))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_3])), (var_6))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_19 [i_0 + 2] [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) var_0);
                        var_18 = ((/* implicit */unsigned int) (!((((-(((/* implicit */int) var_13)))) >= (arr_16 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_5] [i_5] [(short)3] [(_Bool)1] = ((short) 2527030541U);
                            var_19 += ((/* implicit */unsigned char) (-(2147483648U)));
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [(_Bool)1] [i_5] [i_5 + 1] [i_0 + 2]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_21 *= ((/* implicit */unsigned long long int) (+(arr_13 [i_0] [(unsigned short)2] [6])));
                            var_22 = ((/* implicit */_Bool) arr_22 [i_7] [i_3] [i_3] [i_0]);
                            arr_32 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_14 [i_5] [9] [(unsigned short)9]))))) : (((var_4) ? (((/* implicit */unsigned int) arr_6 [i_0])) : (var_10)))));
                        }
                        arr_33 [(_Bool)1] [(unsigned short)3] [(short)8] [i_3] [i_0] [(short)8] = var_13;
                        arr_34 [9ULL] [i_0] [(signed char)6] = ((long long int) arr_7 [i_5 + 1]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_38 [8ULL] [i_0] [i_3] [i_3] [(unsigned short)8] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)24203))));
                        arr_39 [i_0 + 1] [5ULL] [i_0] = ((/* implicit */unsigned short) 1001271008226635771ULL);
                    }
                    arr_40 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((max((arr_10 [i_0 + 1] [7U] [i_3] [i_0 - 1]), (((/* implicit */int) arr_31 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2])))), ((((~(((/* implicit */int) (unsigned short)0)))) ^ ((~(((/* implicit */int) arr_12 [i_1] [i_1] [(_Bool)1] [i_0]))))))));
                }
                arr_41 [i_0 + 2] [(unsigned char)8] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_6);
}
