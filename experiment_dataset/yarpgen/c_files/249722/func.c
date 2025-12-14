/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249722
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
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        var_13 *= ((/* implicit */unsigned char) (-(arr_8 [i_0] [i_1] [i_1] [(unsigned char)7] [(_Bool)1])));
                        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 6973078375449163907LL)) || (((/* implicit */_Bool) 536870904U))))))));
                        arr_9 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_1]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0 + 2] [i_1] [i_2] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (arr_6 [i_1] [(unsigned short)12] [(unsigned short)12] [i_4]) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_5 [i_0 + 3] [i_1] [i_0 - 3]))))) ? ((((!(((/* implicit */_Bool) 6973078375449163907LL)))) ? (((/* implicit */int) (unsigned short)34260)) : (arr_6 [i_1] [i_1] [i_1] [(unsigned short)8]))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0]))))) : (((/* implicit */int) (unsigned char)167))))));
                        var_15 = var_6;
                        var_16 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned int) var_4))))) % (((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1] [(signed char)6]))))))) | (((/* implicit */unsigned long long int) -1857293257428208953LL))));
                        arr_13 [(unsigned char)13] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_8) ? (arr_6 [i_1] [i_1] [i_2] [i_1]) : (((/* implicit */int) var_3))))) <= (((var_5) >> (((((/* implicit */int) var_0)) + (4994)))))))) ^ (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [5ULL] [5ULL] [i_1] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_0] [(short)1] [i_2] [i_5] [i_5]))) ? (((((/* implicit */_Bool) arr_18 [i_6] [i_1] [5ULL] [i_5] [i_6 - 1])) ? (arr_10 [i_5] [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_5] [i_6])))) : (((/* implicit */unsigned int) max((arr_8 [i_6 - 1] [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2]), (((/* implicit */int) var_8)))))))));
                                arr_20 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) arr_15 [i_0 - 2]);
                                var_17 |= ((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) (unsigned short)31297))), (max((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])), (arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_6 - 1] [i_6 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
    {
        arr_23 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_21 [i_7]))))) ? (arr_22 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) var_6);
                        arr_34 [i_7] [i_7] [i_9] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_33 [i_7] [i_7] [i_7])))) != (arr_24 [i_9] [15]));
                        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */unsigned int) arr_33 [i_7] [i_10] [i_9])) : (arr_27 [i_7] [i_7]))))));
                    }
                } 
            } 
        } 
    }
}
