/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208173
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
    var_11 = ((/* implicit */signed char) var_2);
    var_12 *= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((var_1), (((/* implicit */unsigned long long int) var_0))))))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) var_5))));
        var_15 = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 503517059307132558ULL))));
        var_16 ^= ((/* implicit */short) var_9);
        arr_2 [i_0] |= ((/* implicit */unsigned char) ((unsigned int) 18446744073709551615ULL));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (10082720791356726677ULL))), (((/* implicit */unsigned long long int) ((long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-7505)))))))))));
                        var_18 -= max((((/* implicit */int) (unsigned char)254)), (2147483629));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_4))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                    {
                        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)124)) ? ((-9223372036854775807LL - 1LL)) : (-2688339661013619286LL)));
                        arr_19 [i_1] [i_1] [i_2] [i_3] [i_4] [i_6] &= ((unsigned short) arr_0 [i_2 + 2] [i_2 + 2]);
                        var_21 *= ((/* implicit */long long int) var_6);
                        var_22 = (unsigned short)65021;
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_12 [i_2 + 2]))));
                        arr_22 [i_1] [i_1] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned short) arr_20 [i_7] [i_3] [14ULL] [i_3 - 1])), (min((var_0), ((unsigned short)23877)))));
                    }
                    var_24 ^= ((/* implicit */int) (-(max((3586978391U), (471135160U)))));
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_25 &= ((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_1] [i_1])) ^ (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [4U] [i_2] [i_2 - 2])) : (((/* implicit */int) arr_20 [i_2] [i_2 + 2] [i_3] [i_2]))))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : ((-(4294967280U)))));
                        var_27 = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned short) 834069787U))) ? (var_4) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_18 [i_1] [i_2 + 1] [11] [(short)18] [i_1] [i_3] [i_3])), ((-2147483647 - 1))))))), (((/* implicit */unsigned long long int) ((-9) == (-535807347))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (arr_13 [i_1] [i_2] [i_3] [20ULL] [11ULL] [i_8] [4])))) : (((var_4) | (((/* implicit */unsigned long long int) arr_4 [i_1])))))))))));
                    }
                }
                for (int i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        var_29 |= ((/* implicit */unsigned short) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))) : (2231730874U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_5)))))));
                        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)1)))))))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((max((((/* implicit */int) (signed char)-106)), (1249430329))) | (((((/* implicit */int) arr_3 [i_2 - 2])) ^ (((/* implicit */int) var_0)))))))));
                        var_33 |= ((/* implicit */int) ((unsigned int) min(((unsigned short)24576), (((/* implicit */unsigned short) (_Bool)1)))));
                    }
                    for (unsigned int i_11 = 3; i_11 < 19; i_11 += 1) 
                    {
                        arr_32 [(unsigned short)8] [(unsigned short)8] [i_1] [i_9] [i_2] [15] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-24400)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-26916))) : (1699033196808888495LL))), (((/* implicit */long long int) ((int) var_4)))));
                        var_34 -= ((/* implicit */long long int) ((_Bool) (~(var_9))));
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) var_9))) <= (((/* implicit */int) var_5))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 2) 
                    {
                        var_36 ^= ((/* implicit */_Bool) (-(((unsigned int) arr_11 [i_3 - 1] [i_12] [i_12] [i_12] [i_12]))));
                        var_37 = ((/* implicit */unsigned long long int) ((unsigned short) ((int) (unsigned short)1217)));
                    }
                    var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-26933))));
                }
                for (int i_13 = 0; i_13 < 21; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        var_39 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_1]))) ? (((/* implicit */int) arr_35 [i_2 + 1])) : (((/* implicit */int) ((short) 4095)))))));
                        var_40 = ((/* implicit */int) var_8);
                        var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)58)) ? ((+(((((/* implicit */_Bool) (signed char)114)) ? (5059707435082982557LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46603))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_39 [i_2 + 2] [(unsigned short)16] [i_3] [i_3 - 1] [1ULL]) >= (((/* implicit */unsigned long long int) 764621693))))))));
                    }
                    for (int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        var_42 *= ((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) arr_20 [i_2] [i_2] [i_3 - 1] [i_3 - 1])), (var_10))));
                        var_43 -= ((/* implicit */unsigned int) ((long long int) ((_Bool) arr_4 [i_2 + 2])));
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)123)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (max(((unsigned short)64307), (((/* implicit */unsigned short) (signed char)-118))))))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_45 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121))) : (348001622U)));
                        var_46 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_45 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_10 [i_1] [i_3 - 1])))), (((unsigned long long int) (unsigned short)17764))));
                        var_47 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned long long int) ((3265155083227618910LL) < (((/* implicit */long long int) 716295623)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 2; i_17 < 18; i_17 += 4) 
                    {
                        arr_49 [i_1] [i_2] [i_3] [i_17 + 3] [i_17] [i_3] [i_13] = ((/* implicit */int) ((_Bool) (unsigned short)53726));
                        var_48 = ((/* implicit */_Bool) ((unsigned int) var_2));
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_1] [i_2 + 2] [i_3 - 1] [i_13] [i_13] [(short)1])) ? (arr_44 [i_1] [i_1] [i_2 - 2] [i_1] [i_13] [i_17 + 1]) : (((/* implicit */long long int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_50 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_17 - 2] [i_2 + 1] [i_2 + 2] [i_1] [i_3 - 1] [i_13])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    for (long long int i_18 = 1; i_18 < 19; i_18 += 1) 
                    {
                        var_51 -= ((/* implicit */short) ((int) 1790490809689264111ULL));
                        var_52 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(-9223372036854775807LL)))), (min(((((_Bool)1) ? (8125919697027967429ULL) : (((/* implicit */unsigned long long int) 8156496744816189397LL)))), (((var_6) | (arr_6 [i_2])))))));
                        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) min(((+(((/* implicit */int) (unsigned short)27554)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)135)), ((short)0)))))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_54 |= ((/* implicit */short) (-(((((/* implicit */int) (short)19979)) / (1720777707)))));
                        var_55 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_12 [i_2 - 2]))))));
                        var_56 = ((/* implicit */unsigned int) min((var_56), (((unsigned int) (short)-6096))));
                    }
                    var_57 = ((/* implicit */unsigned long long int) ((unsigned int) arr_45 [i_2] [i_2 + 1] [i_2 + 2] [i_3 - 1] [i_3 - 1]));
                    var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) arr_4 [i_1]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 4; i_20 < 20; i_20 += 3) 
                {
                    var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) arr_45 [i_1] [1U] [1U] [i_20] [(short)5]))));
                    var_60 = ((/* implicit */unsigned int) max((var_60), (max((((/* implicit */unsigned int) ((_Bool) arr_52 [i_2] [i_20]))), (min((arr_51 [i_2] [3LL] [i_2] [i_2 - 2] [i_2] [3LL] [i_2]), (((/* implicit */unsigned int) arr_5 [i_2] [i_20]))))))));
                    var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_37 [i_3 - 1] [i_20 - 4] [i_3 - 1] [i_3]))))) ? (((/* implicit */int) ((_Bool) arr_37 [i_3 - 1] [8LL] [i_3 - 1] [i_3]))) : (((/* implicit */int) arr_37 [i_20 + 1] [i_3] [i_3 - 1] [i_3])))))));
                }
            }
            var_62 = ((/* implicit */unsigned short) min((var_62), (var_0)));
            var_63 ^= ((/* implicit */_Bool) arr_36 [i_1] [i_1] [i_2] [(unsigned short)12]);
            /* LoopSeq 1 */
            for (int i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                var_64 = ((/* implicit */_Bool) 4294967295U);
                var_65 = ((/* implicit */long long int) arr_52 [i_21] [i_2]);
            }
        }
        var_66 -= (!(((/* implicit */_Bool) (signed char)114)));
        var_67 = ((/* implicit */unsigned int) 2100865832038527887LL);
    }
    var_68 = ((/* implicit */unsigned long long int) max((var_68), (((/* implicit */unsigned long long int) min((var_0), (var_7))))));
}
