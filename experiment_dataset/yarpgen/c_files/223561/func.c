/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223561
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
    var_20 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_21 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_1 [i_0 + 2] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) (signed char)16);
                            arr_15 [i_0] [i_1 - 1] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */long long int) (+(arr_14 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1])));
                        }
                        var_23 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2] [(signed char)12] [i_0])) ? (((/* implicit */int) (short)-1)) : (arr_9 [i_0] [i_0] [i_0])));
                arr_23 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((var_17) || (((/* implicit */_Bool) 3225869561U)))) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_6] [2])) : (((/* implicit */int) ((unsigned short) (signed char)24)))));
                /* LoopSeq 3 */
                for (signed char i_7 = 3; i_7 < 13; i_7 += 4) 
                {
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_2 [i_6] [i_5 + 1]))));
                    var_26 = ((unsigned int) var_14);
                    arr_26 [i_6] &= ((/* implicit */_Bool) (unsigned short)6066);
                    var_27 = ((/* implicit */unsigned long long int) var_17);
                    var_28 = ((/* implicit */signed char) ((arr_13 [i_7] [i_5 + 3] [i_0] [i_7 + 1] [i_0 - 2] [i_7] [i_7 + 1]) | (((/* implicit */int) var_13))));
                }
                for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (arr_14 [i_0 + 1] [i_0] [i_0 - 1] [i_5 - 2]) : ((~(arr_24 [i_8] [i_5] [i_5] [i_5] [i_0] [i_0])))));
                    var_30 = ((/* implicit */int) max((var_30), ((~(((/* implicit */int) var_7))))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        arr_34 [i_9] [i_9] [i_9] [i_0] [i_9] = ((/* implicit */unsigned int) var_10);
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_5 + 3])) >= (((/* implicit */int) arr_8 [i_5 + 3]))));
                        var_32 = ((/* implicit */unsigned long long int) ((1858096824) + (((/* implicit */int) ((signed char) (signed char)66)))));
                        var_33 |= ((/* implicit */unsigned long long int) var_19);
                    }
                    arr_35 [i_0] = (-(((((/* implicit */_Bool) (signed char)-81)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_4))));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) var_7)))))));
                }
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((int) (signed char)67));
                    var_36 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_6] [i_6])) | (((((/* implicit */_Bool) (short)-26829)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_6]))))));
                    var_37 = ((/* implicit */int) ((long long int) ((var_3) * (((/* implicit */int) (_Bool)0)))));
                }
                /* LoopSeq 2 */
                for (int i_11 = 3; i_11 < 13; i_11 += 3) 
                {
                    var_38 = (-(((/* implicit */int) arr_1 [i_0 - 2] [i_5 + 1])));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((var_15) > (((((/* implicit */int) arr_18 [i_0 - 2] [i_5 + 3])) & (((/* implicit */int) var_13)))))))));
                    arr_41 [i_0] [i_0] = var_2;
                    arr_42 [i_0] [i_6] [i_5 + 4] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_0] [i_6] [9U] [i_5 + 1] [i_5 + 3] [i_0] = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_21 [i_0] [i_5] [i_6] [i_12])))));
                    var_40 = (-(arr_24 [i_5] [i_5] [i_5] [i_5] [i_5 - 2] [i_5 - 2]));
                }
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29142)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1290436556326942848LL)));
            }
            for (signed char i_13 = 3; i_13 < 12; i_13 += 3) 
            {
                var_42 += ((((/* implicit */int) arr_30 [i_13 - 3] [i_13 - 1] [6])) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_30 [i_0 - 1] [i_0 - 2] [(signed char)12])) : (((/* implicit */int) arr_38 [i_0 + 2] [4LL] [4LL] [i_13 + 2])))));
                arr_50 [i_0] [i_5] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_18)) + (((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 4; i_14 < 13; i_14 += 3) 
                {
                    arr_54 [i_0] [i_5 + 2] [i_14] [i_0] = ((/* implicit */short) ((int) (-(arr_46 [i_0] [i_0] [i_13] [i_5 + 4]))));
                    arr_55 [i_13] [i_0] [i_13] [i_0] = arr_48 [i_0] [i_5] [i_5] [i_14];
                    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_13 + 1]))) : (((((/* implicit */_Bool) arr_52 [i_0 + 1] [i_5 - 2] [i_5] [i_13] [i_14 - 4])) ? (arr_19 [i_0] [(_Bool)1] [i_0] [i_14 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                /* LoopNest 2 */
                for (long long int i_15 = 3; i_15 < 12; i_15 += 3) 
                {
                    for (short i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) ((var_16) & (((/* implicit */unsigned int) var_6))));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_13 - 3] [i_5 + 3])) % (((/* implicit */int) arr_7 [i_0] [i_15 - 1] [i_15 - 3] [i_15 - 1]))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((18446744073709551604ULL) <= (15601018129340101459ULL)))) : ((~(((/* implicit */int) (signed char)25))))));
            }
            arr_61 [i_0 + 2] [i_5 - 1] [i_0] = ((/* implicit */int) ((var_6) <= (38374409)));
            var_47 -= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29126)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_18 [i_0] [i_5]))))));
            var_48 = ((/* implicit */int) min((var_48), (((((/* implicit */_Bool) arr_39 [i_5])) ? (((/* implicit */int) (signed char)30)) : (arr_13 [i_0 - 2] [i_0 + 1] [2LL] [i_5 + 3] [i_5] [6U] [i_5 + 1])))));
        }
        for (int i_17 = 3; i_17 < 12; i_17 += 2) 
        {
            arr_66 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_17 + 1] [i_0] [i_17 + 1] [i_17 + 1] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
            var_49 *= ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
            arr_67 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((_Bool) arr_64 [i_17 + 2] [i_0]));
            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) 8149137903557919380ULL))));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            arr_71 [i_0] [i_18] = ((/* implicit */long long int) var_0);
            var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_0 + 1])) <= (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_18]))))))))));
            arr_72 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) (signed char)0)) < (8188))));
            arr_73 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [13ULL] [i_0] [i_0 + 1] [i_0 + 2]))));
        }
        for (long long int i_19 = 1; i_19 < 12; i_19 += 3) 
        {
            var_52 = ((/* implicit */_Bool) ((unsigned int) arr_27 [i_0 - 2] [i_19 + 2] [i_0]));
            /* LoopNest 2 */
            for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 2) 
            {
                for (int i_21 = 0; i_21 < 14; i_21 += 3) 
                {
                    {
                        arr_83 [8] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_19 + 1] [i_20 + 1] [i_21]))));
                        arr_84 [i_0] [i_19 + 2] [i_19 + 2] [4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_38 [i_0 + 2] [i_0] [i_20 - 1] [i_20])) : (arr_77 [i_0 + 2] [i_0] [i_0])));
                        var_53 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (arr_6 [i_0] [i_0 - 2] [i_0 - 1] [i_0])))) < (((/* implicit */int) arr_69 [i_0] [i_19 - 1] [i_21]))));
                        var_54 = (~(((/* implicit */int) arr_7 [i_0] [i_19 - 1] [i_0] [(signed char)3])));
                    }
                } 
            } 
        }
    }
}
