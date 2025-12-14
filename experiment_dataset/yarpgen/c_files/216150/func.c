/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216150
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) var_14))))) ? ((-(((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 += ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */int) arr_0 [(unsigned short)4]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_13))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_1] [i_1]))));
                    var_18 = ((/* implicit */int) (~(1635947121U)));
                }
            } 
        } 
        arr_11 [i_1] |= ((/* implicit */short) ((signed char) (-(592828401))));
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_1))));
            arr_14 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_4])) & (((/* implicit */int) arr_8 [i_4]))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            var_20 |= ((/* implicit */_Bool) arr_4 [i_1]);
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_8] [i_5] [i_1])) ? (((((/* implicit */int) var_1)) / (((/* implicit */int) (unsigned short)13839)))) : (((/* implicit */int) ((signed char) var_7)))));
                            var_22 |= ((/* implicit */unsigned long long int) arr_1 [i_8]);
                            arr_27 [i_5] [i_1] [i_5] [i_5] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_5]);
                        }
                    } 
                } 
            } 
            arr_28 [(short)1] [i_5] = ((/* implicit */signed char) var_10);
        }
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
        {
            arr_31 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) arr_0 [i_1]);
            arr_32 [i_9] [i_9] [i_1] = ((/* implicit */_Bool) var_3);
            arr_33 [i_1] [i_9] = ((/* implicit */short) (-(((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9]))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (int i_12 = 1; i_12 < 10; i_12 += 3) 
                {
                    {
                        arr_44 [i_1] [i_10] [i_12] [i_12] [i_1] = ((/* implicit */unsigned char) var_2);
                        arr_45 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_9 [i_10] [i_10] [i_12 - 1]))))) ? (((int) var_10)) : (((int) arr_12 [i_1]))));
                    }
                } 
            } 
            arr_46 [i_1] [i_1] [i_10] = ((/* implicit */unsigned short) var_0);
            arr_47 [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_13))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2598937710U)))))));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                for (short i_14 = 3; i_14 < 10; i_14 += 3) 
                {
                    {
                        arr_56 [i_10] [i_13] [i_10] [i_10] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_9))));
                        arr_57 [i_1] [i_10] = ((/* implicit */unsigned long long int) var_6);
                    }
                } 
            } 
        }
    }
    for (short i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
    {
        arr_62 [i_15] = ((/* implicit */unsigned short) var_5);
        arr_63 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-76))));
    }
    var_24 = ((/* implicit */unsigned char) ((var_3) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))))));
}
