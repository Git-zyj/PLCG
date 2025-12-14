/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27116
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
    var_19 = ((/* implicit */unsigned char) min(((~((~(((/* implicit */int) (signed char)73)))))), (((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((arr_3 [i_0] [i_0]) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) arr_0 [12] [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [i_1] [(short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_3 [i_1] [i_1]) >= (var_18)))) ^ ((-(((/* implicit */int) arr_7 [i_2] [i_1] [i_0] [11]))))));
                    arr_12 [i_0] [i_0] [i_0] [(short)15] = ((/* implicit */short) (-(2096554742443667205LL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        var_21 |= ((/* implicit */int) (!((_Bool)0)));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                arr_21 [i_3 + 1] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5 + 2])) | (((/* implicit */int) (short)13))));
                arr_22 [i_3 - 2] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-20))));
                var_22 |= ((/* implicit */signed char) var_16);
            }
            for (short i_6 = 2; i_6 < 19; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 3; i_7 < 20; i_7 += 1) 
                {
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_15 [i_6])) : (((/* implicit */int) (short)8)))) & (((/* implicit */int) (unsigned short)65508))));
                    arr_28 [8] [i_6 - 1] [8] [8] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_24 = arr_23 [i_3] [i_3 - 1];
                        var_25 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_3] [i_3 + 1] [i_4])) - (((/* implicit */int) var_2))));
                        arr_31 [i_3] [i_3] [i_3] [i_3 - 2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)6))));
                    }
                }
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_26 = ((/* implicit */long long int) ((unsigned char) arr_33 [i_3 - 2] [i_4] [i_6] [i_9]));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        arr_37 [i_3] [i_3 + 2] [i_9] [i_3 + 2] [i_3] [i_3 + 2] &= ((/* implicit */unsigned short) ((((((/* implicit */int) (short)-8)) + (2147483647))) << ((((((+(((/* implicit */int) (short)-6)))) + (24))) - (18)))));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) (short)-10)) != (((/* implicit */int) (short)6))));
                    }
                }
                arr_38 [i_3] [i_3 - 1] [(short)20] = ((/* implicit */_Bool) var_2);
                var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) arr_26 [(_Bool)1] [(_Bool)1] [i_3] [i_3 + 1] [i_3])) : (((/* implicit */int) var_15))))) ? (((long long int) (short)8)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0))))))));
            }
            var_29 = ((/* implicit */short) (-(((arr_13 [(unsigned short)3]) / (arr_13 [i_3 + 1])))));
            arr_39 [i_3] [i_4] = (unsigned char)0;
            arr_40 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_34 [i_3 + 1]))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (unsigned short i_12 = 1; i_12 < 21; i_12 += 4) 
                {
                    {
                        arr_45 [i_3] [i_3] [i_12] [i_3] = (+(((((/* implicit */int) (short)14)) % (((/* implicit */int) arr_16 [i_4])))));
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((long long int) arr_16 [i_3])))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_9))));
                        var_32 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_12 + 1] [i_12 - 1] [i_12])) << (((((/* implicit */int) arr_20 [i_12 - 1] [i_12 - 1] [i_12])) - (49372)))));
                    }
                } 
            } 
        }
        var_33 += ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_32 [i_3 - 1]))));
    }
    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) ((unsigned char) var_11))))));
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        for (short i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            for (int i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned short) ((var_11) % (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)48)) <= (((/* implicit */int) arr_19 [i_13] [(short)0] [i_15] [i_15]))))))))));
                    var_36 = ((/* implicit */_Bool) ((short) (-(min((var_13), (((/* implicit */long long int) arr_41 [i_13])))))));
                }
            } 
        } 
    } 
}
