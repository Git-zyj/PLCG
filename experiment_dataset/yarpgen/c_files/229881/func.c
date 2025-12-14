/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229881
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned short) (~(min((var_0), (((/* implicit */unsigned int) arr_3 [i_1] [i_0] [i_0]))))));
                var_11 = min((arr_3 [i_1] [i_1] [i_0]), (arr_3 [i_1] [i_0] [i_0]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) ((int) arr_9 [i_2]));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_9 [i_2]))))))));
                            /* LoopSeq 1 */
                            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                            {
                                var_14 = ((/* implicit */int) ((signed char) min((var_7), (((/* implicit */int) ((signed char) var_8))))));
                                var_15 = ((/* implicit */int) min((var_15), ((~((-(((/* implicit */int) arr_1 [i_3 - 1] [i_4 + 2]))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(arr_12 [i_2] [i_3 - 2] [i_4] [i_6])))) : (var_7)));
                            }
                        }
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned short) var_5);
                /* LoopSeq 3 */
                for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 9; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) (~(0U)));
                                var_19 = ((/* implicit */signed char) ((short) 2336893014U));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3 + 1]))));
                    var_21 = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_7]);
                }
                for (short i_10 = 2; i_10 < 8; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 1; i_11 < 7; i_11 += 2) 
                    {
                        for (int i_12 = 3; i_12 < 7; i_12 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)(-127 - 1))), (263700263)));
                                var_23 &= min((((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (var_7) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((arr_29 [i_2] [i_10] [i_11 + 3] [i_11 + 3]), (var_2)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) var_3);
                }
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    arr_40 [i_2] [4U] = ((/* implicit */int) min((var_5), (((/* implicit */long long int) arr_37 [i_2] [i_3]))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-((~(min((var_3), (((/* implicit */long long int) arr_17 [i_2] [i_2] [i_2])))))))))));
                            arr_48 [i_2] [(_Bool)1] [i_14] [i_2] = ((/* implicit */int) arr_45 [i_2] [i_3] [i_13] [i_3] [i_15] [i_14]);
                        }
                        for (short i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) min(((-(arr_2 [i_14] [i_16]))), (((/* implicit */unsigned int) var_1))));
                            var_27 = ((/* implicit */int) ((unsigned short) arr_11 [i_3] [i_13] [i_16]));
                            var_28 = (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(-2082446248))))))));
                        }
                        arr_51 [i_2] [i_13] [i_3] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_3])) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))), (((/* implicit */unsigned int) ((unsigned char) var_2))))) : ((~(min((((/* implicit */unsigned int) -2082446254)), (3393250147U)))))));
                    }
                    for (unsigned int i_17 = 2; i_17 < 7; i_17 += 3) 
                    {
                        arr_54 [i_2] [9] [(signed char)7] [9] = ((/* implicit */signed char) arr_23 [i_3 - 1] [i_2] [i_3]);
                        var_29 = ((/* implicit */signed char) (~(arr_2 [i_3 + 1] [i_13])));
                    }
                }
                var_30 = ((/* implicit */signed char) arr_9 [i_2]);
            }
        } 
    } 
    var_31 = ((/* implicit */int) var_3);
    var_32 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_1)) : (min(((~(((/* implicit */int) var_1)))), (var_7)))));
}
