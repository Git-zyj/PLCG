/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53460
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))));
        var_11 = ((/* implicit */signed char) (-(2147483647)));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = arr_0 [i_1];
        arr_6 [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (short)-13393))));
        arr_7 [i_1] = ((/* implicit */short) ((signed char) 1661627935U));
        var_12 = (+(arr_4 [(unsigned char)18] [(signed char)0]));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)15))))) <= ((+(arr_4 [i_1] [i_1]))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((unsigned int) arr_10 [i_2])) : ((-(arr_4 [(signed char)15] [i_4])))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)13393))));
                                arr_22 [i_2 - 2] [i_2 - 2] [i_4] [i_5] [i_2 - 2] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_11 [i_3]) : (((/* implicit */long long int) 1878407667)))))) >= (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-13395))))), ((+(((/* implicit */int) (signed char)67)))))))));
                                arr_23 [i_2] [i_3] [(unsigned char)10] [i_5] [i_6 + 2] = ((/* implicit */short) (-((~(((/* implicit */int) var_0))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) ^ (((long long int) arr_8 [i_2 - 1]))));
                                var_16 = (+(((/* implicit */int) var_0)));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) min((var_17), (var_1)));
                arr_24 [i_2] [i_2] = ((((/* implicit */_Bool) var_0)) ? ((-(arr_9 [i_2]))) : (((/* implicit */long long int) ((unsigned int) (short)13395))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (short i_9 = 1; i_9 < 13; i_9 += 3) 
            {
                {
                    var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (signed char)-51))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7 + 1] [i_8] [i_9 + 2]))))) : (((/* implicit */int) max(((signed char)1), ((signed char)-68))))));
                    arr_33 [(signed char)12] [i_7] = ((/* implicit */short) 33776997205278720LL);
                    arr_34 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-21307)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_9 - 1] [i_7 + 1] [i_7])))))) : (((((/* implicit */_Bool) var_2)) ? (3236571949U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (short i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_13 = 4; i_13 < 17; i_13 += 4) 
                    {
                        arr_48 [i_13 - 3] [i_12] [i_11] [i_10] = ((/* implicit */short) max((((/* implicit */long long int) min((arr_47 [i_13 - 2] [i_13 - 3] [i_13 - 2] [i_13] [i_13 - 4] [i_13]), (arr_47 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 + 1])))), ((+(22LL)))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((((/* implicit */int) ((((/* implicit */int) (short)13394)) >= (((/* implicit */int) (unsigned char)33))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)23449))))))), (((((/* implicit */_Bool) (signed char)-71)) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-20829)) + (2147483647))) << (((((-441793027294722916LL) + (441793027294722942LL))) - (26LL)))))))))))));
                        arr_49 [i_10] [i_11] [i_12] [i_12] [10U] [i_13] = arr_19 [i_13] [i_12] [i_11] [i_10] [i_10];
                        arr_50 [i_10] [(short)5] [i_12] [i_13 - 2] = ((/* implicit */unsigned char) arr_3 [i_10]);
                    }
                    for (short i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        arr_54 [i_10] [i_11] [i_12] [i_14] = ((/* implicit */int) arr_36 [i_12]);
                        var_20 = ((/* implicit */short) (unsigned char)92);
                        arr_55 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) -33776997205278715LL)) || (((/* implicit */_Bool) var_0))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                    {
                        var_21 -= ((/* implicit */signed char) ((unsigned int) (short)32767));
                        arr_59 [5] [5] [5] [i_15] [i_15] = arr_16 [i_10] [i_11] [16U] [i_10];
                        arr_60 [(signed char)7] [i_11] [i_12] [i_11] [i_11] [i_15] = ((short) ((((/* implicit */_Bool) arr_53 [i_10] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8179154745737358645LL)));
                    }
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
                    {
                        var_22 *= ((((748575394U) ^ (3651767379U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_12 [i_12] [i_11] [i_10])), (max((arr_1 [i_10] [i_12]), (arr_53 [i_10] [i_12]))))))));
                        arr_63 [i_10] [i_11] [(signed char)8] [i_12] = ((/* implicit */signed char) var_7);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-20829)) : (((/* implicit */int) (unsigned char)52))));
                        var_24 |= ((/* implicit */signed char) var_3);
                        var_25 -= ((/* implicit */long long int) var_2);
                    }
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        for (signed char i_18 = 1; i_18 < 16; i_18 += 3) 
                        {
                            {
                                arr_72 [i_10] [i_10] [i_10] [i_17] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))), (arr_18 [i_18] [i_18] [i_18] [i_18] [i_18 + 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-13393)))))));
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_8)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
