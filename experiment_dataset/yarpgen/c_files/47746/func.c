/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47746
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) var_8);
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)150)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        var_19 = var_12;
        var_20 ^= ((max((arr_1 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) (signed char)-115)))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) / (var_11)));
            var_22 = ((/* implicit */short) arr_5 [i_2] [i_1 + 1] [i_1]);
        }
        for (long long int i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            arr_9 [i_3] [i_3] = ((/* implicit */int) (~((~(min((var_16), (arr_6 [i_3] [i_3])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
                {
                    {
                        arr_16 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1020)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        arr_17 [i_3] [i_3] [i_4 - 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1] [i_4] [i_5] [i_5 - 2] [i_3])) ? (((/* implicit */int) arr_13 [i_4] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5 - 3] [i_3])) : (((/* implicit */int) (unsigned char)77))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */int) (unsigned char)67);
        }
        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_27 [i_9] [i_9] [i_8] [i_7] [i_6] [11] = ((/* implicit */short) ((arr_2 [i_9] [i_6]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)178)) ? (min((((/* implicit */int) arr_10 [i_1] [i_6] [i_7] [i_9])), (var_11))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) != (var_0)))))))));
                            var_24 = ((/* implicit */short) var_4);
                            arr_28 [i_6] [9ULL] [i_7] [i_6] [i_1] = ((/* implicit */unsigned int) arr_24 [i_7]);
                        }
                    } 
                } 
                var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_1 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) (short)-3408)) : (((/* implicit */int) (unsigned char)89)))))))) ? (((/* implicit */long long int) (~(((var_10) | (((/* implicit */unsigned int) var_13))))))) : (max((arr_20 [i_1 - 1] [i_1 + 1] [i_1 + 1]), (arr_20 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                arr_29 [i_6] [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (var_11) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-120)), (arr_19 [i_7] [i_1])))))));
                var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))) : (arr_1 [i_7] [(short)3])));
            }
            arr_30 [i_6] [i_1] [(_Bool)1] = (~(max((((/* implicit */long long int) min(((unsigned char)232), (((/* implicit */unsigned char) (_Bool)1))))), (((var_0) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_6]))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 16; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                {
                    var_27 = ((((/* implicit */_Bool) 8952992915792319289LL)) ? (((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) var_13))))) : (((/* implicit */int) ((arr_1 [i_12] [i_10 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 2; i_14 < 16; i_14 += 2) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned short) ((var_5) >= (((/* implicit */long long int) (-(arr_0 [i_13]))))));
                                arr_42 [i_14] [i_13] [i_12] [i_12] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_0 [i_12]);
                                var_29 = ((/* implicit */unsigned int) (~(arr_32 [i_10 - 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) <= (-6362514087037865727LL)));
        var_31 += ((/* implicit */int) (unsigned char)147);
        arr_43 [i_10 - 2] = ((/* implicit */unsigned long long int) ((arr_0 [i_10 + 1]) & (((/* implicit */unsigned int) var_13))));
        var_32 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)162))));
    }
    var_33 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (((unsigned short) 4294967287U))))) - (var_3)));
}
