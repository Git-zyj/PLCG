/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225066
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
    var_18 = ((/* implicit */unsigned char) -767741840);
    var_19 ^= ((/* implicit */unsigned long long int) (unsigned char)171);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((long long int) var_14)))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) < (((/* implicit */unsigned long long int) var_7))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_2))));
                            arr_15 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1] [i_2]))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_4]))))) ? (var_8) : (((/* implicit */unsigned long long int) var_13))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_5] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 472191865U)) ? (7841263720753063207ULL) : (((/* implicit */unsigned long long int) 472191865U))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_0 + 1]))));
                            var_23 = ((/* implicit */unsigned short) var_11);
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)15785)))));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            arr_26 [i_6] [i_0] [i_0] = var_8;
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(35184363700224LL))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_26 = ((/* implicit */short) var_0);
            arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_7] [i_7] [i_0] [i_0] [i_0] [i_0])) & ((~(var_9)))));
            var_27 = ((unsigned char) var_15);
            var_28 = var_11;
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0 - 2])) ? (((/* implicit */int) arr_22 [i_0 - 2])) : (((/* implicit */int) arr_22 [i_0 - 2]))));
            var_30 *= ((/* implicit */unsigned char) var_16);
            arr_33 [i_0] [i_8] = ((/* implicit */unsigned char) ((int) -2023678575));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    {
                        arr_40 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_1)) + (21151))))))));
                        arr_41 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                        arr_42 [i_0] [(unsigned char)8] [7ULL] [i_8] = ((int) var_17);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 24; i_11 += 4) 
    {
        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_43 [i_11 + 1])) : (((arr_44 [i_11]) & (var_14)))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3966640686U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57732))))) != (((((/* implicit */unsigned int) (-2147483647 - 1))) & (2485504873U)))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            arr_51 [21U] = ((/* implicit */int) var_2);
            var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)244))));
        }
        for (int i_14 = 3; i_14 < 22; i_14 += 4) 
        {
            arr_55 [i_12] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))));
            var_34 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303423472ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (var_15) : ((-(0ULL)))));
        }
        var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_9)) : (-8887169388335325561LL)))) ? (((((/* implicit */_Bool) arr_54 [i_12] [i_12])) ? (((/* implicit */int) arr_43 [i_12])) : (1684060451))) : (((/* implicit */int) var_1))))));
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            var_36 = ((/* implicit */_Bool) var_2);
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((3569827036U) - (3569827006U)))))) ? (((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (328326609U))) : (((/* implicit */unsigned int) arr_47 [i_12]))));
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((arr_57 [i_15] [i_12]) ? (((/* implicit */int) arr_57 [i_15] [i_12])) : (((/* implicit */int) arr_57 [i_12] [i_15])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_16 = 3; i_16 < 19; i_16 += 2) 
    {
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((var_7) << (((arr_44 [i_16 - 3]) + (669770714))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_17 = 3; i_17 < 19; i_17 += 3) 
        {
            for (unsigned int i_18 = 4; i_18 < 20; i_18 += 2) 
            {
                for (short i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    {
                        arr_70 [i_17 + 1] [i_17 + 1] = ((/* implicit */short) var_17);
                        var_40 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_16])) ? (((((/* implicit */_Bool) var_12)) ? (var_9) : (arr_47 [3ULL]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_60 [i_18] [(_Bool)1]))))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */int) arr_67 [i_16] [6]);
        arr_71 [i_16 - 1] |= ((/* implicit */_Bool) var_2);
    }
}
