/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231567
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-18096)) <= (((/* implicit */int) (signed char)102))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_5);
                        var_13 += ((/* implicit */int) (signed char)-102);
                        arr_11 [i_0] [i_1] [i_0] [i_2] [11LL] [i_0] = ((/* implicit */unsigned int) ((long long int) var_3));
                        var_14 |= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [6LL]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 15; i_5 += 2) 
                {
                    {
                        var_15 = ((/* implicit */long long int) (signed char)88);
                        arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) >= (((/* implicit */int) ((_Bool) (short)-18096)))));
                        var_16 = ((int) arr_16 [i_0] [i_1] [i_4] [i_0]);
                        var_17 = ((/* implicit */_Bool) (unsigned short)7597);
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        {
                            var_18 &= ((/* implicit */_Bool) ((unsigned char) (~(6741463800754639829LL))));
                            var_19 = arr_13 [i_8] [i_7] [i_6];
                            arr_30 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((3811981839U) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)-15)))));
                var_21 |= ((/* implicit */unsigned long long int) 482985457U);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((int) 1850297510U))));
                var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_6] [i_0]))));
            }
            var_24 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        }
        for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            var_25 = arr_34 [i_0] [i_10] [i_10];
            arr_35 [i_0] [i_0] = ((_Bool) var_8);
        }
        var_26 += ((/* implicit */int) ((short) arr_22 [8] [i_0] [i_0] [8]));
        /* LoopSeq 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_0] [i_0] = arr_18 [i_0] [i_11] [i_0];
            var_27 = (~(arr_18 [i_0] [i_0] [i_0]));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_29 [i_0] [(_Bool)1] [i_12] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                arr_44 [i_0] [i_12] [i_12] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_26 [i_12] [i_12] [i_13] [i_13] [i_12]))));
                arr_45 [i_0] [8LL] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [11] [i_0])) || (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0]))));
            }
            for (long long int i_14 = 1; i_14 < 13; i_14 += 2) 
            {
                arr_49 [i_0] [i_0] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_14 + 2] [i_14 - 1] [i_14] [i_0]))));
                var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_36 [i_0] [9]))));
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    for (unsigned int i_16 = 2; i_16 < 15; i_16 += 1) 
                    {
                        {
                            arr_56 [i_0] [i_12] [(short)7] [i_0] [i_0] [(unsigned char)12] [i_15] = ((/* implicit */_Bool) arr_21 [i_12] [(unsigned short)7] [i_15] [i_0]);
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_14 - 1] [i_16 + 1] [(unsigned short)15] [(unsigned short)15])) ^ (((/* implicit */int) arr_9 [i_12] [i_14 + 2] [(_Bool)1] [i_0]))));
                            var_31 = ((/* implicit */unsigned short) arr_8 [i_0] [i_12] [i_14] [3] [4ULL] [i_0]);
                            arr_57 [i_0] [i_12] [i_12] [i_14] [i_0] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_0] [i_16] [i_14])) & (((/* implicit */int) arr_9 [i_0] [i_14 + 3] [i_12] [i_0]))));
                            arr_58 [i_0] [i_0] [i_14] [11LL] [11LL] [i_15] = ((/* implicit */int) var_3);
                        }
                    } 
                } 
            }
            arr_59 [i_0] [(unsigned short)11] [i_12] = var_0;
            arr_60 [4LL] [1U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))) * (482985463U)))) || (((/* implicit */_Bool) (short)-26444))));
        }
        arr_61 [i_0] = ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [5LL] [i_0]);
    }
    for (int i_17 = 0; i_17 < 21; i_17 += 2) 
    {
        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 643334027))));
        arr_64 [i_17] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (-(arr_62 [i_17] [i_17])))), (((var_3) % (((/* implicit */unsigned long long int) arr_63 [i_17] [i_17])))))), (((/* implicit */unsigned long long int) ((short) (unsigned char)58)))));
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 4) 
        {
            arr_71 [i_19] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_4)))));
            arr_72 [i_19] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_66 [i_19 - 1]))));
        }
        var_33 += ((((/* implicit */int) ((short) -328004331))) - (((/* implicit */int) arr_70 [i_18])));
    }
    var_34 ^= ((/* implicit */unsigned short) var_0);
    var_35 = max((((/* implicit */long long int) var_9)), ((+(min((((/* implicit */long long int) var_4)), (-5698769212225114924LL))))));
    var_36 = ((/* implicit */_Bool) (signed char)-97);
}
