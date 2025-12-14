/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33145
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
    var_19 -= var_4;
    var_20 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49994))) + (var_17))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [8])) - (((/* implicit */int) var_16))))))) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_22 ^= ((/* implicit */unsigned long long int) (+(4075837887803815859LL)));
            arr_7 [i_1] [i_0] = (+(((/* implicit */int) ((short) -4075837887803815859LL))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_23 -= ((/* implicit */short) (unsigned char)102);
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            arr_17 [(unsigned char)4] [i_0] [i_0 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_11 [i_0 + 1] [i_5])));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) 10601426840657703115ULL))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) -1144862661)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15542))) : (4075837887803815834LL)))));
                var_26 = ((/* implicit */long long int) (+((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61899))) : (7845317233051848500ULL)))));
            }
            for (int i_6 = 0; i_6 < 20; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((long long int) arr_25 [i_2] [i_0 - 1] [i_2]));
                            var_28 = ((/* implicit */unsigned char) var_1);
                        }
                    } 
                } 
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (~(-1144862661)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0 + 2]))));
                /* LoopSeq 4 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((_Bool) arr_22 [i_9 - 1] [i_2])) ? (((/* implicit */int) arr_19 [i_9 - 1] [i_0 - 2] [i_0 + 2])) : (((/* implicit */int) arr_26 [i_0 + 1] [i_0 + 2] [i_0])))))));
                    var_31 = ((/* implicit */unsigned int) ((-828782871) + (-1144862661)));
                }
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_11 = 2; i_11 < 17; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) arr_24 [i_2] [i_2] [i_6] [i_2] [i_11]);
                        var_33 ^= ((/* implicit */signed char) ((arr_14 [i_2] [i_6] [i_2] [i_0 + 2]) == (arr_14 [i_11 + 3] [i_6] [i_2] [i_0])));
                    }
                    for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        arr_35 [i_10] [i_10] [i_10] [i_10] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)6667))));
                        arr_36 [i_0] [i_2] = ((/* implicit */unsigned int) arr_20 [(signed char)17] [i_10] [i_0 - 2] [i_0 + 2]);
                        arr_37 [i_2] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (short)18129)) ^ (arr_25 [i_2] [i_6] [i_6]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */int) var_4);
                        var_35 = ((/* implicit */unsigned char) ((int) arr_39 [i_0] [i_2] [i_13] [i_0 + 1]));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(var_15))))));
                        arr_40 [i_2] [i_0] [i_13] = ((/* implicit */int) ((long long int) 1392303339U));
                    }
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_0 - 1])) * (((/* implicit */int) arr_23 [i_0 - 2]))));
                        arr_43 [i_0] [(signed char)12] [(signed char)12] [i_10] [10U] [i_2] = ((/* implicit */unsigned char) var_5);
                        var_38 += ((/* implicit */short) (unsigned short)61897);
                    }
                    for (int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        arr_46 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)6660))));
                        var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_6] [i_6])) : (((/* implicit */int) arr_27 [i_15]))))) ? (arr_15 [i_0] [i_2] [i_6] [(unsigned short)8] [i_15]) : (arr_30 [i_10] [i_0 + 2] [i_2])));
                    }
                }
                for (long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                {
                    var_40 -= ((((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_0] [i_0] [15ULL]))))) ? (((/* implicit */long long int) arr_25 [i_6] [i_2] [i_0 + 1])) : (arr_38 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [(unsigned short)15]));
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_17) : (((/* implicit */long long int) -1983715072))));
                    var_42 = ((/* implicit */unsigned long long int) ((arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1]) > (arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 2])));
                    arr_49 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_6])) >> (((/* implicit */int) (short)0)))) == (((/* implicit */int) (unsigned short)26091))));
                }
                for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                {
                    var_43 = (-(-1439660885));
                    var_44 = ((/* implicit */unsigned int) arr_22 [i_6] [i_2]);
                }
                arr_52 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((int) 4294967295U)) : (((/* implicit */int) var_14))));
            }
            arr_53 [i_2] [i_2] = ((/* implicit */unsigned char) (~(-1439660881)));
        }
    }
    var_45 = ((/* implicit */short) var_17);
}
