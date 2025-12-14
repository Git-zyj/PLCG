/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197269
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_2] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [i_0] [(unsigned short)5] [22ULL]) : (arr_4 [i_0] [i_1] [i_2]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1] [i_0 + 1]))))))) < (((unsigned int) ((((/* implicit */_Bool) -1298865237)) ? (var_9) : (((/* implicit */unsigned long long int) var_8))))));
                        var_15 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_2]))))), ((-(((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_1])) : (12343498790364774997ULL)))))));
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)6)), (arr_4 [i_1] [i_2] [i_3])))) ? (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)6))))))) : ((((-(11468367369767773702ULL))) * (((/* implicit */unsigned long long int) 8545057U))))));
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_4 [i_3 + 1] [i_3 + 3] [i_3 + 3]))))) ? (arr_4 [15LL] [i_3 + 1] [i_3 - 1]) : (max((arr_4 [11ULL] [i_3 + 3] [i_3 + 1]), (arr_4 [i_3] [i_3 + 1] [i_3 + 1])))));
                    }
                    for (signed char i_4 = 3; i_4 < 22; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_10 [(_Bool)1] [(_Bool)1] [i_0] [i_4 - 3])) : (arr_13 [i_0] [i_0 + 1] [i_2] [i_0])))));
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) > ((+(((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_19 ^= ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
                            var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_4 - 2]))));
                        }
                        for (short i_6 = 2; i_6 < 22; i_6 += 1) 
                        {
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_14 [i_0] [i_1] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_4]) : (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) (signed char)113))))))) && (((/* implicit */_Bool) var_9)));
                            var_22 = ((/* implicit */long long int) arr_16 [i_4]);
                            arr_22 [i_0] [i_0] [i_0] [i_2] [i_2] [i_4] [(unsigned short)13] = ((/* implicit */_Bool) ((unsigned int) 1356383914U));
                            arr_23 [i_0] [i_1] [i_2] [i_1] [i_6] [i_6] = ((/* implicit */_Bool) min((arr_6 [i_4 - 3] [i_0]), (((/* implicit */unsigned char) ((signed char) arr_19 [i_1] [i_4] [i_2] [i_1] [i_0])))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_25 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))));
                        var_24 = var_0;
                        var_25 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((8545080U) << (((((/* implicit */int) (unsigned short)28413)) - (28405))))))));
                        /* LoopSeq 4 */
                        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            arr_30 [(signed char)15] [i_0] [i_2] [i_7] [(signed char)6] = ((long long int) arr_27 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_26 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1] [i_7] [i_8]))))) ? (((1847100375) + (((/* implicit */int) (unsigned short)61608)))) : (((/* implicit */int) arr_0 [i_0 - 1])));
                            var_27 = ((/* implicit */unsigned short) (+(arr_26 [i_0] [i_0 - 1])));
                            var_28 = ((/* implicit */unsigned long long int) (!(var_6)));
                            var_29 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -661981571)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (short)3968))))));
                        }
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */_Bool) (-((+(132120576U)))));
                            var_31 = ((/* implicit */int) ((arr_5 [i_0]) + (arr_5 [i_0])));
                            var_32 = (+(((/* implicit */int) arr_2 [i_0 + 1])));
                        }
                        for (unsigned int i_10 = 2; i_10 < 22; i_10 += 2) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (arr_27 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0]) : ((+(((/* implicit */int) var_14)))))))));
                            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) var_13))));
                        }
                        for (unsigned int i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
                        {
                            arr_42 [i_0] [i_0] [11LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(unsigned short)18] [i_0 + 1]))) : (arr_4 [i_0 - 1] [(short)5] [i_2]))))));
                            arr_43 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_11 + 1] [i_2] [i_2]))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
                    {
                        arr_46 [i_0] [17] [i_0] [(signed char)7] [i_12] [i_12] = ((/* implicit */unsigned short) (((((-(((((/* implicit */int) var_14)) & (((/* implicit */int) var_14)))))) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (113)))));
                        arr_47 [i_0] = ((/* implicit */short) arr_26 [i_0] [i_1]);
                        arr_48 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_2] [16LL]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_2] [i_2] [i_0] [i_1])) ? (arr_14 [i_0] [i_0] [i_2] [i_0]) : (1356383914U)))))));
                    }
                    for (long long int i_13 = 0; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        var_36 = ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) ((((arr_25 [i_1] [i_1] [i_1] [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_13] [i_13] [i_13])) : (((/* implicit */int) var_6)))) - (((/* implicit */int) arr_17 [i_0 + 1] [i_2] [i_2] [i_13] [i_0 + 1] [i_0 - 1]))))));
                        arr_52 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (6880932519928570504LL)));
                        arr_53 [i_0] [i_0] [i_2] [i_2] [i_2] [i_13] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((((_Bool)1) ? (1838484140309044761LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))))) * (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])))))), ((~((~(var_11)))))));
                    }
                    var_37 = (!(((/* implicit */_Bool) max((arr_26 [i_0] [i_0 + 1]), (((/* implicit */unsigned int) arr_7 [i_0] [13] [i_2]))))));
                    var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_2] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_1] [i_2] [i_0 - 1] [i_0] [15ULL])) || (((/* implicit */_Bool) ((signed char) arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2])))))) : (((((((/* implicit */_Bool) (unsigned char)76)) || ((_Bool)0))) ? (((/* implicit */int) (short)10394)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_1] [11ULL])) || (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_2] [10] [i_2])))))))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) / (max((10493853468676431492ULL), (((/* implicit */unsigned long long int) var_12))))))));
    var_40 = ((/* implicit */int) var_11);
}
