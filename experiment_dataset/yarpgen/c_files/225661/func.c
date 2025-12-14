/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225661
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (unsigned short)34342)), (2628854605466181028ULL))) >= (((/* implicit */unsigned long long int) var_10))));
                            var_19 ^= ((/* implicit */int) var_13);
                        }
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_14 [i_0 + 1] [i_1] [i_2] [i_1] [i_5] [i_2] [i_0] = var_17;
                            arr_15 [i_0] [i_1] [i_2 + 2] [i_3] [i_0] = arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_1];
                            var_20 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_17))))))));
                        }
                        var_21 = ((/* implicit */signed char) (~(var_1)));
                        var_22 = ((/* implicit */unsigned short) (+(1863605002027686946ULL)));
                    }
                    var_23 = ((((/* implicit */_Bool) (unsigned short)35904)) ? (arr_5 [0U] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (int i_8 = 1; i_8 < 24; i_8 += 4) 
            {
                {
                    var_24 = arr_20 [i_6];
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) 
                        {
                            arr_30 [i_6] [i_10] = ((/* implicit */unsigned long long int) arr_28 [i_6] [i_6] [i_7] [i_8] [i_8 + 1] [i_9] [i_10]);
                            var_25 = ((/* implicit */unsigned short) (-2147483647 - 1));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            arr_33 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) arr_32 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1]));
                            var_26 |= ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) var_2)))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            var_27 = ((/* implicit */int) arr_26 [19] [i_6] [i_6] [i_6]);
                            var_28 = ((/* implicit */signed char) (((~(var_1))) | (var_8)));
                        }
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_9] [22ULL] [3] [i_7] [i_6] [14U] [i_6]))))) ? (arr_23 [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1]) : (((((/* implicit */_Bool) 1660476616U)) ? (arr_23 [(unsigned short)9] [i_6] [i_8 - 1] [i_9]) : (arr_18 [i_6])))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) var_10);
                            var_31 = ((/* implicit */signed char) arr_38 [i_6] [i_6] [i_8]);
                            var_32 = ((/* implicit */unsigned long long int) ((arr_38 [i_14] [i_7] [i_8 + 1]) / (((((/* implicit */_Bool) arr_17 [i_6] [(unsigned short)13])) ? (((/* implicit */int) arr_17 [i_6] [i_6])) : (arr_38 [i_6] [i_8] [i_8 + 1])))));
                            arr_43 [i_6] [i_7] [i_8] [15ULL] [i_14] = ((/* implicit */unsigned int) min((arr_34 [i_6] [i_7]), (((/* implicit */int) (unsigned short)22795))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_14] [i_6] [i_6] [i_6])) ? ((~(((/* implicit */int) ((unsigned short) arr_36 [i_6] [11ULL] [i_7] [i_8] [i_8] [i_13] [11ULL]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_6 - 1])))))));
                        }
                        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_40 [i_6 - 1]))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            arr_46 [i_6] [10ULL] [10U] = ((unsigned long long int) ((((/* implicit */_Bool) min((var_6), (arr_45 [i_6])))) ? (var_12) : (((((/* implicit */_Bool) arr_36 [11ULL] [i_6 + 1] [i_6] [i_6] [i_6] [i_15] [i_15])) ? (arr_44 [(signed char)14] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6])))))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned long long int) var_17);
                        var_36 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_6] [i_6] [i_15] [i_6] [i_17]))))) << (((var_13) - (16239944409038316149ULL))))));
                    }
                } 
            } 
            arr_54 [i_6] [i_6] = ((/* implicit */unsigned long long int) (+((~((+(((/* implicit */int) arr_16 [i_6] [i_6]))))))));
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (15807541344762132076ULL)));
            var_38 = ((/* implicit */int) (-((~(min((((/* implicit */unsigned long long int) arr_34 [i_15] [(signed char)3])), (var_0)))))));
        }
        arr_55 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12707843566604072516ULL)) ? (((/* implicit */int) (unsigned short)24869)) : (((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned long long int) arr_51 [i_6 - 1] [i_6 - 1] [22] [i_6 - 1] [i_6] [i_6])), (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) && (((/* implicit */_Bool) var_6))));
    }
}
