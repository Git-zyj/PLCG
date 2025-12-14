/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202993
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) 1071502381);
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_11), (arr_0 [i_0] [i_1])))) != (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (1071502394) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) var_8);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) var_10)))));
                            var_16 += ((/* implicit */_Bool) var_11);
                            var_17 = arr_2 [i_1] [i_2];
                            var_18 |= ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 1) 
                        {
                            {
                                arr_22 [i_4] [i_5] [i_6] [i_7] [i_4] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_2)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) arr_19 [i_8] [i_7] [i_6] [i_5] [i_4])), (var_0)))))));
                                var_19 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) 1071502405)))), (arr_6 [i_4])));
                                arr_23 [i_8] [i_4] [i_4] [(unsigned short)12] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_8 - 1] [i_8 + 1] [i_8 + 2] [i_8 - 1])) ? (477135061572293648LL) : (((/* implicit */long long int) 1071502408)))) + (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                                var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (((((/* implicit */int) arr_3 [i_4] [i_8 + 2] [i_4])) + (((/* implicit */int) arr_20 [i_8 + 2] [i_8] [i_8] [i_8] [i_8]))))));
                                var_21 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25820)) && (((/* implicit */_Bool) var_8))))) >= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) -1071502411);
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_9])) && (((/* implicit */_Bool) var_8))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (arr_18 [i_4] [i_4] [i_5] [i_9])));
                    arr_26 [i_4] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1071502433)) ? (((((/* implicit */_Bool) -1071502424)) ? (-8661432958252474966LL) : (8661432958252474955LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2363870978U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_4]))));
                                arr_32 [i_4] [i_5] [i_4] [i_10] [18U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)47)) && (((/* implicit */_Bool) arr_27 [i_4] [i_11])))))) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_3)))));
                                arr_33 [i_11] [i_4] [i_9] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_5] [i_5] [i_4]))) == (((((/* implicit */_Bool) var_7)) ? (2760383734U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    arr_36 [i_4] [i_4] [i_4] = ((/* implicit */short) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4]))) % (-8316934916269149434LL))));
                    arr_37 [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (+((((_Bool)1) ? (arr_27 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 17; i_14 += 4) 
                        {
                            {
                                var_26 |= ((/* implicit */unsigned int) ((unsigned short) arr_20 [i_12] [(unsigned short)14] [i_12] [i_14 + 1] [(_Bool)1]));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_14 + 1] [i_14 + 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((arr_43 [i_4] [i_5] [i_5] [i_13] [i_14 + 2]) == (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                                arr_45 [i_4] [i_5] [i_12] [i_13] [(unsigned short)3] = ((/* implicit */unsigned char) arr_10 [i_14 - 1]);
                                var_28 = ((/* implicit */unsigned long long int) var_4);
                                var_29 = ((/* implicit */unsigned int) (-(arr_35 [i_4] [i_4] [i_12] [i_4])));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) arr_10 [i_5]);
                    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)22)))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (unsigned short)27405))));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_4] [i_15] [(unsigned char)1] [(short)2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_9))))) : (279763762U)))) : (min((((/* implicit */long long int) (-(1966514895U)))), (max((((/* implicit */long long int) var_4)), (arr_8 [i_17] [i_17] [i_15] [5U])))))));
                                var_34 = ((/* implicit */short) (!(((/* implicit */_Bool) min((3258341589U), (((/* implicit */unsigned int) arr_18 [i_4] [i_5] [i_16] [i_17])))))));
                            }
                        } 
                    } 
                    arr_55 [i_4] = (_Bool)1;
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 16; i_19 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) (-(var_0)));
                                var_36 = ((/* implicit */unsigned short) var_8);
                                var_37 = max((((/* implicit */int) (signed char)95)), (((((/* implicit */int) var_7)) << (((2526425289U) - (2526425272U))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((var_10), (var_11)))))))));
}
