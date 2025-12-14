/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28742
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    var_19 = ((/* implicit */int) var_13);
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_1] [i_0]))))) / (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1612026427))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) : (min((15580772131118680649ULL), (arr_1 [i_1 + 1])))));
                    arr_6 [i_0 - 1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0]))));
                }
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0 - 1] = ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (arr_4 [i_0] [i_0 - 1] [i_1 - 1] [i_3]));
                    arr_10 [i_0] [i_1 - 1] [i_0] [i_3] = ((/* implicit */int) min((min((((/* implicit */unsigned int) var_5)), (593853544U))), (((/* implicit */unsigned int) (unsigned char)68))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_1] [i_0] [i_1] = ((signed char) 2865971942590870966ULL);
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_1 + 2] [i_0 + 1]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_1 + 1] [i_1 + 1] [i_0] = ((/* implicit */int) var_17);
                        arr_19 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 2865971942590870966ULL);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
                    {
                        var_22 -= ((/* implicit */signed char) ((short) 2865971942590870966ULL));
                        arr_23 [21U] [i_1] [i_0] [i_6] = arr_4 [i_0] [i_1] [i_3] [i_0];
                        arr_24 [i_6] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 + 1] [(_Bool)1])) * (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 1] [i_6])))) | (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_0])) >= (((/* implicit */int) (signed char)-5)))))));
                        arr_25 [i_6] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) (~((+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-11)), (arr_11 [i_0 + 1] [i_0 + 1] [i_0]))))))));
                    }
                }
                for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 22; i_8 += 4) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)5))) | (7551179702279209352LL)));
                                var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)15)), ((-(((/* implicit */int) (signed char)-5))))));
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) var_15))));
                    var_25 = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) (signed char)5)) ? (1125639412956904469ULL) : (203316993867098276ULL)))))));
                }
                for (int i_10 = 3; i_10 < 19; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_33 [i_0 - 1] [i_11 - 1] [i_10 + 1] [i_12 - 1])))) ? (min((arr_36 [i_12] [i_1 + 3] [i_12] [i_11]), (((unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_12 + 3])))));
                                var_27 = ((/* implicit */unsigned long long int) var_1);
                                var_28 = ((/* implicit */unsigned long long int) ((var_9) ? (max((arr_32 [i_0 - 1]), (arr_32 [i_0 - 2]))) : (((/* implicit */int) ((arr_32 [i_0 - 1]) <= (arr_32 [i_0 + 1]))))));
                                arr_42 [i_0] [i_11] [i_10 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_1 - 1] [i_10 - 2] [i_11 + 2] [i_12 + 3])) ? (arr_36 [i_1 + 2] [i_10 - 3] [i_11 - 1] [i_12 + 1]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)5)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */signed char) arr_43 [i_0 - 1] [i_0 - 1] [i_10] [i_1]);
                        var_30 = ((/* implicit */unsigned char) 1046455140U);
                    }
                    for (long long int i_14 = 1; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) (-((~(((int) -7551179702279209352LL))))));
                        var_32 &= arr_5 [i_0] [i_10] [i_14];
                        arr_47 [i_0] = min((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-5))))) ? (((/* implicit */int) arr_44 [i_0])) : (((/* implicit */int) ((signed char) arr_46 [i_0] [i_0] [(signed char)0]))))), (((((/* implicit */_Bool) ((((-7551179702279209352LL) + (9223372036854775807LL))) << (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)68))) : (((/* implicit */int) ((unsigned short) arr_32 [i_10]))))));
                    }
                    for (long long int i_15 = 1; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        arr_51 [i_0] [i_10 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7551179702279209351LL)) ? (((/* implicit */int) max((var_2), (var_2)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -7187239709193714111LL)) >= (arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]))))))) | (min((((/* implicit */unsigned long long int) (unsigned short)0)), (var_13)))));
                        var_33 = ((/* implicit */signed char) (+((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [20] [(unsigned short)7] [(unsigned short)7] [i_15 - 1] [i_15 + 2] [(signed char)14]))) != (arr_16 [i_15] [i_15] [i_10] [(_Bool)1] [i_0 - 1]))))))));
                        var_34 -= ((/* implicit */long long int) (((~(arr_45 [i_0 - 1] [i_0 + 1] [i_1 + 3] [i_10 + 1]))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_31 [i_15] [i_1]) + (2147483647))) << (((((/* implicit */int) (signed char)25)) - (25)))))) ? ((-(((/* implicit */int) arr_48 [i_1] [i_1 + 3] [i_1] [i_1])))) : (((((/* implicit */int) (signed char)-6)) / (1612026427))))))));
                        arr_52 [i_10] [i_10] [i_10] [i_0] [i_10] [i_10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) -1612026427)) ? (((/* implicit */int) (signed char)-5)) : (33554431))), (arr_46 [i_0 + 1] [i_0 + 1] [i_0])));
                    }
                    var_35 -= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 7551179702279209352LL)))))));
                    var_36 += ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)11579))))) <= (max((((/* implicit */unsigned long long int) (short)-31895)), (arr_36 [i_1 - 2] [i_1 + 1] [i_0 - 2] [i_0 - 1]))));
                    var_37 = max((((((/* implicit */_Bool) ((signed char) var_18))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8988))))) : (((((/* implicit */_Bool) 7551179702279209351LL)) ? (arr_14 [i_0 - 2] [i_0] [(_Bool)1] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) (+(((var_18) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                }
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) (+((-(min((var_7), (((/* implicit */unsigned long long int) 0U)))))))))));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)1023))))) ? (((((/* implicit */unsigned long long int) var_12)) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [i_1 - 1] [i_0] [i_0] [i_1]))) ^ (var_12))), (((/* implicit */long long int) min(((short)1023), (arr_17 [i_0] [i_1] [(unsigned short)22] [8] [i_1 - 1] [i_1]))))))))))));
            }
        } 
    } 
    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) var_8))));
    var_41 = ((/* implicit */_Bool) var_12);
}
