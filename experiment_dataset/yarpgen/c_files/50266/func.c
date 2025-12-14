/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50266
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) var_0);
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -723268542)) ? (723268541) : (((/* implicit */int) var_14))))))), (max((var_11), (18446744073709551615ULL))))))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((723268541) | (((/* implicit */int) ((9022506774990397791ULL) >= (((/* implicit */unsigned long long int) var_9))))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((var_8) ? (max((9424237298719153848ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) min((arr_2 [i_1]), (((/* implicit */unsigned int) var_14))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)10)), (-3557198971794650943LL)));
    }
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (var_1) : ((~(var_3)))))) ? (((max((2894250228U), (((/* implicit */unsigned int) (signed char)-51)))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_0)) : (4221027432U))))) : (1334032926U)));
        arr_9 [(signed char)11] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)14)) ? (3390670) : (((/* implicit */int) (signed char)-15))))));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) arr_7 [i_2] [i_2]);
        var_19 = ((/* implicit */signed char) max((var_1), (((((((/* implicit */_Bool) 3910004394675177295ULL)) ? (3168937807U) : (((/* implicit */unsigned int) -2147483635)))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20)))))));
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (3557198971794650942LL)));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) (signed char)30);
                    arr_18 [i_3] [i_3] = 4294967295U;
                    arr_19 [i_3] = ((/* implicit */_Bool) 0U);
                    arr_20 [i_3] = ((/* implicit */unsigned char) 3557198971794650942LL);
                }
            } 
        } 
        arr_21 [i_3] = ((/* implicit */int) (~(11027857509568032814ULL)));
    }
    for (short i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)12)), (9223372036854775807LL)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_27 [i_6] [i_7] [i_7]);
            /* LoopSeq 1 */
            for (unsigned int i_8 = 4; i_8 < 13; i_8 += 3) 
            {
                arr_33 [i_8] [i_7] [i_7] [i_6] = ((/* implicit */signed char) var_2);
                var_24 = ((/* implicit */_Bool) ((arr_15 [i_7] [i_8 - 4] [(_Bool)1]) - (arr_15 [i_7] [i_8 - 4] [0U])));
            }
            arr_34 [i_6] [i_7] = ((/* implicit */unsigned int) ((long long int) -367873654));
        }
        for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 1) 
        {
            arr_38 [i_9] [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_2))))))) && (((/* implicit */_Bool) ((signed char) arr_25 [(unsigned short)11])))));
            arr_39 [i_6] [12U] = ((/* implicit */_Bool) arr_12 [0] [i_9]);
        }
        for (long long int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            var_25 &= max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_10 - 1] [i_10 - 1])) ? (((0) & (((/* implicit */int) arr_35 [i_6] [i_6] [i_10])))) : (((/* implicit */int) arr_26 [16U]))))), (((((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_13 [i_10])))) ? (max((var_11), (((/* implicit */unsigned long long int) arr_40 [i_10])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [(signed char)14] [(signed char)14] [12LL])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) var_10))))))));
            var_26 = max((min((4026531840U), (((/* implicit */unsigned int) (short)8191)))), (2230790657U));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) arr_41 [i_6] [i_10] [i_10]))))) ? (arr_12 [8] [i_10]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_10)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3637660773U)) || (((/* implicit */_Bool) arr_16 [14U] [i_10] [i_6] [i_10 - 1]))))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned char i_12 = 2; i_12 < 15; i_12 += 1) 
                {
                    {
                        arr_49 [(signed char)8] [i_11] [i_10 - 1] [i_10] [i_6] [i_6] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)72)), (((((/* implicit */_Bool) 6493465156808326851LL)) ? (2064176639U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                        arr_50 [i_12] [i_11 + 1] [16U] [i_6] = ((/* implicit */long long int) 3637660773U);
                    }
                } 
            } 
        }
        for (signed char i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((536870784U) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_29 [i_6] [i_13] [i_13 + 3]))))))) / (((/* implicit */int) ((short) ((unsigned char) (unsigned short)63724))))));
            var_29 = ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_27 [(short)1] [i_6] [(short)1])), (2606128206U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_13 + 3] [i_13] [i_13 - 1])))))) ? (max(((-(((/* implicit */int) arr_13 [i_13])))), (((/* implicit */int) arr_26 [(_Bool)0])))) : (((/* implicit */int) var_13)));
        }
    }
    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) var_4)) - (((/* implicit */int) (short)0)))), (((/* implicit */int) var_8))))) / (((((/* implicit */_Bool) (+(var_6)))) ? (min((((/* implicit */unsigned long long int) var_14)), (11271789676154670079ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) var_10)))))))));
    var_31 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) (signed char)47))), (((657306521U) - (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) + (min(((-(-3463974072982151530LL))), (((/* implicit */long long int) ((2156345376U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
}
