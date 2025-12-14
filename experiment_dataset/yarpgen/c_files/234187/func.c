/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234187
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
    for (int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) arr_1 [i_0 - 4])) : (((int) var_17)))))));
                    var_20 *= ((/* implicit */long long int) arr_4 [10U] [i_1] [i_2]);
                }
                for (unsigned int i_3 = 1; i_3 < 20; i_3 += 3) 
                {
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_13 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1])))))) ? (((((/* implicit */_Bool) arr_13 [i_0 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (arr_13 [i_0 - 4]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_16 [(unsigned short)0] [i_4] [i_4] [i_3] [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */short) ((((/* implicit */_Bool) 3217350756U)) ? (arr_12 [i_4] [(_Bool)1] [i_1 - 1] [i_0 - 2]) : (arr_12 [i_0 - 1] [(signed char)16] [i_3 + 1] [i_4])));
                        arr_17 [i_1] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1]))) : (-3994756086619322588LL)));
                        var_22 -= ((/* implicit */unsigned int) var_15);
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0 - 2])) ? (var_16) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))))) ? ((((_Bool)1) ? (((/* implicit */int) ((signed char) -407995951324114136LL))) : (-4))) : (((/* implicit */int) ((_Bool) arr_19 [i_0 - 3] [i_3 - 1] [(_Bool)1]))))))));
                        arr_20 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (max((arr_19 [i_0] [i_1 - 1] [i_3]), (((/* implicit */unsigned int) 1964097653)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_1])))))), (max((arr_19 [i_0 - 1] [i_1 - 1] [i_5 - 1]), (min((22051263U), (((/* implicit */unsigned int) arr_15 [i_0 - 1] [(_Bool)1] [i_1 - 1] [i_1] [i_5 - 1] [i_5]))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_24 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -1765843483)) && (((/* implicit */_Bool) 3217350756U)))) ? (((/* implicit */int) ((short) -407995951324114142LL))) : (1916125757)));
                        arr_25 [i_0 - 3] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) -407995951324114136LL)))));
                    }
                    var_25 -= ((/* implicit */short) arr_1 [i_1]);
                    var_26 &= ((/* implicit */_Bool) max((((((((/* implicit */int) var_6)) + (2067749111))) + (((/* implicit */int) arr_7 [4LL])))), (((int) max((((/* implicit */unsigned int) arr_0 [i_1])), (arr_24 [i_0 - 2] [6U] [i_1] [i_1] [i_1 - 1] [i_3 - 1]))))));
                    var_27 ^= ((/* implicit */unsigned short) min((max((arr_8 [i_0 + 1] [i_0 - 4] [i_1 - 1] [i_3]), (min((((/* implicit */long long int) 2147483624)), (-8524682372668772400LL))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))))));
                }
                for (signed char i_7 = 1; i_7 < 20; i_7 += 3) 
                {
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_9) : (((/* implicit */int) arr_21 [4U] [i_0 - 3] [i_0] [i_1 - 1] [i_1] [i_1 - 1]))))) ? (min((((/* implicit */long long int) arr_21 [i_1 - 1] [i_1] [i_7 - 1] [i_0 - 1] [i_7 + 1] [i_1 - 1])), ((((_Bool)1) ? (arr_8 [i_0] [12] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7 - 1]))))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_7 - 1])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [(short)8] [i_1])) : (((/* implicit */int) (_Bool)1)))))))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (1964097653)))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [14])))))) ? (((/* implicit */int) arr_14 [(unsigned short)18] [i_1] [i_1 - 1] [18] [i_7 - 1])) : (arr_26 [i_0] [i_1 - 1] [i_7] [(short)1]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((/* implicit */int) var_17)), (var_9))))));
                                var_31 *= var_7;
                                arr_36 [i_9] [i_8] [i_8] [(unsigned short)2] [(signed char)6] [i_9] &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((arr_18 [i_0] [i_0] [i_7] [i_9] [i_9]), (var_14)))) ? (((long long int) (unsigned short)62920)) : (((/* implicit */long long int) ((int) var_7))))), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (((var_7) + (((/* implicit */int) var_17)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 *= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1])) ? (arr_11 [(_Bool)1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_11 [8] [i_1 - 1] [i_1 - 1] [i_1]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_11 [10U] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                            arr_45 [i_0] [5U] [i_1] [i_7] [3U] [i_1] = ((/* implicit */signed char) arr_44 [i_1]);
                            var_33 *= ((/* implicit */int) arr_5 [i_7]);
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) 940268187)) ? (((/* implicit */unsigned int) (+((+(var_2)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_0] [i_7])), (var_13)))) ? ((((_Bool)1) ? (var_11) : (arr_28 [i_7] [(signed char)4] [i_7 - 1]))) : (((/* implicit */unsigned int) ((int) -3))))))))));
                            var_35 ^= ((/* implicit */int) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [20LL] [i_0] [i_0])) ? (((/* implicit */unsigned int) -882615478)) : (var_13)))));
                        }
                        for (int i_12 = 4; i_12 < 19; i_12 += 3) 
                        {
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) -1964097632))), (max((((/* implicit */long long int) arr_39 [i_0] [(short)17] [(short)17] [i_10] [i_12] [(short)17])), (var_8)))))) ? (9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_31 [i_0 - 2] [i_1 - 1] [i_12 + 2]))))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)26885)), (1121614356)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_17)))))));
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_13)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 524286U)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_46 [i_12 - 4] [(_Bool)1] [i_10] [i_7] [i_7])) ? (4294967272U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))));
                        }
                        arr_49 [i_0] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((signed char) arr_39 [i_7 - 1] [i_7] [i_1 - 1] [i_1] [i_0 + 1] [i_0]));
                        arr_50 [i_0] [i_1] [i_7] [i_10] = ((/* implicit */unsigned int) var_9);
                    }
                }
                arr_51 [7U] [i_1] [i_1] = max((((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) arr_43 [i_0 - 3] [i_1 - 1] [i_1 - 1] [i_1]))))), (((int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
                var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) 2666696240U))));
            }
        } 
    } 
    var_40 += ((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (min((var_2), (((/* implicit */int) var_15)))) : (((/* implicit */int) var_10)))))));
    var_41 &= ((4294967258U) << (((((/* implicit */int) var_4)) - (22753))));
    var_42 += ((/* implicit */_Bool) var_7);
}
