/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234695
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
    var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), ((~((+(((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) (_Bool)1);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)1] [i_2] [i_0] = ((/* implicit */unsigned char) ((arr_11 [i_0] [i_1 - 1] [i_2] [i_3] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                                var_15 *= ((/* implicit */short) 1498821936);
                                var_16 = ((/* implicit */long long int) (-(arr_2 [i_3 + 1])));
                                var_17 += (!(((/* implicit */_Bool) var_0)));
                                var_18 = ((/* implicit */unsigned short) (signed char)7);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2] [i_2] [i_0])) ? ((~(((/* implicit */int) (unsigned short)36292)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) > (var_6))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 6; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */signed char) (+(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 + 2])));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_5))));
                                var_22 += ((/* implicit */unsigned long long int) ((unsigned short) var_10));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (int i_8 = 1; i_8 < 8; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_8 - 1] [(unsigned short)4] [i_8] [i_8 + 1] [i_0] [i_0] [i_0]))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_8] [i_8] [i_8] [i_8 + 2] [i_0] [1ULL]))));
                    arr_29 [i_7] [i_7] [i_7] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_8] [i_7] [i_8 + 2] [i_8]))));
                    arr_30 [i_0] = ((((/* implicit */_Bool) (-(var_12)))) ? (arr_28 [i_8 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((arr_13 [i_0] [(short)3] [i_7] [i_7] [i_8 - 1]) - (1376942848)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        var_25 = ((/* implicit */int) arr_32 [i_9]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 3; i_10 < 12; i_10 += 3) 
        {
            arr_37 [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_10 + 1])) ? (arr_33 [i_10 - 3]) : (arr_33 [i_10 - 1])));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    {
                        arr_46 [6] [i_10] [i_10] [6] [i_12] [i_12 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_12] [i_11] [4] [9ULL] [4]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [(unsigned char)8] [(unsigned char)8] [i_9])))))));
                        var_26 |= ((/* implicit */unsigned short) var_12);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
    {
        arr_49 [i_13] = ((/* implicit */signed char) ((unsigned short) -1498821936));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (arr_48 [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55155))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) (signed char)58);
        var_29 = ((/* implicit */int) ((short) arr_47 [i_14]));
        var_30 = 1498821922;
        var_31 = ((/* implicit */signed char) (-(((((/* implicit */int) var_3)) - (((/* implicit */int) var_0))))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (unsigned char i_16 = 1; i_16 < 12; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    {
                        var_32 ^= ((/* implicit */short) (-(((/* implicit */int) var_7))));
                        var_33 = ((/* implicit */short) ((unsigned long long int) arr_54 [i_16 + 1] [i_16 + 1] [i_16 + 1]));
                        var_34 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                        var_35 = ((/* implicit */_Bool) (-(arr_57 [1ULL] [i_16 + 1] [(short)4])));
                        var_36 = ((/* implicit */unsigned long long int) (unsigned char)31);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        for (short i_19 = 0; i_19 < 21; i_19 += 1) 
        {
            {
                arr_65 [i_18] [i_19] = ((/* implicit */int) var_7);
                var_37 = (-2147483647 - 1);
            }
        } 
    } 
    var_38 = ((/* implicit */long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_3))))));
}
