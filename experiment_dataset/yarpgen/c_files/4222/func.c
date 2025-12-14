/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4222
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
    var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) * (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-1LL)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) arr_4 [i_1 - 3] [i_1 - 3])))));
                        var_21 = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                        arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((short) (-(((/* implicit */int) var_4))))));
        arr_11 [i_0] = ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(((arr_2 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))), (((/* implicit */unsigned long long int) var_3))));
                                arr_24 [i_0] [i_4] [i_5] [i_6] [(_Bool)1] [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) var_16);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4])) ? (min((13524591529809506872ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((((/* implicit */_Bool) -13LL)) ? (max((((/* implicit */unsigned long long int) var_4)), (var_17))) : (((((/* implicit */_Bool) var_10)) ? (12230766264730455945ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    arr_25 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */int) (+(12230766264730455965ULL)));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_30 [5ULL] = (~(arr_8 [i_8] [i_8] [(unsigned short)16] [(unsigned short)16] [i_8]));
        var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (((~(6215977808979095651ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (((/* implicit */int) arr_29 [9U] [i_8]))))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) != (arr_3 [i_9])))), (((unsigned long long int) (signed char)-1))))) || (((/* implicit */_Bool) (~(6215977808979095669ULL))))));
        var_25 = ((/* implicit */long long int) var_12);
        /* LoopNest 2 */
        for (unsigned char i_10 = 1; i_10 < 8; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_12 = 1; i_12 < 7; i_12 += 2) 
                    {
                        var_26 = (short)-3239;
                        /* LoopSeq 2 */
                        for (short i_13 = 3; i_13 < 9; i_13 += 3) 
                        {
                            arr_44 [(unsigned char)0] [i_11] [i_11] [i_9] = ((((/* implicit */_Bool) ((unsigned short) arr_37 [i_10] [i_9]))) ? (((((/* implicit */_Bool) arr_38 [i_9] [i_9] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_9]))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_26 [i_9]))))));
                            arr_45 [i_11] [i_10] [i_11] [i_12] [i_9] [(signed char)3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_10] [i_11] [i_10] [i_10 + 1] [i_12 - 1])))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            arr_48 [i_9] [i_10] [i_10 - 1] [i_11] [i_12 + 1] [i_14] [i_14] = ((signed char) var_15);
                            var_27 = ((/* implicit */int) (unsigned short)39949);
                        }
                        var_28 = ((/* implicit */short) 30LL);
                        var_29 = ((/* implicit */unsigned long long int) ((int) var_18));
                        arr_49 [i_11] = ((/* implicit */long long int) ((unsigned short) arr_21 [i_12] [i_12] [i_12 + 3] [i_12] [i_12] [i_12 + 2] [i_12]));
                    }
                    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_52 [i_11] [i_11] [2ULL] [i_11] = ((/* implicit */_Bool) max((arr_31 [i_9]), (((/* implicit */unsigned long long int) var_13))));
                        arr_53 [i_11] [i_10 - 1] = (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+(22LL)))) : (var_17))));
                        var_30 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_47 [i_9] [i_11] [i_10 + 1])) ? (arr_47 [i_10] [i_11] [i_10 + 1]) : (arr_47 [i_10] [i_11] [i_10 + 1])))));
                        arr_54 [i_9] [i_11] [i_11] [i_15] = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_14 [i_10 - 1] [i_10 + 1] [i_11])) ^ (((/* implicit */int) arr_15 [i_10 - 1] [i_11] [i_15])))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        arr_58 [i_9] [i_10 + 2] [i_9] [i_11] [i_11] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_10 + 2] [(short)12] [i_10]))))) && (((/* implicit */_Bool) ((var_9) ? (arr_21 [i_9] [i_9] [i_10] [i_10 - 1] [i_10 + 1] [i_16] [(unsigned char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [i_9] [i_9]))))))));
                        arr_59 [i_11] [i_10] [i_10] [i_11] [i_11] [i_16] = ((/* implicit */unsigned short) ((signed char) 619076025763648014ULL));
                        var_31 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1])) ^ (((/* implicit */int) var_1))))), (((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))))) << (((/* implicit */int) ((unsigned short) arr_4 [i_9] [i_10])))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) 22LL)) : (var_6))), (((/* implicit */unsigned long long int) var_2))))) ? (((int) (signed char)-117)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_9] [i_10 - 1] [i_11] [(_Bool)1] [(unsigned char)11] [i_9])) ? (((/* implicit */int) arr_41 [(unsigned short)0] [i_10 - 1] [i_11] [i_10 - 1])) : (((/* implicit */int) var_4))))))));
                    }
                    var_33 = ((/* implicit */long long int) var_6);
                    var_34 = ((/* implicit */unsigned long long int) arr_28 [i_11] [i_9]);
                }
            } 
        } 
    }
    for (unsigned short i_17 = 1; i_17 < 11; i_17 += 2) 
    {
        arr_62 [i_17] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) (short)27062)))))) ^ (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) - (max((((/* implicit */unsigned long long int) arr_7 [i_17 - 1] [i_17 + 1] [(short)10] [i_17] [i_17])), (var_6))))));
        var_35 = ((/* implicit */unsigned short) ((_Bool) 23LL));
    }
}
