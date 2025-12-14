/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215835
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
    var_18 = ((/* implicit */unsigned char) var_15);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_15);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_1] [i_1] = var_1;
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
            var_19 = ((/* implicit */unsigned long long int) var_10);
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_11))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_2])))))));
                        arr_13 [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_14);
                        var_22 += (-(arr_10 [(short)0] [i_2] [i_2] [i_0]));
                    }
                } 
            } 
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            arr_24 [i_0] [i_4] [i_5] [i_4] [i_0] = ((/* implicit */long long int) max((var_4), (((/* implicit */int) var_10))));
                            arr_25 [i_4] = ((/* implicit */long long int) var_0);
                            var_23 = ((/* implicit */short) arr_4 [i_5] [i_0]);
                        }
                    } 
                } 
            } 
            arr_26 [i_4] [i_4] = ((/* implicit */signed char) -3247750941512627041LL);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 17; i_9 += 1) 
                {
                    {
                        arr_33 [i_4] [i_4] [i_8] [i_9 - 1] = ((/* implicit */unsigned int) var_4);
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            arr_36 [i_4] [(signed char)1] [i_8] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (((_Bool)0) && (((/* implicit */_Bool) (signed char)41))))), (var_16)));
                            arr_37 [17ULL] [i_4] [i_4] [i_4] [i_9 - 1] [i_10] [i_10 - 1] = ((/* implicit */short) max((var_9), (var_0)));
                        }
                        for (unsigned int i_11 = 2; i_11 < 17; i_11 += 4) /* same iter space */
                        {
                            arr_41 [i_0] [i_0] [i_4] [i_8] [i_9] [i_4] [(short)0] = ((/* implicit */_Bool) var_8);
                            var_24 *= ((/* implicit */short) ((((((var_13) + (2147483647))) << (((((/* implicit */int) (short)28304)) - (28304))))) >> (((arr_23 [(_Bool)1] [i_9 - 1] [i_8] [i_11 - 1] [i_11] [i_11] [i_4]) - (1222466662)))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((var_11), (((/* implicit */long long int) (_Bool)1)))))));
                        }
                        for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            arr_44 [i_0] [i_4] = ((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4]);
                            var_26 = ((/* implicit */unsigned int) var_4);
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_0))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_13] = ((/* implicit */signed char) var_15);
            /* LoopSeq 4 */
            for (unsigned int i_14 = 2; i_14 < 16; i_14 += 3) 
            {
                arr_52 [i_13] [i_13] [i_14 + 1] = ((/* implicit */unsigned int) arr_34 [i_14 + 2] [i_14 + 2] [i_14] [i_14] [i_13]);
                arr_53 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_14] [(_Bool)1]);
                var_28 = ((/* implicit */unsigned long long int) var_6);
            }
            for (signed char i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                arr_57 [i_13] [i_13] [i_0] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) / ((~(var_13)))));
                arr_58 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned short) var_15);
            }
            for (short i_16 = 2; i_16 < 16; i_16 += 2) 
            {
                /* LoopSeq 4 */
                for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
                {
                    arr_64 [i_16] [i_13] [i_16] [i_13] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_65 [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_16)) / (((/* implicit */int) arr_7 [i_16 + 1] [i_16 - 2] [i_16 - 2] [i_16 + 1]))));
                }
                for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
                {
                    arr_69 [i_0] [i_13] [i_13] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) var_9);
                    arr_70 [i_13] [i_13] = ((/* implicit */long long int) var_2);
                    arr_71 [i_13] [i_13] [i_16 - 1] [i_0] [i_0] = ((/* implicit */long long int) var_7);
                }
                for (short i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    arr_76 [i_0] [i_0] [i_13] = ((/* implicit */signed char) 0ULL);
                    arr_77 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_17))));
                    arr_78 [i_16] [i_16] [i_16] [i_13] = ((/* implicit */unsigned short) var_12);
                    arr_79 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) var_4);
                }
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 1) 
                {
                    arr_83 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_4);
                    var_29 += ((/* implicit */_Bool) var_4);
                    arr_84 [i_13] [i_13] = ((/* implicit */signed char) var_10);
                }
                var_30 -= var_5;
            }
            for (int i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                arr_88 [i_0] [i_13] [i_21] [i_13] = ((/* implicit */unsigned long long int) var_12);
                arr_89 [i_0] [i_13] [i_13] = (-(var_5));
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 2) 
    {
        for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 3) 
        {
            {
                var_31 ^= ((/* implicit */unsigned int) (((+(3247750941512627041LL))) > (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                arr_97 [i_23] = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
}
