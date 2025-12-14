/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227652
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_14))));
    var_19 = ((/* implicit */unsigned long long int) max((min((2121650529U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4147264043U)) && (((/* implicit */_Bool) var_9))))))), (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)31))))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_12)))))));
    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) min((var_13), (var_13)))) ^ (((var_17) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142))) == (var_10)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)169))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)25)) : (var_0)))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (var_4) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((arr_2 [4U] [i_1 + 2]) < (((13766191945685841727ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101)))))));
        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((2630945107U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((-1177249810) == (((/* implicit */int) (unsigned short)61879))))))))), ((unsigned char)182)));
    }
    for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_2 [i_4] [i_3]);
                            var_24 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) 2006858961U)), (((((/* implicit */_Bool) 4468303118868540476LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (5011016196649724433ULL))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)254)) / (-712453913)))) ? (13034545608538129224ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)69)))))));
                            var_25 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) == (1374902740U))))) + (1841713936U))) - (1204679372U));
                            var_26 = ((/* implicit */long long int) ((var_16) / (((/* implicit */unsigned long long int) min((3821610999U), (1349990702U))))));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_2 [i_2 - 1] [i_2 - 1])));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (arr_18 [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2]) : (arr_18 [i_2 + 1] [i_2 + 1] [i_2] [i_2])));
                            var_29 = ((/* implicit */long long int) ((unsigned int) 16970053844914701536ULL));
                        }
                        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_30 = var_13;
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1]))) : (var_16))) | (((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_2 - 1] [i_2 + 1]))))))))));
                            var_32 = ((/* implicit */unsigned int) var_4);
                            arr_27 [i_2] [i_2] [i_4] [i_5] [i_8] [i_4] [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2] [i_4] [i_8] [i_2 - 2]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1846044540)) != (1476690228794850067ULL)))) > (((/* implicit */int) ((((/* implicit */_Bool) 2087415264404924935ULL)) && (((/* implicit */_Bool) 4141512195365042366LL)))))))) : ((-(((/* implicit */int) arr_14 [i_3] [i_4]))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            arr_30 [i_2] [i_2] [i_4] [i_2] [i_5] [i_9] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_9]))) : (var_6)))));
                            arr_31 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 2])));
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_33 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_17)) ? (286084837U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))))), (((/* implicit */unsigned int) arr_17 [i_2] [i_2] [i_4] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) > (arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_5] [i_2 - 2] [i_2]))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) 1044626319U)), (arr_1 [i_4])))) ? (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) 1048575U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_24 [i_10] [i_3]))));
                            arr_34 [i_2] [i_3] [i_2] [i_10] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) ((9068056165008070030LL) <= (((/* implicit */long long int) 1841713936U))))), ((+(((/* implicit */int) var_1))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 4; i_11 < 9; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (min((arr_5 [i_2]), (((/* implicit */long long int) arr_21 [i_2] [i_2] [i_4] [i_2] [i_12]))))))) ? (((((/* implicit */int) arr_0 [i_2 - 2])) >> (((((/* implicit */int) arr_24 [i_2 + 1] [i_11 - 3])) - (34576))))) : (var_0)));
                                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((arr_19 [i_2] [i_11 - 1] [i_2] [i_2] [i_2 - 1]) ^ (arr_19 [i_2] [i_11 + 1] [i_2 - 1] [i_11] [i_2 - 1]))) - (((/* implicit */long long int) ((unsigned int) ((long long int) arr_35 [i_2] [i_2] [i_2] [i_12])))))))));
                                arr_40 [i_2] [i_2] = ((/* implicit */unsigned int) arr_21 [i_2] [i_2] [i_4] [i_11 - 1] [i_12]);
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_2] [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_2]))) <= (var_12))))));
                    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (~(max((arr_39 [i_2 + 1] [i_2 + 1] [i_2 - 1]), (arr_37 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))))));
                }
            } 
        } 
        var_39 = ((/* implicit */int) (((~(var_17))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2 - 1] [i_2] [i_2] [i_2]))) < (1113849448U)))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                {
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((unsigned long long int) arr_43 [i_13] [i_13])))));
                    var_41 = ((/* implicit */unsigned char) var_0);
                    var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15] [i_14] [i_15]))) : (var_11)))) ? (arr_47 [i_13] [i_14] [i_15]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_5)) | (var_3))))));
                }
            } 
        } 
        var_43 = (-(1044626337U));
        var_44 = ((/* implicit */unsigned char) (((-(var_17))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_13])) ? (((/* implicit */unsigned int) var_4)) : (2803673759U))))));
    }
}
