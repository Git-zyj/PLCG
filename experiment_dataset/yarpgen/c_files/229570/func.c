/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229570
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) min(((+(arr_0 [(signed char)1] [i_0]))), (arr_0 [i_0] [i_0])));
        var_17 += ((/* implicit */unsigned short) ((signed char) max((((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_3)) + (18425))) - (44))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [8LL])) == (((/* implicit */int) var_4))))))));
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [(signed char)3])) ? (((/* implicit */unsigned long long int) ((int) (signed char)-108))) : (((((/* implicit */_Bool) 6933454868443082130LL)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (var_10)));
        var_19 = min((((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */unsigned long long int) -6933454868443082130LL)) : (18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4074166639735557477LL)) ? (-6933454868443082138LL) : (-6933454868443082131LL)))));
        var_20 &= arr_2 [(signed char)11];
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(-8791989822592525161LL))))));
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                arr_11 [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) arr_6 [i_2 + 2] [14] [0]);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_6 [i_1] [i_3 + 1] [i_3]))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [0LL] [14LL] [i_2 + 1])) & (((/* implicit */int) arr_5 [i_2] [i_2 + 1]))));
                arr_12 [i_1] [i_2 - 1] [(short)15] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 2] [i_3 + 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((89843391U) & (((/* implicit */unsigned int) 1520116651))));
                            var_25 = ((/* implicit */short) ((unsigned short) arr_6 [i_5 + 1] [i_3 - 3] [i_2 + 2]));
                        }
                    } 
                } 
            }
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((-1543902090) != (((/* implicit */int) ((short) (short)17591))))))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_27 += ((/* implicit */short) (_Bool)1);
                        var_28 = ((/* implicit */unsigned char) arr_14 [(short)0] [i_6]);
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) 8388607U);
                            var_30 = ((/* implicit */unsigned long long int) arr_20 [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 2]);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 3; i_10 < 16; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_4 [i_10 - 3]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            arr_37 [7] [i_9 - 1] [i_10] [i_11] [i_9 - 1] = ((/* implicit */unsigned char) (-(arr_32 [i_10 + 4] [i_9 + 4] [i_9 + 1] [(_Bool)1])));
                            var_32 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (arr_29 [i_9 + 1] [11LL] [i_11] [i_12])))));
                        }
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned char) ((var_12) ? (arr_9 [i_1] [2LL] [i_9 - 1]) : (((/* implicit */unsigned int) var_9))));
            arr_38 [i_9 + 3] = ((/* implicit */int) ((unsigned short) arr_14 [i_9 + 4] [i_9 + 2]));
        }
        arr_39 [i_1] [(short)2] = ((/* implicit */unsigned long long int) -8733993196573463842LL);
        var_34 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_1] [i_1] [i_1] [i_1]) != (((/* implicit */int) (unsigned short)42816)))))) / (((((/* implicit */_Bool) arr_23 [i_1] [7U] [i_1] [i_1] [i_1] [(short)19])) ? (((/* implicit */unsigned int) arr_30 [i_1] [i_1] [i_1] [i_1])) : (2083529731U)))))) + (((((/* implicit */_Bool) 8862570778854973762LL)) ? (6933454868443082130LL) : (max((4299494560596941093LL), (524287LL))))));
    }
    for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_13] [i_13])), (((var_13) ? (arr_4 [i_13]) : (arr_4 [i_13])))));
        var_36 = max((((/* implicit */unsigned int) (unsigned short)32768)), (1311669950U));
        arr_42 [i_13] = ((/* implicit */unsigned int) min((((((/* implicit */int) (!(arr_16 [i_13] [i_13] [i_13] [i_13])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16446))))))), (((/* implicit */int) ((max((arr_13 [i_13] [12U] [i_13] [12U] [12U] [i_13]), (arr_13 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32768)) ? (1311669950U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 4099227298U))) & (((/* implicit */int) arr_20 [i_14] [(unsigned short)13] [i_14] [i_14]))));
        arr_45 [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))))))));
        var_39 = ((/* implicit */short) var_11);
    }
    var_40 += ((/* implicit */unsigned long long int) 4099227312U);
}
