/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46662
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) ^ ((+(((/* implicit */int) var_7))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) arr_2 [i_0]);
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_12 += ((/* implicit */int) arr_0 [0U] [0U]);
            var_13 = ((/* implicit */unsigned int) arr_3 [i_0 + 2]);
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) (-(var_2))));
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_14 = ((unsigned int) arr_2 [i_0]);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_15 -= ((/* implicit */short) (-(((/* implicit */int) arr_0 [(signed char)0] [i_0 - 1]))));
                    arr_14 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (var_6))));
                }
                var_16 ^= ((/* implicit */_Bool) var_0);
                /* LoopSeq 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */short) arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_0 - 1]);
                    var_18 = ((/* implicit */unsigned short) arr_16 [(_Bool)1] [i_0] [i_3] [i_5 - 1]);
                    arr_17 [i_0] [i_3] [(unsigned short)5] [(signed char)2] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_3 [i_5 - 1])));
                }
                for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    arr_20 [i_0] [(short)13] [i_3] [i_0] = var_3;
                    arr_21 [12U] [12U] [12U] [i_0] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                }
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((_Bool) (_Bool)0));
                    var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)8011)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-28)))));
                    arr_25 [(unsigned short)0] [9] [i_3] [i_0] = ((/* implicit */signed char) arr_4 [i_2] [i_3]);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [(_Bool)1] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_2] [i_0 + 1] [i_7])) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_0 + 1] [i_3]))));
                }
                arr_26 [i_0] = ((/* implicit */unsigned short) arr_9 [i_0 - 1] [(signed char)11] [i_0 - 1] [i_0]);
            }
            for (int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                arr_30 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */long long int) var_5);
                var_22 = ((/* implicit */unsigned short) arr_28 [i_8]);
            }
            arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-899)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)28)) >= (((/* implicit */int) (signed char)30)))))));
        }
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) arr_16 [10LL] [i_0] [i_9] [10LL]);
            arr_34 [i_0] = ((/* implicit */int) (+(3018070711U)));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                arr_38 [i_0] = ((/* implicit */short) var_5);
                arr_39 [i_0] [i_10] [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (~((~(arr_32 [i_9])))));
                var_24 = ((/* implicit */long long int) ((arr_33 [i_0] [i_0]) % (((/* implicit */unsigned long long int) arr_11 [i_0] [(short)7] [i_0 + 2] [i_10]))));
                arr_40 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)8766))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 2; i_11 < 14; i_11 += 4) 
                {
                    var_25 = arr_23 [i_0] [i_9] [i_10] [i_0];
                    arr_45 [i_0 + 2] [i_11] [i_0 + 2] [i_0] |= ((/* implicit */int) arr_22 [i_9] [i_11]);
                }
                for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_26 &= ((/* implicit */short) ((9998163961813450171ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)14])))));
                    var_27 ^= ((/* implicit */int) var_4);
                    var_28 = ((/* implicit */int) arr_0 [i_0] [i_9]);
                }
            }
            arr_48 [i_0] [i_9] [i_9] = ((((/* implicit */_Bool) arr_33 [i_0 + 1] [i_0])) ? (arr_33 [i_0 - 1] [i_0]) : (arr_33 [i_0 - 1] [i_0]));
            arr_49 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_1 [i_0] [14U]))));
        }
        for (long long int i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */int) var_2);
            var_30 = ((/* implicit */long long int) arr_47 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 + 1]);
            /* LoopSeq 3 */
            for (long long int i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                arr_56 [i_13] [i_0] [i_14 + 1] = ((/* implicit */unsigned long long int) arr_52 [i_0] [i_0]);
                arr_57 [i_0] = ((/* implicit */int) var_3);
            }
            for (long long int i_15 = 2; i_15 < 15; i_15 += 1) 
            {
                arr_61 [i_0] [i_0] [i_13] [i_15] = ((/* implicit */unsigned short) arr_51 [i_15 - 2] [i_15 - 1]);
                var_31 = ((int) -4971477432216093613LL);
                var_32 = ((/* implicit */signed char) arr_29 [i_0] [i_15] [i_15 - 2]);
            }
            for (short i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) arr_29 [i_0] [i_0 - 1] [10ULL])) : (arr_54 [i_0 + 1])));
                arr_65 [i_0] [i_13] [9ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_53 [i_0] [i_13] [i_16]))))) : (((var_2) ^ (arr_46 [i_16])))));
                var_34 = ((/* implicit */unsigned short) ((arr_50 [(_Bool)1] [i_16] [i_0 - 1]) < (arr_50 [i_13] [i_13] [i_0 + 1])));
                var_35 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
            }
        }
        arr_66 [i_0] = ((/* implicit */_Bool) arr_44 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0]);
        var_36 |= var_9;
    }
    var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
    var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
}
