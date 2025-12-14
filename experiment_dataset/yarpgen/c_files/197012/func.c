/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197012
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
    var_17 = ((/* implicit */short) 2987806253888804821LL);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_18 = arr_2 [i_1] [i_1] [i_1];
            arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 2987806253888804820LL))) + (((int) arr_0 [i_1]))));
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((unsigned short) max((arr_6 [i_0 - 1] [i_0 + 1]), (arr_6 [i_0 + 1] [i_0 - 1]))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) var_15);
                            arr_15 [i_0 - 1] [i_3] [i_3] [i_0 - 1] [i_0] [21ULL] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]);
                            var_21 = ((/* implicit */long long int) (((~(arr_9 [i_3] [i_2] [i_0 - 2]))) <= (max((arr_9 [i_3] [10LL] [i_0 - 1]), (((/* implicit */unsigned long long int) (short)4748))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 21; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_2] [i_2] [i_3] [0U] [i_6 - 1] [i_7] = ((/* implicit */signed char) -2987806253888804821LL);
                            arr_23 [i_0 + 1] [16] [i_3] [(unsigned char)10] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */int) (unsigned short)54211)) >> (((((/* implicit */int) var_7)) - (121))))) << (((((arr_1 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))))) - (4970376509852790991LL))))) : (((/* implicit */int) var_16))));
                            arr_24 [i_3] [i_2] [(short)20] [i_3] [i_6] [i_3] = ((/* implicit */unsigned short) ((short) arr_17 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_0 + 1]));
                            arr_25 [i_0 - 3] [i_3] [i_7] = ((/* implicit */unsigned short) ((2987806253888804821LL) >= (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_6] [i_6 + 1] [21ULL] [i_2] [21ULL] [i_2])))))));
                        }
                    } 
                } 
                arr_26 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_2]))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 4; i_8 < 22; i_8 += 3) 
            {
                arr_29 [i_8 - 4] [i_8 - 4] [i_8] = ((((/* implicit */_Bool) var_7)) ? (201326592) : ((-(((/* implicit */int) arr_27 [i_0 - 1] [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    arr_32 [i_0] [i_9] [i_8] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) 4236760325U);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 126100789566373888ULL))) ^ (((/* implicit */int) arr_27 [i_2] [i_2] [i_0 - 3]))));
                    arr_33 [3] [i_2] = ((/* implicit */unsigned char) (+(((var_13) + (var_3)))));
                }
                for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-86)) || (((/* implicit */_Bool) (unsigned short)0))));
                    var_24 = ((/* implicit */signed char) ((arr_27 [i_0 - 2] [i_8 - 2] [i_10]) && (((/* implicit */_Bool) arr_28 [i_0 + 1] [i_2] [i_8 - 1]))));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
                    arr_43 [11] [6LL] [i_11] [i_12] = ((int) var_11);
                    var_26 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 18320643284143177727ULL)) ? (((/* implicit */int) (signed char)-108)) : (arr_40 [i_0] [i_0] [i_11] [i_11] [i_2])))))), ((~(min((((/* implicit */unsigned int) (unsigned short)65512)), (var_0)))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_49 [i_0] [(signed char)4] [i_0] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]))))) ? (((/* implicit */int) ((var_5) > (var_5)))) : (((/* implicit */int) arr_27 [i_0] [3] [i_11]))))));
                            var_27 = ((/* implicit */unsigned short) min((18320643284143177727ULL), (((/* implicit */unsigned long long int) (unsigned short)0))));
                            arr_50 [i_14] [i_13] [6] [22ULL] [i_2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 6421113245370804039LL))) ? (max((var_12), (((/* implicit */unsigned long long int) (short)32761)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4748)))))) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_9 [20] [2ULL] [(short)16])) ? (((/* implicit */long long int) arr_21 [i_0] [i_2] [i_11] [i_13] [(unsigned short)20])) : ((-9223372036854775807LL - 1LL)))) + (279471434LL))) - (38LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_0] [i_0 + 1] [i_11]) || (arr_27 [i_0] [i_0 - 1] [i_11]))))));
                        }
                    } 
                } 
            }
            arr_51 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -7697354466258323441LL)))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)10290)) & (((/* implicit */int) var_14))))) : (arr_48 [i_0 - 3] [(_Bool)1] [i_0] [i_0] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_2] [i_0]))))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))))));
        }
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_0 - 3] [8LL] [i_0 - 3] [(short)4] [i_0 - 3])) ? (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_3 [6LL] [i_0 - 2]))))) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [2U]))))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_16 [i_0] [i_0]) : (((/* implicit */unsigned long long int) (~(var_13)))))) : (((/* implicit */unsigned long long int) var_11))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)20] [i_0])))))) <= (((((((/* implicit */_Bool) 126100789566373888ULL)) && (((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)15] [(unsigned short)15])))) ? (-7697354466258323441LL) : (((/* implicit */long long int) ((/* implicit */int) ((short) 18320643284143177727ULL))))))));
        arr_52 [i_0 - 3] = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)126)), (((((/* implicit */_Bool) arr_44 [i_0 - 3] [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_44 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_44 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_15 = 1; i_15 < 21; i_15 += 3) 
    {
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 22; i_17 += 2) 
                {
                    for (long long int i_18 = 1; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (short)-4766))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((int) (short)4765))))) <= (arr_11 [i_18] [i_15] [i_15] [i_15])));
                            /* LoopSeq 1 */
                            for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                            {
                                arr_64 [i_15 + 1] [i_15] = ((/* implicit */long long int) max((max((arr_9 [i_15] [i_15 + 1] [i_15]), (((/* implicit */unsigned long long int) 320265053001182886LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((2537130059U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_15] [i_16] [i_17] [i_18 + 1] [i_17])))))), (max((((/* implicit */unsigned int) var_7)), (arr_34 [i_15] [(unsigned char)2] [(unsigned char)2]))))))));
                                var_31 = ((/* implicit */long long int) var_2);
                                var_32 = ((/* implicit */long long int) arr_59 [i_15]);
                            }
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_15] [i_15 - 1] [(short)14] [i_15] [i_15] [i_15])) <= (((arr_41 [i_18 - 1]) ? (((/* implicit */int) arr_59 [i_15])) : (((/* implicit */int) ((_Bool) var_11)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        for (long long int i_22 = 2; i_22 < 22; i_22 += 3) 
                        {
                            {
                                arr_73 [i_15] = ((/* implicit */short) max((((unsigned char) (~(4296187460291315363LL)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_54 [i_22 + 1])))))));
                                var_34 = min(((+(max((var_3), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((unsigned int) 126100789566373888ULL))));
                                arr_74 [i_15] [i_16] [i_20] [i_15] [i_21] [i_22] = ((/* implicit */long long int) var_15);
                                arr_75 [0U] [i_15] [0U] [i_21] [0U] [i_22] [i_21] = ((/* implicit */unsigned int) arr_48 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]);
                            }
                        } 
                    } 
                } 
                arr_76 [i_15] [i_16] [i_16] = ((/* implicit */unsigned short) max((max(((-(2852368587004442757LL))), (((/* implicit */long long int) arr_41 [i_16])))), (((/* implicit */long long int) ((int) (short)-12166)))));
                var_35 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_67 [i_15] [i_16] [i_16]))) && (arr_41 [i_15])))), (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) (short)-3114)))))));
            }
        } 
    } 
}
