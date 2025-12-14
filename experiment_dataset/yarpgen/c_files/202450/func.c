/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202450
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
    var_18 = ((/* implicit */signed char) min((var_18), (var_11)));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)3896))), (((unsigned int) -1694374566))))) ^ (max((((/* implicit */long long int) var_16)), ((~(var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) var_0);
                                var_21 = ((/* implicit */unsigned char) var_14);
                                var_22 = ((/* implicit */unsigned char) (-(arr_4 [i_1] [i_3] [i_4])));
                            }
                        } 
                    } 
                    var_23 = (~(arr_0 [i_1 + 1]));
                    var_24 = var_12;
                    var_25 = ((/* implicit */_Bool) arr_3 [i_0]);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_26 = ((((/* implicit */int) var_13)) * (((/* implicit */int) ((unsigned char) arr_2 [i_5]))));
                    var_27 = ((/* implicit */unsigned char) 1694374585);
                    var_28 = (~(((1285825210059450854LL) | (((/* implicit */long long int) -1694374564)))));
                }
                for (unsigned int i_6 = 2; i_6 < 9; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */int) arr_10 [i_6 - 1] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_7 [(_Bool)1] [i_1] [i_6 - 1] [i_8]))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_8))));
                        }
                    }
                    for (int i_9 = 1; i_9 < 7; i_9 += 2) 
                    {
                        var_32 = (~(arr_11 [i_0]));
                        var_33 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_27 [i_0] [(signed char)2] [i_6]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_6 + 2] [(signed char)6] [i_6] [i_6])) || ((_Bool)1)))), (min((arr_4 [i_0] [i_0] [i_6]), (((/* implicit */unsigned long long int) 1694374563))))))));
                        var_34 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (+(var_1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6]))) : (288230358971842560ULL))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_12 [i_0] [i_1] [i_6] [i_9] [9])))), (((((/* implicit */int) arr_23 [i_0] [i_1] [(short)0] [i_6])) ^ (((/* implicit */int) var_5)))))))));
                        var_35 = ((/* implicit */_Bool) min((max((((unsigned long long int) var_4)), (max((2812697693782018377ULL), (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_1] [i_9] [i_9 - 1] [i_6] [i_0])))))), (((/* implicit */unsigned long long int) max((arr_21 [i_9 + 3] [i_9 + 1] [i_9] [i_9] [10U]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))))))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_6] [i_0])) ? (arr_27 [i_0] [i_6] [i_6 + 2]) : (arr_27 [i_0] [i_6] [i_9])))) ? (min((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) ((unsigned short) -1694374564))))) : (-2128625648034349086LL)));
                    }
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_38 ^= ((/* implicit */signed char) ((long long int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned char)4] [i_10]));
                        var_39 *= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2812697693782018377ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))) : (((unsigned int) var_6)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned short) var_17);
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) var_9))));
                            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (-((+((-(((/* implicit */int) (unsigned char)31)))))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) max((var_10), (var_5)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_9 [(unsigned short)6] [i_1 + 1] [i_1] [i_1])), (-1694374566)))))))));
                            var_44 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) 18121568456632881229ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))))), ((~(max((var_3), (((/* implicit */long long int) var_1))))))));
                            var_45 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max(((~(-900353265))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)0))))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (max((arr_16 [0LL] [i_6] [i_0]), (((/* implicit */unsigned long long int) var_9))))))));
                            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_6)))))))))));
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) -1694374564)), (15634046379927533260ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_32 [i_0] [(unsigned short)4] [i_6] [i_13] [i_0]))) ? (((unsigned long long int) var_4)) : ((-(18158513714737709043ULL)))));
                        var_49 = ((/* implicit */int) 2812697693782018369ULL);
                        var_50 = ((/* implicit */_Bool) (+(((long long int) (_Bool)1))));
                    }
                    var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) (~(((int) (unsigned short)1)))))));
                    var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) 12623459332901341655ULL))));
                }
                var_53 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) min((-6167714023646238326LL), (((/* implicit */long long int) var_7))))))));
                var_54 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((((/* implicit */signed char) (_Bool)1)), ((signed char)42))), (var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 9695075836601414418ULL))))))) : (max((max((((/* implicit */unsigned int) var_6)), (var_7))), (((/* implicit */unsigned int) max((arr_8 [i_1 + 1] [(short)6] [(short)6] [(short)8]), (((/* implicit */short) arr_2 [i_1])))))))));
            }
        } 
    } 
    var_55 = ((/* implicit */unsigned int) (~(var_2)));
}
