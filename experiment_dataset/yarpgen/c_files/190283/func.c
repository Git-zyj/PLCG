/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190283
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_2 [i_0]) : (arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 5836880306761175700LL)), (((((unsigned long long int) var_0)) + (((/* implicit */unsigned long long int) 5836880306761175700LL))))));
            var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (max((5836880306761175700LL), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)82))))))) : (max((((/* implicit */long long int) var_6)), (arr_5 [i_0] [i_1])))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) / (((/* implicit */long long int) ((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_1])) - (41747))))))))) || (((((/* implicit */int) var_11)) < (var_5)))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-17201)) == (((/* implicit */int) (unsigned char)249))));
                var_22 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)17218)) ? (((/* implicit */int) (unsigned short)58380)) : (((/* implicit */int) (signed char)85))));
                    arr_14 [i_0] [i_2] [i_3] [i_4] [i_3] = arr_5 [i_3 - 1] [i_3 + 2];
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    var_24 &= ((/* implicit */signed char) (+(var_13)));
                    arr_17 [i_3] [i_3] [i_2] [i_2] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_3 + 2])) ? (arr_0 [i_0] [i_2]) : (arr_0 [i_2] [i_2])))) ^ (arr_11 [i_3 - 1] [i_3] [i_3])));
                    var_25 = ((/* implicit */long long int) arr_1 [i_0]);
                }
                for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_20 [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(arr_16 [i_3] [i_2] [i_3] [i_3 + 1])));
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-17201)))))));
                }
            }
            arr_21 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_16 [8U] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) arr_4 [i_2]))));
        }
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((var_12) & (min((((/* implicit */long long int) ((-6839497104532184627LL) == (((/* implicit */long long int) ((/* implicit */int) var_16)))))), ((-9223372036854775807LL - 1LL)))))))));
    }
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) (signed char)85);
        /* LoopSeq 1 */
        for (unsigned int i_8 = 4; i_8 < 10; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                arr_30 [i_7] [i_9] [i_9] &= ((/* implicit */unsigned int) ((short) max((4366408402729991884LL), (-6839497104532184621LL))));
                var_29 = ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_24 [i_7] [i_7] [i_7])))) / (var_4))) | ((~(((/* implicit */int) var_14))))));
                arr_31 [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) ((((long long int) 6839497104532184620LL)) < ((((!(((/* implicit */_Bool) var_11)))) ? (min((var_12), (6839497104532184621LL))) : (((/* implicit */long long int) ((int) var_1)))))));
                var_30 = ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (max((((/* implicit */int) var_14)), (arr_27 [i_9] [i_8] [i_7])))))) ? (min((arr_5 [i_8 - 1] [i_7]), (arr_5 [i_7] [i_8 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((arr_26 [i_7]) != (((/* implicit */unsigned long long int) 6839497104532184647LL)))))))));
            }
            for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_29 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_10] [i_10] [i_8]))))));
                arr_35 [i_10] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) var_10))))) ? (max((((/* implicit */unsigned int) var_3)), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_8 [i_7])))))))), (max((arr_32 [i_8 - 2]), (((/* implicit */unsigned long long int) arr_2 [i_8 + 1]))))));
                arr_36 [i_7] [i_7] [i_10] [i_8] = ((/* implicit */long long int) ((min((arr_13 [i_7] [i_10] [i_10] [i_8 - 2] [i_8 - 2] [i_8 - 2]), (((/* implicit */long long int) ((int) var_4))))) <= (((/* implicit */long long int) ((/* implicit */int) max(((short)-17209), ((short)17200)))))));
            }
            var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_8 + 1] [i_8 - 3]))))), (arr_9 [i_7] [i_7] [i_8 - 2] [i_7])));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 2; i_11 < 9; i_11 += 3) 
            {
                var_33 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_33 [i_8 - 2] [i_11 + 1] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (18446744073709551615ULL))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), (arr_7 [i_7])))) ? (((/* implicit */unsigned long long int) arr_13 [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11 - 1] [i_7])) : (((((/* implicit */_Bool) arr_32 [i_7])) ? (7618530296116270035ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [10LL] [i_11])))))))));
                var_34 ^= ((/* implicit */signed char) var_3);
                arr_40 [i_7] [i_8] [i_7] = ((/* implicit */short) ((long long int) (signed char)-81));
            }
            arr_41 [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 6839497104532184633LL)))) ? (((((/* implicit */_Bool) arr_24 [i_8 + 1] [i_8 - 4] [i_8 + 1])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_24 [i_8 - 2] [i_8 - 1] [i_8 - 4])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((((/* implicit */int) ((short) 185701985812779910LL))) + (27794)))))));
        }
    }
    var_35 = ((/* implicit */short) max((max((var_12), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_11))));
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)3452))));
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_46 [i_13])) : (((/* implicit */int) arr_46 [i_12]))))), (max((-185701985812779906LL), (((/* implicit */long long int) ((unsigned char) var_5))))))))));
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4516031882445508481LL), (arr_47 [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0))))))) : (max((((/* implicit */unsigned int) var_8)), (((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
            arr_48 [i_12] = (signed char)-92;
        }
        for (short i_14 = 1; i_14 < 20; i_14 += 3) 
        {
            arr_52 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) min((arr_51 [i_14]), (arr_51 [i_12])));
            var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_12] [i_14 - 1]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_46 [i_14 + 4])) : (arr_42 [i_12])))));
            arr_53 [(short)8] [(short)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_2), (((/* implicit */signed char) (_Bool)1))))) >= (((/* implicit */int) max((arr_44 [(signed char)20]), (arr_50 [i_12]))))));
            arr_54 [i_12] [i_12] = ((/* implicit */unsigned long long int) var_3);
        }
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((int) 185701985812779905LL))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-25))))), (((((/* implicit */_Bool) 14497874537345705344ULL)) ? (3948869536363846272ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_12]))))))) : (((/* implicit */unsigned long long int) ((int) arr_47 [i_12])))));
        var_41 |= ((/* implicit */int) max((((/* implicit */long long int) -9)), (-185701985812779905LL)));
    }
}
