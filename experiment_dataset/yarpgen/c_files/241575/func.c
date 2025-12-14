/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241575
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
    var_12 &= ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (short)31130;
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 6; i_2 += 2) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-23994))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23994))))) : ((-(((/* implicit */int) (short)23994))))));
                    var_14 = ((/* implicit */short) arr_3 [i_1] [i_2]);
                    var_15 = ((/* implicit */long long int) var_6);
                    var_16 = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
                }
                for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) max((((/* implicit */short) arr_7 [i_1])), (var_6)))) >> (((((/* implicit */int) arr_0 [i_1])) - (2495)))))));
                    var_17 = ((/* implicit */long long int) ((((arr_8 [i_1] [i_1] [i_1]) > (((/* implicit */int) var_9)))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_6))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -6370275351569047582LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-23994))))))) ? (max((((/* implicit */unsigned long long int) -4510285229908445447LL)), ((-(arr_9 [i_0] [i_1] [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)23994)))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23994))) % (var_1)))))) ? (arr_8 [i_1] [i_3 + 1] [i_3]) : (((/* implicit */int) var_4))));
                    var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (short)-23994)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_3])) : (var_1)))))));
                }
                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 96159279)) != (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))) : (max((((/* implicit */unsigned long long int) var_11)), (arr_9 [i_0] [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_4])) : (((/* implicit */int) var_6))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2058810509))));
                    var_23 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_18 [i_5] [i_5] [i_5] [i_6]))))));
                    arr_22 [i_6] = ((/* implicit */unsigned short) arr_21 [i_4] [i_4] [i_4] [i_6]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_25 [i_4] [i_9] [i_9]), (arr_25 [i_9] [i_9] [i_9]))))));
                                arr_33 [i_9] [i_7] [i_9] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_16 [i_9] [i_9] [i_9]))) ? (((/* implicit */int) arr_16 [i_9] [i_9] [i_8])) : (((arr_16 [i_8] [i_7] [i_4]) ? (((/* implicit */int) arr_16 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_16 [i_4] [i_7] [i_8]))))));
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */int) min((((unsigned short) arr_30 [i_7])), (((/* implicit */unsigned short) max((arr_29 [i_4] [i_7] [i_4] [i_7]), (arr_19 [i_7] [i_7] [i_7] [i_7]))))))) - (min(((+(((/* implicit */int) (signed char)-105)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_19 [i_4] [i_4] [i_8] [i_4])) : (((/* implicit */int) arr_29 [i_7] [i_7] [i_4] [i_7])))))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_25 [i_8] [i_7] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_20 [i_4]))))) ? (var_1) : (((/* implicit */unsigned long long int) (-(arr_28 [i_4] [i_4] [i_7] [i_8]))))));
                    arr_34 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (+(var_8)))))) : (((long long int) arr_14 [i_7]))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) arr_28 [i_4] [i_4] [i_4] [i_4]);
    }
    for (long long int i_11 = 2; i_11 < 20; i_11 += 3) 
    {
        arr_38 [i_11] = ((/* implicit */unsigned long long int) (unsigned short)54370);
        var_28 = ((/* implicit */_Bool) arr_19 [i_11 + 1] [i_11] [i_11 + 1] [i_11 + 1]);
        var_29 = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)54354)) || (((/* implicit */_Bool) arr_20 [i_11]))))), (var_11))))));
        arr_39 [i_11] [i_11] = max(((-(-7169788561434211418LL))), (((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned char) (signed char)110)), (arr_25 [i_11] [i_11] [i_11]))))));
    }
    var_30 = ((/* implicit */signed char) max((((158121419U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54370))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) ((short) -2058810509))))))));
    var_31 = ((/* implicit */long long int) var_4);
}
