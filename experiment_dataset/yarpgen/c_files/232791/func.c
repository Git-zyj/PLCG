/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232791
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
    var_20 |= ((/* implicit */unsigned short) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_7 [i_1] [i_1] = 3813938330U;
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((signed char) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) arr_6 [i_0]))))))));
            var_22 += (+(((/* implicit */int) arr_6 [i_0])));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) - (((unsigned long long int) arr_1 [i_0] [i_1]))));
            var_24 ^= ((/* implicit */short) var_7);
        }
        var_25 += ((/* implicit */short) ((((/* implicit */unsigned int) arr_3 [i_0] [i_0])) * (arr_4 [i_0] [i_0] [i_0])));
    }
    for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
    {
        var_26 = ((/* implicit */int) var_5);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_19))));
            var_28 = ((/* implicit */int) arr_6 [i_2 - 4]);
            arr_14 [i_2 + 1] = ((/* implicit */short) ((signed char) (~(arr_3 [i_3] [i_2 - 1]))));
            var_29 = ((/* implicit */short) ((((/* implicit */int) max((arr_12 [i_3] [i_2]), (((/* implicit */short) ((_Bool) var_2)))))) <= (((/* implicit */int) arr_13 [i_3]))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */_Bool) arr_10 [i_2] [i_2 - 3] [i_4]);
            var_31 = ((/* implicit */unsigned char) var_14);
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_27 [i_6] = ((/* implicit */_Bool) (~((+(((/* implicit */int) min((arr_0 [i_2 - 2] [i_4]), (((/* implicit */short) arr_20 [i_6] [i_4] [i_5] [i_6])))))))));
                            arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] |= ((/* implicit */int) arr_26 [i_7] [i_6] [i_4] [i_2]);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_26 [i_2 - 1] [i_2 - 4] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_9 [i_2 - 2])) : (((/* implicit */int) var_15)))), (((arr_3 [i_2 - 3] [i_2 - 3]) + (((/* implicit */int) arr_26 [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_2])))))))));
            arr_29 [i_2] [i_4] = ((/* implicit */unsigned short) var_3);
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                for (int i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
                        {
                            var_33 += ((/* implicit */signed char) (+(arr_38 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 3] [i_2])));
                            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_14))));
                            arr_41 [i_11] [i_10] [i_9] [i_10] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_2 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_11])))) : ((-(arr_30 [i_11])))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            arr_46 [i_10] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 1] [i_8] [i_9 + 1]))) != (var_4))))) == (481028966U)));
                            var_35 = ((/* implicit */short) var_8);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
                        {
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2 - 4] [i_8] [i_9 + 1])) ? (arr_24 [i_9 - 1] [i_8] [i_9] [i_2] [i_10 + 2] [i_13] [i_9 - 1]) : (((/* implicit */unsigned long long int) var_2))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_6)) - (37)))))));
                            var_37 = ((/* implicit */short) 1135383551);
                            var_38 = ((/* implicit */_Bool) var_12);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((arr_22 [i_2 - 3] [i_2 - 3] [i_9] [i_9 - 1]) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_11))))))))));
                            arr_51 [i_10] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_14] [i_10] [i_9 - 1] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_38 [i_10] [i_2] [i_9] [i_8] [i_10]) != (((/* implicit */unsigned int) var_12)))))) : (((long long int) arr_11 [i_2 - 1] [i_8]))));
                        }
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_9 + 2] [i_9 + 1] [i_9])) ? (((((/* implicit */int) arr_34 [i_2 - 3] [i_2 - 3] [i_2] [i_2 - 4])) / (-400674777))) : (((/* implicit */int) var_7))));
                    }
                } 
            } 
            var_41 = ((/* implicit */unsigned char) ((arr_30 [i_2 - 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_47 [i_8] [i_8] [i_2] [i_2] [i_2 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_16 [i_2 + 1] [i_2] [i_2 - 1])))))));
            /* LoopNest 2 */
            for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                for (int i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    {
                        var_42 &= ((/* implicit */long long int) arr_23 [i_2 - 4] [i_16] [i_16]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            arr_61 [i_17] [i_16] [i_15] [i_8] [i_2 - 2] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_2] [i_2 - 3] [i_2 + 1] [i_2 + 1])) >> (((((/* implicit */int) arr_21 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 2])) - (28456)))));
                            var_43 = ((/* implicit */unsigned char) ((var_2) == (((/* implicit */int) var_5))));
                        }
                        for (long long int i_18 = 1; i_18 < 13; i_18 += 1) /* same iter space */
                        {
                            var_44 ^= ((/* implicit */short) ((unsigned long long int) arr_42 [i_2 + 1]));
                            var_45 *= ((/* implicit */_Bool) var_4);
                            var_46 ^= ((/* implicit */unsigned short) (+(arr_24 [i_18 + 3] [i_16] [i_16] [i_15] [i_8] [i_8] [i_2 + 1])));
                            arr_65 [i_16] [i_16] [i_15] [i_8] [i_16] &= ((/* implicit */short) (-(arr_31 [i_16])));
                        }
                        for (long long int i_19 = 1; i_19 < 13; i_19 += 1) /* same iter space */
                        {
                            var_47 ^= ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)0)))) + (((/* implicit */int) var_8))));
                            arr_70 [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 2] = ((/* implicit */int) var_14);
                            var_48 = ((/* implicit */unsigned long long int) arr_50 [i_2 - 2] [i_16] [i_2 - 3] [i_16] [i_19] [i_19 + 2] [i_15]);
                        }
                        var_49 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_60 [i_2] [i_2 - 2] [i_2] [i_2 - 4] [i_2]))));
                    }
                } 
            } 
        }
        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */short) (_Bool)0))))) ? (var_12) : (((/* implicit */int) var_18))));
        var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_67 [i_2 - 2] [i_2 - 4] [i_2] [i_2] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2] [i_2 + 1]))))))))) == (min((max((((/* implicit */unsigned long long int) var_16)), (var_4))), (((/* implicit */unsigned long long int) arr_6 [i_2 - 3]))))));
    }
}
