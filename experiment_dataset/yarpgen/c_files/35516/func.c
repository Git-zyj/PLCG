/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35516
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    var_19 -= ((/* implicit */long long int) arr_5 [i_2 + 2] [i_1 - 2]);
                    arr_7 [i_0] [i_0] [i_0] [i_2 - 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1] [i_1 - 3]))));
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_1 - 2] [i_0] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)7)) % (((/* implicit */int) (short)-15434))))), (2157554786503495091ULL)))));
                    arr_12 [i_0] = ((/* implicit */unsigned long long int) ((2157554786503495090ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0])), (824675629105471149LL)))) ? (((((/* implicit */_Bool) 1039687327)) ? (849345743984118440LL) : (((/* implicit */long long int) 4293305471U)))) : (min((3279722218646319558LL), (((/* implicit */long long int) 4294967295U)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        for (long long int i_5 = 1; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) -824675629105471150LL);
                                var_21 = ((/* implicit */long long int) var_14);
                                arr_19 [i_0] [i_1] [i_1] [i_0] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50275))) != (824675629105471149LL))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_5 + 2] [i_4 + 3] [i_1])) ? (arr_8 [i_5 + 2] [i_4 - 1] [i_0]) : (arr_8 [i_5 - 1] [i_4 + 3] [i_0]))))));
                                arr_20 [i_0] [i_0] [i_0] [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 0U)) / (3279722218646319558LL)));
                            }
                        } 
                    } 
                    arr_21 [i_0] = ((long long int) min((((/* implicit */long long int) 4294967290U)), ((-(-7122721798351963470LL)))));
                    var_22 = ((/* implicit */unsigned short) ((unsigned char) ((int) (unsigned short)15243)));
                }
                arr_22 [i_0] = ((long long int) min((arr_14 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2]), (7849360368926515644LL)));
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 14; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                arr_31 [12] [12] |= ((/* implicit */long long int) max(((-(2157554786503495075ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [6LL] [4LL] [i_7 + 1] [6LL])) ? (arr_26 [2LL] [i_7 - 1] [i_7 - 1] [2LL]) : (arr_26 [(unsigned short)14] [i_8] [i_7 - 1] [(unsigned short)14]))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 4294967268U)) % (18446744073709551615ULL)));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) arr_28 [i_7 - 1] [i_8] [i_0] [i_8] [i_8])) : (arr_6 [i_1 - 1] [i_1])))) ? ((-(arr_30 [i_0] [i_7 + 2] [i_1] [i_1 - 3] [i_0]))) : (((/* implicit */long long int) (+(var_17)))));
                                var_25 += ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_7 + 2] [i_7 + 2] [i_1 - 2] [i_1 - 3]) : (7849360368926515644LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_26 = max((((((/* implicit */_Bool) (-(-824675629105471149LL)))) ? (arr_33 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), ((~(arr_33 [i_9 + 1]))));
        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)50292))));
    }
    for (long long int i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
    {
        var_28 += ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_34 [i_10 - 1] [(short)0])) ? (arr_34 [i_10 + 1] [18LL]) : (arr_34 [i_10 - 1] [10LL]))));
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 24; i_11 += 1) 
        {
            for (long long int i_12 = 4; i_12 < 22; i_12 += 1) 
            {
                {
                    var_29 = ((long long int) 7849360368926515644LL);
                    var_30 = -7849360368926515624LL;
                    var_31 = ((/* implicit */long long int) max((var_31), (((((/* implicit */long long int) var_14)) / ((+(-3238961448634193862LL)))))));
                }
            } 
        } 
        var_32 |= ((/* implicit */long long int) (unsigned short)50292);
    }
    var_33 &= var_0;
}
