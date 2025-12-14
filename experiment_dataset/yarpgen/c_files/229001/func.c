/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229001
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
    var_13 &= ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1]))))) >= (((/* implicit */int) ((arr_2 [i_0] [i_0] [i_0 + 1]) == (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))))));
                        var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (var_4)))))) : (arr_3 [i_0] [i_0])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (arr_7 [i_0 - 2] [i_0 - 3] [i_0 + 1] [i_0 + 1] [i_0 - 2])));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3])))) : (arr_1 [i_0]))))));
                            var_16 = ((unsigned int) (signed char)7);
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((unsigned long long int) arr_7 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2]))));
                        }
                        arr_14 [i_0 + 2] [i_1] [i_0] [i_0] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((unsigned int) arr_4 [i_0] [i_0 - 2] [i_0]))))), (max((max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0]))) : (4634477500498327317LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_3]))));
                            arr_18 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) var_9);
                        }
                    }
                } 
            } 
        } 
        arr_19 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0])) ? (arr_7 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                {
                    arr_26 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_20 [i_6]) : (((/* implicit */long long int) arr_22 [i_6]))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 4; i_10 < 22; i_10 += 2) 
                        {
                            {
                                arr_33 [i_6] = ((short) ((long long int) arr_24 [i_8]));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10 - 4] [i_10 - 3] [i_10 - 2] [i_10 - 3]))) - (arr_31 [i_10 - 4] [i_10 - 1] [i_10 - 1] [i_10 - 4] [i_10 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        for (short i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            {
                                arr_45 [i_11] [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_11] [i_11])) ? (arr_37 [i_14]) : (min((arr_25 [i_11]), (((/* implicit */unsigned long long int) arr_29 [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 - 1]))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_44 [i_12] [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12])), (-1507114142)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_44 [i_12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12] [i_12])))) : (((((/* implicit */_Bool) arr_44 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_34 [i_12 + 1] [i_12 + 1])))));
                            }
                        } 
                    } 
                    arr_46 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] = ((/* implicit */unsigned short) arr_38 [i_11] [i_11] [i_11]);
                    var_21 -= ((/* implicit */long long int) arr_24 [i_11]);
                }
            } 
        } 
        arr_47 [i_11] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [i_11]))) : (arr_28 [i_11] [i_11] [i_11] [i_11] [i_11])))))) ? (min((arr_37 [i_11]), (((/* implicit */unsigned long long int) arr_39 [i_11] [i_11] [i_11])))) : (((/* implicit */unsigned long long int) ((int) arr_24 [i_11])))));
    }
}
