/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46708
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
    var_13 = ((/* implicit */signed char) 4292870144U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = (signed char)73;
        var_14 *= (signed char)50;
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) (signed char)60);
            var_15 &= (signed char)73;
            var_16 = ((/* implicit */signed char) 13284749814620325711ULL);
            var_17 = ((/* implicit */signed char) 2204407393U);
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (signed char)-37))));
                    arr_13 [i_3] = ((/* implicit */unsigned long long int) (signed char)-61);
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) (signed char)-28);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        arr_18 [i_0] = ((/* implicit */signed char) 1587100005U);
                        arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-75);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_19 = (signed char)73;
                            arr_22 [i_0] [i_0] [i_0] [i_0] [2ULL] = (signed char)4;
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)43)));
                        var_21 = (signed char)111;
                    }
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        var_22 &= (signed char)(-127 - 1);
        var_23 = (signed char)(-127 - 1);
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            var_24 &= 13944491227044616574ULL;
            arr_31 [i_7] [i_7] = 8778723253060423173ULL;
            var_25 = ((/* implicit */unsigned int) max((var_25), (1587100005U)));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_10 = 3; i_10 < 16; i_10 += 3) 
            {
                var_26 = (signed char)74;
                arr_37 [i_7] [i_9] [i_10] [i_10] = ((/* implicit */signed char) 2992524670608068268ULL);
                arr_38 [i_7] [i_9] [i_9] &= ((/* implicit */signed char) 2687532561503627974ULL);
            }
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                for (unsigned int i_12 = 1; i_12 < 15; i_12 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) 5305017211032012113ULL);
                        var_28 = 3282651974U;
                    }
                } 
            } 
            arr_45 [i_7] [i_7] [i_7] = (signed char)73;
            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) 5171194878944718409ULL))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            arr_50 [i_7] [i_13] = 4294967295U;
            var_30 = ((/* implicit */unsigned int) (signed char)-43);
        }
        arr_51 [i_7] [i_7] = ((/* implicit */unsigned long long int) (signed char)-90);
    }
    /* vectorizable */
    for (signed char i_14 = 1; i_14 < 23; i_14 += 1) 
    {
        arr_56 [i_14] &= ((/* implicit */unsigned int) (signed char)107);
        arr_57 [i_14 - 1] [i_14] = ((/* implicit */signed char) 2707867291U);
        arr_58 [i_14] = (signed char)-75;
        arr_59 [i_14] [i_14] = ((/* implicit */signed char) 2529285100U);
    }
    var_31 ^= (signed char)69;
}
