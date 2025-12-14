/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228565
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
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)126)))) - (((/* implicit */int) (signed char)121))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (unsigned short)14684))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_16 [i_2] [i_2] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)50862))));
                                var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)50862))));
                                arr_17 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    {
                        var_18 += ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40070))) | (var_0))), (((/* implicit */unsigned int) var_5))));
                        arr_31 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) - (((((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_8] [i_8]))))) >> (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_20 [i_5] [i_5]))))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)7813)), (5200772678100798075LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)64993)) != (((/* implicit */int) arr_29 [i_6 - 2] [i_6 - 2] [i_7] [i_7 + 1] [i_8] [i_8])))))) : (max((2505671005631215047LL), (((/* implicit */long long int) var_9))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_9 = 1; i_9 < 24; i_9 += 3) 
        {
            var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_5] [i_9 + 1] [i_9 - 1] [(signed char)10])), (arr_34 [(signed char)0] [i_9 + 1] [i_9])))) ? (((/* implicit */int) min(((unsigned short)50844), (((/* implicit */unsigned short) arr_27 [i_5] [i_5] [i_9 + 1] [i_9 - 1]))))) : (((/* implicit */int) var_4))));
            /* LoopSeq 3 */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
            {
                arr_37 [i_5] [i_5] = ((/* implicit */signed char) ((min((arr_24 [i_5]), (((/* implicit */unsigned int) (signed char)81)))) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((min((((/* implicit */long long int) (signed char)-11)), (5564067202352982375LL))), (((/* implicit */long long int) var_9)))))));
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)6)), (-6282090092937479843LL))))));
                            var_23 = ((/* implicit */long long int) (signed char)-2);
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) arr_33 [10U] [10U])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) var_12)))))));
                var_25 = var_5;
            }
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    arr_46 [i_5] [i_9 - 1] [i_14] = ((/* implicit */unsigned short) 5200772678100798075LL);
                    var_26 = (~(var_3));
                    arr_47 [i_5] [i_5] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_14] [i_5] [i_13] [i_14])) ? (arr_28 [i_9 + 1] [i_5] [i_13] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)121)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
                }
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (unsigned int i_16 = 1; i_16 < 24; i_16 += 4) 
                    {
                        {
                            arr_54 [i_16] [i_5] [i_15] [i_15] [i_13] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_5] [i_9] [i_9] [i_9 - 1] [i_15])) - (((/* implicit */int) arr_48 [i_5] [i_9] [i_9] [i_9 + 1] [i_15]))));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-81))));
                        }
                    } 
                } 
                arr_55 [i_5] [i_9 - 1] = ((/* implicit */signed char) (~(((arr_43 [i_5] [i_9] [i_5] [i_5]) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50862)) && (((/* implicit */_Bool) (unsigned short)65533))))) - (((/* implicit */int) var_12))));
            }
            for (long long int i_17 = 0; i_17 < 25; i_17 += 1) /* same iter space */
            {
                arr_58 [i_5] [i_5] = ((/* implicit */long long int) arr_56 [i_5] [i_5] [i_9] [i_9]);
                arr_59 [14LL] [14LL] [i_5] [i_5] = ((/* implicit */signed char) (((~(((/* implicit */int) var_8)))) >> (((((/* implicit */int) var_7)) - (26169)))));
            }
        }
    }
}
