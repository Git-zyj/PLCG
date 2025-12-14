/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31676
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
    for (short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                    var_20 = ((/* implicit */unsigned char) (((~(6287879944556397130ULL))) >= (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_13)))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) min((var_9), (var_4)))))) >> ((((-(var_7))) + (5909921492176547091LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_5)));
                var_22 = max((var_18), ((-(min((var_18), (((/* implicit */int) var_16)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned short i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            for (int i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                    var_24 = ((/* implicit */unsigned int) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_8 = 1; i_8 < 12; i_8 += 2) 
    {
        var_25 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) & (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_12)))))));
        var_26 = ((/* implicit */unsigned char) (~((+((~(var_7)))))));
        arr_26 [(short)12] [i_8] = ((/* implicit */unsigned long long int) var_6);
        var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_18)) : (var_7)))))) % (((var_15) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 10; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_12 = 1; i_12 < 8; i_12 += 3) /* same iter space */
                    {
                        arr_37 [i_9] [i_12] [i_12] [i_12] [i_10] [i_9] = ((/* implicit */short) var_15);
                        arr_38 [2] = ((/* implicit */unsigned char) ((var_5) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
                        arr_39 [i_9] [i_10] [7] [(signed char)4] [i_12] &= ((/* implicit */signed char) ((var_18) >= (((/* implicit */int) var_3))));
                    }
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */int) (-((-(min((((/* implicit */unsigned int) var_8)), (var_5)))))));
                        var_29 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_7)), (var_15))), (((/* implicit */unsigned long long int) ((var_7) / (var_6))))));
                        var_30 += ((((/* implicit */_Bool) (-((~(((/* implicit */int) (short)1008))))))) ? (max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) 5ULL)) ? (18446744073709551611ULL) : (11ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))));
                        var_31 = (+(((((/* implicit */_Bool) 5ULL)) ? (988098134469112615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30822))))));
                    }
                    for (long long int i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) var_14)) : (var_15))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12)))));
                        var_33 = ((/* implicit */unsigned int) (~(min((var_12), (((/* implicit */unsigned long long int) var_4))))));
                        var_34 &= ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_6)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        for (short i_16 = 1; i_16 < 9; i_16 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((var_18) > (((/* implicit */int) var_4))));
                                arr_48 [i_9] [i_10] [i_10] [i_10] [i_11] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)-26)), (((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)20314)), (2060968636)))) / (1463376836579436926ULL)))));
                                var_36 = ((/* implicit */unsigned char) ((max((var_1), (((/* implicit */int) var_16)))) ^ (((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                                var_37 = ((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) var_11))))), (((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        for (signed char i_18 = 1; i_18 < 7; i_18 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */short) (-(var_18)));
                                var_39 = ((/* implicit */short) min((max(((~(var_12))), ((-(18446744073709551610ULL))))), (((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) var_11))))))))));
                                var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (max((18446744073709551610ULL), (((/* implicit */unsigned long long int) 3316804292U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17)))))));
                            }
                        } 
                    } 
                    var_41 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_17)))))))) == ((-((~(((/* implicit */int) var_4))))))));
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        for (long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? ((+(var_5))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))))))));
                                arr_60 [i_9] [i_9] [(short)2] [(unsigned short)8] [i_11] = ((/* implicit */long long int) var_13);
                                var_43 = ((/* implicit */unsigned long long int) var_13);
                                var_44 |= ((/* implicit */unsigned char) (+((+((+(((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_2)))) & (var_1)));
        var_46 = ((/* implicit */short) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (var_12))))));
    }
}
