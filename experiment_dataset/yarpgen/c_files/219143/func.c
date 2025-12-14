/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219143
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [(unsigned char)2] |= ((/* implicit */unsigned short) arr_0 [i_0]);
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)248)))))));
        arr_3 [i_0] = ((/* implicit */long long int) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) (_Bool)1))), ((+(((((/* implicit */_Bool) (signed char)-113)) ? (2941350889U) : (1353616407U)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) ((unsigned char) arr_5 [i_1]));
        var_21 = ((/* implicit */signed char) var_1);
        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1] [i_1]))));
    }
    for (unsigned char i_2 = 4; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_23 = (signed char)101;
        arr_11 [i_2 + 2] &= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((2915443003233637781LL), (((/* implicit */long long int) 1353616400U))))) ? (arr_5 [i_2 - 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 4] [i_2])) ? (((/* implicit */int) arr_10 [5])) : (((/* implicit */int) arr_9 [i_2 - 3] [i_2 + 3])))))))));
        arr_12 [i_2 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (var_18) : (((/* implicit */unsigned long long int) 2941350896U))))) ? (((((/* implicit */long long int) var_16)) - (-3100319691560762807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (3785860870U) : (var_19)))) ? (((/* implicit */long long int) ((unsigned int) arr_5 [i_2 - 2]))) : (max((((/* implicit */long long int) var_19)), (arr_5 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-64)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2 - 3]))))))));
        var_24 = ((/* implicit */int) min((var_24), (((((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 2])) >= (((/* implicit */int) arr_10 [i_2 - 2]))))) * (((/* implicit */int) arr_10 [i_2 - 1]))))));
        arr_13 [(unsigned char)12] [8U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1]))) - ((-(1353616400U)))))) ? (((unsigned int) min((var_18), (((/* implicit */unsigned long long int) arr_10 [i_2 - 3]))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_2 - 4] [i_2])) - (((/* implicit */int) var_1)))) + (((((/* implicit */int) (unsigned short)15261)) - (((/* implicit */int) var_10)))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_4 = 4; i_4 < 12; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 4; i_6 < 11; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) (((-(arr_26 [i_5] [i_5] [i_5]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_5)) < (1886621693U)))))));
                        arr_27 [i_6 + 2] [(short)0] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_3 + 1]));
                        arr_28 [i_3] [i_4 - 4] [i_3] [i_4 - 4] [i_6] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4251)) << (((/* implicit */int) var_6))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [2U] [2U] [i_3 - 4] [i_3 - 3] [i_5] [i_4 + 1])) ? (((/* implicit */int) arr_25 [i_3 - 3] [i_4] [i_3 + 2] [11U] [i_3 - 4] [i_4 - 4])) : (((/* implicit */int) arr_25 [i_4] [(signed char)4] [i_3 + 2] [i_3] [(unsigned short)3] [i_4 - 4]))));
                    arr_29 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)0))));
                    var_27 = ((/* implicit */unsigned char) var_2);
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_33 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_4 + 1])) ? (((/* implicit */long long int) ((unsigned int) arr_25 [1] [i_3] [i_3 - 1] [i_4] [i_3 - 1] [i_7]))) : (((((/* implicit */_Bool) arr_26 [i_4] [(unsigned short)6] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (arr_5 [i_3])))));
                        arr_34 [i_3] [i_4] [i_5] [i_7] |= ((/* implicit */int) (+(((((/* implicit */_Bool) 473564769)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3 + 1] [i_3] [i_3] [i_3 - 3] [i_3] [i_3]))) : (arr_5 [i_3 - 1])))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((long long int) -473564761)) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_4 - 4]))))))));
                    }
                }
            } 
        } 
        var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -388075687)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_14 [i_3] [i_3])))) ? (arr_23 [i_3] [i_3] [i_3]) : ((~(((/* implicit */int) var_12))))));
        var_30 = ((/* implicit */long long int) ((int) arr_16 [i_3 + 2]));
        var_31 &= ((/* implicit */unsigned int) 1612491250);
    }
    var_32 = ((/* implicit */unsigned int) var_9);
}
