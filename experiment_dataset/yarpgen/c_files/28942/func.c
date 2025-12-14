/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28942
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_0 [i_0 - 1])))) + (2147483647))) >> (((((long long int) (unsigned short)51159)) - (51136LL)))));
        var_19 -= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (short)2079)) && (((/* implicit */_Bool) (((_Bool)1) ? (33552384) : (((/* implicit */int) arr_0 [i_0 + 1]))))))));
        var_20 = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) var_2)), (arr_3 [i_0])))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_21 = ((unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_13 [i_2] [i_3] = ((/* implicit */short) arr_8 [i_1]);
                    var_22 = ((/* implicit */long long int) arr_8 [i_1]);
                    var_23 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-38)) + (2147483647))) << (((((((/* implicit */int) (signed char)-84)) + (94))) - (10)))));
                    arr_14 [i_1] [i_1] [i_1] [(short)4] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                arr_20 [i_2] [i_2] [i_5] = ((/* implicit */short) (-((+(((/* implicit */int) (unsigned short)40220))))));
                                arr_21 [i_1] [i_2] [i_3] [i_1] [i_4] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_19 [i_1] [(_Bool)1] [(unsigned char)0] [i_1])))) ? ((-(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) var_5))));
        /* LoopSeq 1 */
        for (int i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((long long int) (~(var_10))));
            var_25 ^= ((/* implicit */signed char) ((unsigned char) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_6 + 2] [i_6] [i_6] [i_6] [i_6])))))));
        }
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((arr_24 [(short)12]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                {
                    var_28 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */long long int) ((/* implicit */int) max(((short)-25000), (((/* implicit */short) (unsigned char)0)))))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (arr_33 [i_9])))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (int i_11 = 4; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_17 [i_7] [6U] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_7] [i_8] [i_9] [i_10] [i_11])))));
                                arr_40 [0ULL] [i_8] [i_8] [i_10] [i_7] = ((/* implicit */_Bool) max((min((arr_34 [i_11] [i_11] [i_7] [i_11] [i_11 - 4]), (arr_34 [i_11] [i_11] [i_7] [i_11] [i_11 + 1]))), (((((/* implicit */_Bool) arr_34 [i_11 + 2] [i_11] [i_7] [i_11] [i_11 - 4])) ? (arr_34 [i_11] [i_11] [i_7] [i_11] [i_11 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (arr_37 [i_11] [i_11 - 3] [(_Bool)1] [i_11 - 3] [i_11 + 2] [i_11] [i_11 - 1]) : (arr_37 [i_11] [i_11 + 2] [i_11] [i_11 - 2] [i_11] [i_11] [i_11 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)7)))) : ((((_Bool)1) ? (var_17) : (((/* implicit */unsigned long long int) -33552390))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_31 = (i_7 % 2 == 0) ? (((/* implicit */unsigned char) (~(((arr_24 [i_7]) + (arr_24 [i_7])))))) : (((/* implicit */unsigned char) (~(((arr_24 [i_7]) - (arr_24 [i_7]))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] [i_12] = ((/* implicit */signed char) -33552403);
        var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) -33552403)) ? (-33552386) : (((/* implicit */int) (unsigned char)151)))) >= (((/* implicit */int) (signed char)0))));
        var_33 = ((/* implicit */int) arr_32 [i_12] [i_12]);
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [(unsigned short)18] [i_13])) : (((/* implicit */int) arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]))));
        var_35 = ((/* implicit */unsigned char) arr_5 [i_13]);
        var_36 = ((/* implicit */long long int) (short)32767);
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                {
                    arr_50 [i_13] [i_13] [(unsigned short)15] [i_13] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)151)) ? (arr_27 [i_13] [i_15]) : (arr_27 [i_13] [i_13])))));
                    arr_51 [i_15] [i_13] [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_14])) ? (((/* implicit */int) var_2)) : (var_5)));
                    var_37 = ((/* implicit */unsigned char) ((3042237845794132961LL) | (((/* implicit */long long int) -33552403))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */long long int) var_11);
    var_39 ^= ((/* implicit */unsigned char) min((((long long int) ((var_15) + (((/* implicit */unsigned int) var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (var_13) : (((/* implicit */long long int) 290921064))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) var_11))))) : (var_15))))));
    var_40 = ((/* implicit */unsigned char) var_11);
}
