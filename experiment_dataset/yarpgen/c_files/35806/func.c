/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35806
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
    var_18 = max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((long long int) var_13)))))));
    var_19 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) ^ (-9223372036854775797LL))), ((~(max((var_14), (3994796749657352850LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_4 + 1] [i_1 + 1] [i_0] [i_4]));
                                arr_17 [i_1] [i_4] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (-3201143042874413855LL)))) ? ((~(-1031664995))) : (((int) arr_12 [i_0] [i_1] [(unsigned char)1] [(_Bool)1] [i_3] [i_4]))));
                                arr_18 [i_3] [i_1 + 1] [10LL] [i_3] [i_4] [10LL] = ((/* implicit */_Bool) (unsigned char)132);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) arr_7 [15] [15] [15]);
                    arr_20 [i_0] [i_0] [i_0] [i_0] = ((var_7) ? (((/* implicit */long long int) arr_13 [i_1 - 1] [i_1 - 1] [i_2 + 2])) : (8987652768895925998LL));
                    arr_21 [i_0] [i_1 - 1] [i_2] = arr_2 [9LL] [i_1];
                }
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_28 [i_7 - 1] [i_6] [i_5] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) (+((+(arr_12 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7])))));
                            arr_29 [i_0] [i_1] [i_0] [i_6] [i_7] = var_11;
                        }
                        for (long long int i_8 = 1; i_8 < 19; i_8 += 3) 
                        {
                            arr_33 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) arr_5 [i_8 - 1] [i_0] [i_0])), (var_14)))))));
                            arr_34 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((arr_11 [i_0] [i_1 - 1] [i_5] [14LL]) | (((/* implicit */long long int) arr_7 [i_0] [i_6] [i_5]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_6])), (arr_8 [i_1 - 1] [i_5] [i_1 - 1] [i_8])))) ? (arr_30 [i_1 - 1] [15LL] [i_5] [i_1 - 1] [i_0]) : (min((arr_12 [i_0] [i_1] [6LL] [i_6] [i_6] [i_8]), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = (~((((((~(((/* implicit */int) var_3)))) + (2147483647))) << (((/* implicit */int) arr_6 [i_0])))));
                            arr_36 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)132)) + (((/* implicit */int) (_Bool)1)))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_39 [i_0] [i_0] [i_1 - 1] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_1])), (((long long int) (unsigned char)185)))), (2374356496226896744LL)));
                            arr_40 [i_6] [i_1 + 1] [i_1 + 1] [i_6] [i_9] = (!((!(((/* implicit */_Bool) 9223372036854775807LL)))));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            arr_45 [(_Bool)1] [(_Bool)1] [i_5] [(_Bool)1] [(_Bool)1] = min((((arr_1 [i_0]) & (arr_8 [i_6] [i_1] [i_10] [i_1 - 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_0] [i_1] [i_5] [5LL] [i_10])))))))));
                            arr_46 [i_10] [i_6] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), (((unsigned char) 1976106668))));
                            arr_47 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) (unsigned char)229)));
                            arr_48 [(unsigned char)0] [(unsigned char)0] [i_5] [i_6] |= ((/* implicit */unsigned char) max((max((((1780449039497561150LL) ^ (-440747689696254051LL))), (((/* implicit */long long int) ((int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) min((572148781), (arr_44 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_0]))))));
                            arr_49 [(unsigned char)3] [15] [15] [(_Bool)1] [(unsigned char)14] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_16) ? (arr_14 [i_0] [i_5] [i_5] [i_6] [i_0]) : (((/* implicit */long long int) max((arr_7 [i_5] [(unsigned char)0] [i_10]), (((/* implicit */int) arr_41 [i_0] [i_1] [(_Bool)0] [i_6] [i_10])))))))) ? (((long long int) arr_0 [i_5] [i_10])) : (((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)1)))), ((((_Bool)1) ? (arr_4 [4] [i_0]) : (((/* implicit */int) (unsigned char)53)))))))));
                        }
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            arr_52 [i_0] [i_1 - 1] [i_5] [i_6] [2LL] [i_11] = ((/* implicit */int) (_Bool)1);
                            arr_53 [i_6] [i_1 - 1] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0]))) : (var_4)))))) ? (var_17) : (((long long int) ((long long int) arr_8 [i_11] [i_6] [i_5] [i_0]))));
                        }
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            arr_56 [i_0] [15LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((min((max((var_14), (var_15))), (var_2))), (((/* implicit */long long int) arr_7 [i_0] [5] [1]))));
                            arr_57 [i_0] [i_1] [i_1 + 1] [i_5] [i_6] [i_12] [i_12] = ((/* implicit */_Bool) var_11);
                        }
                        /* vectorizable */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            arr_61 [i_0] [i_1] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((arr_44 [i_0] [19LL] [i_0] [i_0] [i_0]) == (((/* implicit */int) arr_43 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                            arr_62 [i_0] [i_1] [i_5] [i_5] [i_5] &= ((/* implicit */long long int) ((int) var_0));
                        }
                        arr_63 [i_0] [i_1] [i_5] = (_Bool)1;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (int i_15 = 1; i_15 < 19; i_15 += 4) 
                        {
                            {
                                arr_69 [i_15] [i_5] [i_5] [i_14] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((-(7925437304982293998LL))) : (-6207050154597463737LL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_13 [10] [10] [i_5])) : (var_11)))) ? (max((arr_11 [i_15] [i_14] [i_5] [i_14 - 1]), (7732931888587968375LL))) : (((((/* implicit */_Bool) 92660963)) ? (((/* implicit */long long int) 2147483647)) : (var_1)))))));
                                arr_70 [i_15] [i_15] [i_5] [18] = ((/* implicit */long long int) arr_7 [i_15 + 1] [i_14 - 1] [i_14 - 1]);
                            }
                        } 
                    } 
                }
                for (long long int i_16 = 2; i_16 < 19; i_16 += 4) 
                {
                    arr_74 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_44 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_16] [i_16])) ? (arr_22 [i_0] [i_16] [i_0] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((1973058368) >= (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0])))))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) -862692458)))))))));
                    arr_75 [i_0] [i_0] [i_16 - 1] = arr_23 [i_1];
                    arr_76 [9LL] [i_1] [i_16 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 993818784186342268LL)) ? (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))) : (((/* implicit */int) max((arr_23 [i_1]), (arr_23 [i_0])))))), ((-(arr_13 [i_0] [i_0] [i_16 + 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                        {
                            {
                                arr_81 [i_0] [i_18] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (-1201154448) : (((/* implicit */int) var_6)))))));
                                arr_82 [i_0] [i_0] [i_16 + 1] [i_17] = ((/* implicit */_Bool) ((unsigned char) max((min((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_16 + 1])), (1253112930489250228LL))), (-2738410706175363346LL))));
                                arr_83 [i_0] [i_17] = ((/* implicit */unsigned char) min((max((var_1), (((/* implicit */long long int) var_6)))), (max((max((var_1), (6553463630915322348LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_16 - 1] [i_1])))))))));
                                arr_84 [i_0] [i_0] [i_18] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) (+(((long long int) max((-3892546470401076400LL), (arr_12 [15LL] [i_1 + 1] [i_16] [i_0] [i_0] [i_18]))))));
                            }
                        } 
                    } 
                    arr_85 [i_0] [i_0] [18LL] [i_0] = min(((-(524272LL))), (((/* implicit */long long int) ((167533818) % (arr_59 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16 + 1])))));
                }
                arr_86 [i_1] [i_1] [i_1 + 1] = max((max((arr_12 [i_1] [i_1 + 1] [i_0] [i_0] [i_0] [i_0]), (max((-9223372036854775807LL), (arr_1 [i_0]))))), ((~(((-4821503268010475955LL) / (-5380055314218240595LL))))));
                arr_87 [i_0] [(_Bool)1] [i_1] = arr_26 [i_0] [i_1 - 1] [i_0] [i_1] [i_1 - 1] [i_0] [i_1];
            }
        } 
    } 
}
