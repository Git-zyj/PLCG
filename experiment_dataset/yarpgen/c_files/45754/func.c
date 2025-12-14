/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45754
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
    var_13 = var_12;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_0 + 2])) * (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_0 + 1])))) << (((var_5) - (8923686158556381901ULL)))));
            arr_5 [i_0] [i_1] = ((/* implicit */short) (unsigned char)113);
            var_15 = ((/* implicit */signed char) arr_1 [i_0]);
        }
        for (short i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (signed char)64);
                            var_17 ^= ((/* implicit */unsigned int) (signed char)7);
                        }
                    } 
                } 
            } 
            var_18 ^= ((/* implicit */_Bool) (signed char)7);
        }
        var_19 = ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] [i_0]);
    }
    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 2; i_8 < 7; i_8 += 3) 
            {
                for (int i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((-4791852850980369797LL) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9 + 1] [i_8 - 2] [i_8])))));
                        var_21 = ((/* implicit */signed char) var_4);
                        arr_26 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8 + 3] [i_6] [i_9 + 1] [i_9]))) + (1303059417U)));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_9 - 3] [i_9] [i_9] [i_9 + 1] [i_7] [i_9])) << (((/* implicit */int) var_11))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) arr_11 [i_6] [i_6] [i_6] [i_7]);
            var_24 *= 4294967276U;
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8188)) + (((/* implicit */int) arr_4 [i_10] [i_10] [i_6]))));
            arr_30 [i_10] [i_6] [i_6] = ((/* implicit */signed char) arr_19 [i_10] [i_10] [i_6]);
        }
        for (long long int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
        {
            var_26 -= ((/* implicit */signed char) 20U);
            var_27 = ((/* implicit */short) ((arr_10 [i_6] [i_11]) + (((/* implicit */unsigned long long int) arr_20 [i_6] [i_11] [i_11]))));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    {
                        var_28 -= ((/* implicit */unsigned int) arr_22 [i_6] [i_11] [i_12] [i_13]);
                        var_29 = ((/* implicit */unsigned short) arr_32 [i_6] [i_12] [i_13]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_14 = 1; i_14 < 9; i_14 += 4) 
        {
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_9 [i_6] [i_6] [i_14]))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    {
                        var_31 = ((/* implicit */long long int) arr_1 [i_6]);
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_2))));
                        var_33 += ((/* implicit */unsigned long long int) -8973685908421296313LL);
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned int) (_Bool)0);
        var_35 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((arr_38 [i_6] [i_6] [i_6]), (arr_38 [i_6] [i_6] [i_6]))))) / (-8973685908421296313LL)));
        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_4)) + (arr_36 [i_6])));
    }
}
