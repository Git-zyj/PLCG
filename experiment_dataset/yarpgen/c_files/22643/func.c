/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22643
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
    var_19 = (-((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18462))) : (var_7))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (+(arr_2 [i_0])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_1]);
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_6 [i_0] [i_1] [i_1]))));
            var_23 = ((/* implicit */unsigned int) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (3178061180306707475ULL)));
            arr_7 [0ULL] [0ULL] = ((/* implicit */unsigned int) var_16);
        }
        var_24 = ((/* implicit */unsigned int) ((arr_3 [i_0] [i_0]) == (((/* implicit */unsigned long long int) var_7))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (short)-8415);
                                arr_19 [i_5] [(unsigned short)6] [0U] [4U] [0U] [i_0] &= ((/* implicit */unsigned int) (-(arr_3 [(_Bool)1] [i_2])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8420)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 3) 
            {
                {
                    var_27 = (+((~(var_3))));
                    var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_22 [(unsigned short)18] [(unsigned short)18])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)57715))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 2; i_9 < 21; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) (unsigned short)64164);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) < (((/* implicit */int) (_Bool)1))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)7809))))) : (arr_23 [14ULL] [i_6] [i_6 - 1])));
                        }
                        for (unsigned short i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7823))));
                            var_33 = (!(((/* implicit */_Bool) (unsigned short)65516)));
                            arr_34 [i_7] [i_6] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            arr_35 [i_6] [i_6] [i_6] [i_11 + 3] = ((/* implicit */short) arr_21 [i_6]);
                        }
                        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)20))));
                        arr_36 [i_6] [i_6] [(short)2] [i_9] = arr_27 [i_6] [i_9];
                        var_35 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)7804))))));
                        arr_37 [i_6] [i_6] = ((/* implicit */_Bool) arr_27 [(unsigned short)7] [i_6]);
                    }
                    for (unsigned int i_12 = 2; i_12 < 20; i_12 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) var_16);
                        var_37 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (3509855878803802843ULL));
                        arr_40 [i_6] [i_6] [i_6] [i_6 + 1] [i_6] = ((/* implicit */unsigned short) arr_39 [i_6]);
                    }
                    var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_26 [i_6] [i_6] [i_7 + 2] [i_8]))));
                    var_39 *= ((/* implicit */unsigned int) var_17);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                {
                    var_40 = ((/* implicit */short) 93908213U);
                    var_41 ^= ((((/* implicit */_Bool) arr_44 [i_6] [i_6] [6ULL] [i_14])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65524))))) : ((~(arr_44 [i_6] [i_13] [i_13] [i_6]))));
                }
            } 
        } 
        arr_47 [i_6] = ((/* implicit */unsigned short) var_1);
    }
    var_42 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) : (var_11))))))));
}
