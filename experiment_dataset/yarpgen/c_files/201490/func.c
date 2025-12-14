/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201490
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (8) : (2147483647)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) var_11)) : (268435328)))) : ((~(2848882431521224054ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435328)) ? (((/* implicit */int) (short)-1811)) : (((/* implicit */int) (short)31152))))) ? (((var_1) ? (17779459251691823927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29315))))) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_16 ^= ((/* implicit */_Bool) (short)-29311);
            arr_9 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) var_12)) ? (2147483647) : ((-2147483647 - 1))))))) ? (((int) arr_5 [i_2 - 1])) : (((/* implicit */int) ((short) 2848882431521224048ULL)))));
        }
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20450)) ? (-8302777153405825480LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) ((signed char) arr_6 [i_1] [i_1] [i_1]))))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            arr_16 [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_4])) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) arr_14 [i_3] [i_4])))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_12 [i_4])))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((int) var_9)) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_15 [i_3 + 1] [i_3] [i_3]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)8647))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            arr_20 [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 1])))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                arr_23 [i_5] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2624)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (3886314756U)))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    var_19 = ((arr_15 [i_3 + 1] [i_3 + 1] [i_5]) != (((/* implicit */int) (unsigned char)63)));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_3] [i_3] [i_6] [i_8] = ((/* implicit */_Bool) ((long long int) arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]));
                        arr_30 [i_3 + 1] [i_3 + 1] [i_6] [i_6] [i_7] [i_8] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_27 [i_3 + 1])));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (1865743053)));
                        arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_3 + 1]))));
                        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_3]))));
                        arr_34 [i_3] [i_3] [i_6] [i_7] [i_9] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-94)) ? (2147483647) : (((/* implicit */int) (unsigned char)39))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_3 + 1])) ? (arr_12 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    }
                }
                for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(2147483627))))));
                    var_24 = ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_10])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)23117)));
                    arr_37 [i_3] [i_3] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((/* implicit */long long int) 8)) : (arr_22 [i_3 + 1] [i_3])));
                    var_25 = ((/* implicit */short) (+(arr_15 [i_3 + 1] [i_5] [i_6])));
                    var_26 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                }
            }
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                arr_40 [i_3] [i_5] [i_5] [i_11] = ((/* implicit */_Bool) arr_21 [i_5]);
                var_27 = (-2147483647 - 1);
            }
            for (int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                var_28 = ((/* implicit */short) (_Bool)1);
                arr_44 [i_3] [i_5] [i_5] [i_3] = ((/* implicit */long long int) var_0);
            }
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                arr_48 [i_3] [i_5] [i_5] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_3 + 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)18628)) : (((/* implicit */int) (_Bool)0)))) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((var_13) & (var_7)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1944108189741987576LL))))))));
                var_29 |= ((/* implicit */long long int) 4257753553U);
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((_Bool) arr_45 [i_3] [i_5] [i_3 + 1])))));
            }
            arr_49 [i_3] [i_5] = ((/* implicit */unsigned long long int) (short)32750);
        }
        arr_50 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) (short)-4)) : (((/* implicit */int) arr_13 [i_3 + 1]))))) ? (((/* implicit */int) ((_Bool) 2147483647))) : (((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (var_7) : (((/* implicit */int) var_10))))));
        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (signed char)-87)) : (-1137336942))))));
        arr_51 [i_3] [i_3 + 1] = ((/* implicit */unsigned char) ((unsigned short) (-(2718294301U))));
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_3] [i_3] [i_3 + 1]))) : (arr_39 [i_3] [i_3])))) ? (((var_1) ? (arr_39 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_3 + 1] [i_3] [i_3 + 1]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_45 [i_3] [i_3] [i_3 + 1])))))));
    }
    var_33 = ((/* implicit */unsigned int) var_13);
}
