/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248923
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
        var_20 &= ((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0] [(unsigned short)7])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0])) : ((+(((/* implicit */int) (unsigned short)34527))))));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((max((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) 3636583792U)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (((-(((/* implicit */int) var_3)))) != (((/* implicit */int) var_5))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    var_23 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) % (((/* implicit */long long int) -1487944158)))))));
                    /* LoopNest 2 */
                    for (short i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_15))))));
                                var_25 = ((/* implicit */long long int) (-(6733289967492581992ULL)));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (+(658383504U)));
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19886))));
        var_26 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53259))) : (-7267934877298147576LL)));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_14 [3LL] [i_6] [3LL] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
        arr_21 [11LL] &= ((/* implicit */unsigned long long int) 1487944146);
        /* LoopNest 2 */
        for (short i_7 = 3; i_7 < 13; i_7 += 3) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_27 [10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-4))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_35 [i_9] [i_10] = ((/* implicit */short) ((3556421954U) | (3636583791U)));
                                arr_36 [i_10] [(unsigned short)6] [i_8] [i_8] [i_8] [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                                arr_37 [i_6] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27424)) + (((((/* implicit */int) (short)4)) + (((/* implicit */int) (signed char)121))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_38 [10] |= ((/* implicit */unsigned short) (-(1487944146)));
        arr_39 [i_6] = ((/* implicit */long long int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (!((_Bool)1))))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)249)))))));
        var_29 = ((/* implicit */unsigned char) (-((+((+(((/* implicit */int) (short)-13))))))));
        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
        var_31 = ((((/* implicit */int) arr_25 [i_11] [i_11] [i_11] [i_11])) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)34611))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)24))))));
        var_33 = ((/* implicit */long long int) (+(max((arr_28 [i_12] [i_12]), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
    var_34 ^= ((/* implicit */short) var_11);
}
