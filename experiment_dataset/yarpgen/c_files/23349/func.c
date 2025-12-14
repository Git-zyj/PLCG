/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23349
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */long long int) -964835495)) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (-964835479)))) ? (((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_12))))))))))));
    var_15 = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) max(((signed char)-98), (((/* implicit */signed char) var_12))))), ((+(864706958U))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) ((unsigned long long int) 55589222));
                                var_17 += ((/* implicit */signed char) (!(((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                arr_13 [i_1] = ((/* implicit */signed char) var_2);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned int) var_7);
                    var_19 *= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (signed char)-58)) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0] [(unsigned short)6])) - (1)))))));
                }
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((((/* implicit */_Bool) 433616733)) ? (var_11) : (((/* implicit */long long int) 55589216)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (1607035024) : (2147483647))))));
                    var_21 = (+(((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0] [i_1] [i_6] [i_6]))));
                    var_22 = arr_11 [i_0] [i_0] [i_1] [i_6] [i_0];
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (923835386398731430ULL) : (1152921504606846975ULL)))) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_8))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (arr_22 [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        var_25 += ((/* implicit */int) var_9);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 4; i_9 < 13; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))));
                            arr_29 [i_0] [i_0] [i_7] [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9])) ? (346617771U) : (var_5)))) : (var_11)));
                        }
                    }
                    for (short i_10 = 2; i_10 < 14; i_10 += 2) /* same iter space */
                    {
                        var_27 = (~(((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_7] [i_7] [i_7] [i_10] [i_10])) ? (131008) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_7] [i_10 - 2])))));
                        var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 964835495)))) ? (arr_31 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) (((_Bool)1) ? (var_0) : (964835494))))));
                        arr_33 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_1);
                        var_29 += ((/* implicit */int) -4968727240870042248LL);
                    }
                    for (short i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
                    {
                        var_30 += -131008;
                        var_31 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) var_6)) | (var_2))));
                    }
                }
                /* LoopNest 3 */
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_11))))))), (((signed char) ((unsigned int) 8841678481245788499LL)))));
                                var_33 = max(((~(min((1959036660), (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_13])))))), (((/* implicit */int) max((arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]), (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                } 
                var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 4294967280U)), ((+(max((arr_22 [i_0] [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) var_11))))))));
                arr_49 [i_1] = ((_Bool) (((!(((/* implicit */_Bool) -2147483647)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (4968727240870042248LL)))) : (3333711677293645398ULL)));
            }
        } 
    } 
}
