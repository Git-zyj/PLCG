/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221334
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */unsigned long long int) arr_1 [i_0])) + (540431955284459520ULL))) : (((/* implicit */unsigned long long int) (+(0))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((signed char) var_12));
                        var_19 |= ((/* implicit */_Bool) (~(arr_3 [i_0] [19U])));
                        arr_12 [i_0] [18U] [0] [i_0] &= (-((+(arr_3 [11LL] [11LL]))));
                        var_20 = ((/* implicit */unsigned short) arr_8 [11] [i_1] [i_1]);
                    }
                } 
            } 
        } 
        var_21 &= ((/* implicit */unsigned short) arr_8 [i_0] [1U] [i_0]);
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) arr_4 [i_4] [i_4]);
        arr_17 [1U] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-9)))) ? (((((/* implicit */_Bool) -14LL)) ? (-33LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21))))) : (((/* implicit */long long int) 2147483647))))));
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((long long int) (-(((((/* implicit */_Bool) (short)16140)) ? (((/* implicit */int) (short)-16141)) : (((/* implicit */int) (signed char)126)))))));
                var_23 = ((/* implicit */unsigned int) var_15);
            }
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                var_25 |= ((/* implicit */long long int) (signed char)-127);
                var_26 *= ((/* implicit */unsigned long long int) arr_7 [i_5] [i_5]);
                var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_8] [(signed char)15] [i_5])), ((+(((/* implicit */int) var_15))))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    arr_30 [i_6] [i_6] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_8 [i_8 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_8 [i_8 + 1] [i_6 + 1] [i_8]))))));
                    var_28 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_8]), (((/* implicit */int) var_15))))))))));
                    var_29 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_5] [i_5]))));
                    arr_31 [i_8] [i_6 - 1] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                }
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_30 = ((/* implicit */int) arr_3 [i_5] [i_6 - 1]);
                    var_31 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_17)) | (((/* implicit */int) arr_32 [13U] [i_5] [i_5] [i_8] [i_5]))))) <= (max((var_12), (((/* implicit */unsigned int) arr_24 [i_5] [i_6] [i_5]))))))), (var_2)));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_26 [i_11] [i_8 - 2] [i_8 + 1] [i_8 - 2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 24LL)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : ((-(1870720173U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_6] [i_8] [i_10] [i_11])))));
                        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) min((((/* implicit */int) (short)16117)), (((((/* implicit */int) arr_7 [i_5] [i_11])) << ((((((~(((/* implicit */int) (short)32767)))) + (32792))) - (5))))))))));
                    }
                    var_34 = ((/* implicit */unsigned int) arr_6 [i_10] [20ULL] [i_5] [i_5]);
                }
            }
            for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_14))));
                    var_36 -= max((((((/* implicit */_Bool) -14LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_20 [i_5] [i_5] [i_6 - 1])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_5] [i_6] [i_6 - 1])) : (((/* implicit */int) arr_8 [12] [i_6] [i_6 - 1])))));
                }
                var_37 ^= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_16 [i_5])) : (((/* implicit */int) arr_28 [i_5]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)126)) <= (((/* implicit */int) var_0))))) : (((/* implicit */int) arr_35 [i_6] [i_6] [i_6 + 1]))))), (var_11)));
            }
            var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) : (((unsigned int) arr_3 [i_6 - 1] [i_6]))));
            var_39 &= ((/* implicit */_Bool) 1333084713U);
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_16 [i_6 + 1])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_6] [i_6 + 1] [i_6 - 1] [(unsigned short)10] [i_6 - 1] [i_6])), (arr_16 [i_6 + 1])))))))));
        }
        for (short i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            arr_44 [i_5] = ((/* implicit */unsigned int) (unsigned char)114);
            var_41 = ((/* implicit */_Bool) arr_35 [i_5] [i_5] [i_5]);
        }
        for (signed char i_15 = 4; i_15 < 20; i_15 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)36)))))));
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)(-127 - 1))), (24LL)))) ? (((((unsigned int) arr_13 [i_5] [i_5])) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_5])) ? (((/* implicit */int) (unsigned short)0)) : (arr_39 [i_5])))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)18)), ((unsigned char)239))), (arr_37 [i_15 - 2])))))));
            var_44 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) 407728495U))))), (((arr_4 [i_5] [(short)7]) / (-1490445174)))));
        }
        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) var_2))));
        var_46 = ((/* implicit */unsigned int) arr_41 [i_5]);
        arr_48 [i_5] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_5])), (14LL)))) != (12880989075484373385ULL)))));
        arr_49 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */int) var_8)), ((-(((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_43 [i_5])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
    }
    for (short i_16 = 0; i_16 < 21; i_16 += 3) /* same iter space */
    {
        arr_52 [i_16] [i_16] = ((/* implicit */unsigned int) min((max((max((var_10), (((/* implicit */unsigned long long int) arr_16 [i_16])))), (((((/* implicit */unsigned long long int) var_12)) & (12880989075484373385ULL))))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_28 [i_16])))) + (2147483647))) >> (((((((/* implicit */_Bool) 12880989075484373386ULL)) ? (8191ULL) : (0ULL))) - (8169ULL))))))));
        arr_53 [i_16] [i_16] = ((/* implicit */unsigned long long int) var_4);
        arr_54 [i_16] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((+(((/* implicit */int) arr_29 [i_16] [i_16] [i_16] [i_16])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-17)))))))) | (((((/* implicit */_Bool) var_8)) ? (arr_11 [(unsigned short)20]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0)))))))));
    }
    var_48 |= ((int) ((((/* implicit */int) min((var_2), (var_2)))) >> (((((/* implicit */int) var_7)) - (53409)))));
}
