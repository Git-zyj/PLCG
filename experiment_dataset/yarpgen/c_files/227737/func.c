/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227737
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) -4018496621298821354LL);
        arr_5 [16LL] &= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-3))) + (8423645780832822532LL)))) ? (((((/* implicit */_Bool) (short)2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)14])) ? (arr_0 [(unsigned short)0]) : (arr_0 [6LL])))) : (max((((/* implicit */long long int) arr_3 [(_Bool)1])), (-8423645780832822532LL))))) : (((/* implicit */long long int) (+(arr_1 [i_0] [i_0])))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)63)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
                arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_9 [i_0] [i_0]);
                arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9112247730504117490ULL)) ? (arr_8 [i_0]) : (((/* implicit */long long int) arr_7 [7ULL]))));
                var_15 = ((/* implicit */unsigned short) (short)14);
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)8)) ? (arr_7 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
                }
                for (short i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) (unsigned short)4);
                    var_19 = ((/* implicit */unsigned int) ((unsigned short) (short)-3));
                }
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_20 -= ((/* implicit */short) (+(arr_21 [i_0] [i_1] [i_5])));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    arr_25 [i_0] [(_Bool)1] = (+(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))));
                    arr_26 [i_0] [i_1] [i_5] [i_0] = ((((/* implicit */int) var_1)) - (((/* implicit */int) ((16U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
                }
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_5])) - (((/* implicit */int) ((unsigned short) (short)0)))));
                var_22 -= arr_22 [i_0] [i_1] [i_5] [i_5] [4];
            }
            for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_0] [i_1] [i_7] [i_1] [i_0]))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1] [i_7])) >= (((/* implicit */int) arr_20 [i_0] [i_1] [18] [i_7])))))));
                arr_29 [3ULL] [i_0] = ((/* implicit */long long int) ((signed char) (unsigned short)255));
                var_25 = ((/* implicit */short) arr_3 [i_0]);
            }
            for (unsigned char i_8 = 4; i_8 < 23; i_8 += 4) 
            {
                arr_32 [i_0] [i_0] [i_0] [i_8] = arr_31 [i_8 - 3] [i_1] [i_0];
                arr_33 [i_0] [i_1] [i_8] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8423645780832822543LL)) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30136))))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
            {
                arr_36 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0] [i_1]))));
                var_26 = ((/* implicit */signed char) arr_35 [i_0] [i_0]);
            }
            for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 23; i_11 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_10] [i_10] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_0] [i_10] [i_10] [i_10] [i_0])));
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_23 [i_0] [4U]))));
                }
                for (int i_12 = 1; i_12 < 23; i_12 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        var_29 &= ((/* implicit */unsigned char) -5083225786148428544LL);
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    }
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        var_31 -= ((/* implicit */unsigned int) arr_43 [i_0] [i_0] [i_12 + 1] [(_Bool)1]);
                        var_32 -= ((/* implicit */unsigned int) (_Bool)1);
                        arr_49 [i_0] [i_0] [i_0] [i_10] [i_12] [i_12] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8423645780832822525LL))));
                        var_33 |= ((/* implicit */int) arr_22 [i_12 + 1] [i_12 - 1] [i_12] [i_12 - 1] [i_12]);
                    }
                    arr_50 [i_12 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_16 [i_12] [i_12] [i_12 + 1] [i_12] [i_12] [i_12])));
                    var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_12 + 1] [i_0] [i_12 + 1] [i_0])) != (((/* implicit */int) arr_47 [i_12 - 1] [i_10] [i_10] [i_12] [i_12] [i_10] [i_1]))));
                }
                var_35 = ((/* implicit */unsigned long long int) (-(arr_42 [i_0] [i_0] [i_10])));
            }
            for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
            {
                arr_54 [i_0] [i_1] [i_15] [i_0] = ((/* implicit */unsigned short) arr_18 [i_0] [i_1]);
                var_36 = ((/* implicit */unsigned short) ((unsigned char) arr_51 [i_0] [i_1] [i_1] [i_1]));
                arr_55 [i_15] [i_0] [i_0] [i_0] = ((unsigned int) arr_45 [i_0] [i_0] [i_0] [i_1] [i_15] [i_15]);
                arr_56 [i_0] [i_1] [i_0] [i_15] = ((/* implicit */unsigned short) (unsigned char)40);
                var_37 = ((/* implicit */unsigned int) (short)-14);
            }
            /* LoopSeq 3 */
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                var_38 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                var_39 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-126))))) != (((/* implicit */int) ((short) arr_21 [i_16] [i_1] [i_0])))));
                arr_59 [i_0] = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_16] [i_0] [i_1] [i_1]);
                arr_60 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_16])) || (((/* implicit */_Bool) arr_17 [i_0] [i_0]))));
                var_40 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))) ? ((+(arr_51 [i_0] [i_0] [i_16] [i_0]))) : ((~(arr_42 [i_0] [i_0] [i_1])))));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))) | (18446744073709551615ULL)))))));
                var_42 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [(_Bool)1] [i_1] [i_17]))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    arr_68 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_19] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) arr_13 [i_0]))));
                    var_44 = ((/* implicit */unsigned long long int) arr_67 [i_0] [i_0] [i_1] [i_18] [i_0]);
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    var_45 += ((/* implicit */int) arr_48 [i_0] [i_0] [i_1] [i_1] [i_1] [i_18] [i_20]);
                    arr_72 [i_0] = ((/* implicit */long long int) arr_71 [i_18] [i_0] [i_18]);
                }
                var_46 -= ((/* implicit */long long int) (~((+(arr_46 [i_0] [(signed char)14] [i_0])))));
                arr_73 [i_18] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65504))));
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0])) * (var_6)));
            }
        }
        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */int) max(((+(arr_19 [i_0] [i_0] [i_0] [(unsigned short)0]))), (((((/* implicit */long long int) -1039051544)) - (-8423645780832822532LL)))));
            var_49 = ((/* implicit */_Bool) arr_52 [i_0] [i_21] [i_21] [i_21]);
        }
        for (unsigned int i_22 = 0; i_22 < 24; i_22 += 1) /* same iter space */
        {
            var_50 = ((/* implicit */unsigned int) ((int) (((~(((/* implicit */int) (short)4228)))) != (arr_28 [i_0] [i_22] [i_22]))));
            var_51 = (+((~(max((((/* implicit */long long int) arr_46 [i_0] [6LL] [i_22])), (934580207151402130LL))))));
        }
    }
    var_52 = ((/* implicit */long long int) (-(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_5)))))));
}
