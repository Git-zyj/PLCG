/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234971
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_19 |= (~(var_5));
        var_20 &= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        var_21 &= ((/* implicit */signed char) var_9);
        var_22 = ((/* implicit */long long int) var_3);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_14))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_24 = var_18;
        arr_5 [i_1] [i_1] |= ((/* implicit */short) (signed char)-48);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-48))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 4; i_5 < 16; i_5 += 1) 
                {
                    {
                        var_25 *= ((/* implicit */short) (!((!(((/* implicit */_Bool) 0U))))));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_15))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
            {
                {
                    arr_22 [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1661264850)))))));
                    var_27 = ((/* implicit */signed char) (unsigned short)18953);
                    arr_23 [i_6] [i_6] [i_7] &= ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 4; i_9 < 15; i_9 += 4) 
        {
            var_28 += ((/* implicit */unsigned short) (+(18446744073709551594ULL)));
            var_29 ^= ((/* implicit */long long int) 22ULL);
        }
        arr_29 [i_8] = ((/* implicit */signed char) 16777215ULL);
        var_30 |= ((/* implicit */_Bool) (short)6949);
        var_31 += ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 2; i_12 < 13; i_12 += 3) 
                    {
                        var_32 += ((/* implicit */_Bool) (+(var_11)));
                        var_33 *= ((/* implicit */long long int) (_Bool)1);
                    }
                    var_34 -= ((/* implicit */int) (unsigned char)254);
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 14; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            {
                                arr_44 [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) -1553261587))));
                                arr_45 [i_8] = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    arr_46 [4U] [i_8] [i_8] &= ((/* implicit */long long int) 2147483640);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_15 = 2; i_15 < 23; i_15 += 2) 
    {
        for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            {
                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                arr_53 [i_16] [i_15] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_8))))));
                /* LoopNest 3 */
                for (unsigned short i_17 = 3; i_17 < 22; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        for (short i_19 = 3; i_19 < 23; i_19 += 4) 
                        {
                            {
                                var_36 ^= ((/* implicit */signed char) (unsigned short)22860);
                                var_37 |= ((/* implicit */short) var_0);
                                var_38 *= ((/* implicit */short) 16777220ULL);
                                var_39 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_17))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
