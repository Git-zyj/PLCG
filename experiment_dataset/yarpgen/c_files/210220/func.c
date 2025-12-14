/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210220
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
    var_10 = ((/* implicit */int) var_5);
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) var_0);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [16] [10] [i_0] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) arr_1 [i_0 + 3])))));
            var_12 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)249))))));
            var_13 = ((/* implicit */unsigned char) (-(var_7)));
        }
        arr_5 [i_0 - 4] = ((/* implicit */long long int) ((max((arr_2 [i_0 + 4] [i_0 - 1]), (((((/* implicit */int) var_8)) / (var_2))))) <= (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 - 3]))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 3] [i_0 + 4]), (((/* implicit */int) arr_0 [i_0 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0 + 4])), ((unsigned char)7))))) : (((((/* implicit */_Bool) (unsigned char)249)) ? (439383125960367454ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_0 - 2]))))));
        var_14 *= ((/* implicit */signed char) (_Bool)1);
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_7 [i_2]))));
        var_16 = ((/* implicit */_Bool) min((var_16), (var_1)));
        var_17 *= ((/* implicit */unsigned char) ((_Bool) ((min((var_7), (((/* implicit */int) (unsigned char)7)))) | ((~(0))))));
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */int) arr_3 [9] [4LL] [i_3]);
        var_18 = ((/* implicit */_Bool) 2741187392U);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_19 [i_6] = ((int) var_8);
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_4] [19]))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */unsigned int) (-(var_0)))) * (arr_8 [i_5]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_22 [i_6] [i_7] = ((/* implicit */signed char) arr_8 [i_4]);
                        arr_23 [i_6] [i_5] [i_6] [i_7] [5U] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) + (arr_8 [i_5])));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */int) arr_13 [i_4] [i_7])) : (((/* implicit */int) (unsigned char)6))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                        var_22 = ((/* implicit */unsigned int) (-(arr_21 [i_4] [i_5] [i_6] [i_7] [i_6])));
                        var_23 = ((arr_7 [i_6]) > (-879542193));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)255))))));
                        arr_26 [i_4] [i_6] [i_8] = ((/* implicit */signed char) (-(arr_8 [(_Bool)1])));
                        var_25 -= ((/* implicit */short) ((((/* implicit */int) ((6073864290306074602ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) << (((((int) (signed char)-24)) + (27)))));
                        var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_1))))) && (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_4))))));
                    }
                    for (int i_9 = 1; i_9 < 18; i_9 += 4) 
                    {
                        arr_29 [i_4] [i_5] [19LL] [i_6] = ((/* implicit */long long int) arr_13 [19] [i_6]);
                        var_27 = ((/* implicit */_Bool) arr_18 [i_6]);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 17; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                {
                    arr_37 [(signed char)10] [i_10] [2ULL] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                    var_28 = var_1;
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (short i_13 = 2; i_13 < 19; i_13 += 1) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) arr_20 [i_10 + 3] [i_12] [i_13])) ? (((/* implicit */int) ((8864734637773297185LL) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : ((-(((/* implicit */int) (_Bool)1)))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_7 [i_4]))));
                                var_31 = ((/* implicit */int) ((((/* implicit */int) arr_15 [i_13 - 2])) > (((/* implicit */int) var_9))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        for (long long int i_15 = 3; i_15 < 17; i_15 += 4) 
                        {
                            {
                                arr_50 [12] [i_14] [i_11] [i_10] [i_11] [i_4] [14] &= ((/* implicit */signed char) arr_39 [7LL] [i_11] [3LL] [i_15]);
                                var_32 = ((/* implicit */int) arr_45 [(_Bool)0] [i_11] [i_15]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */_Bool) ((long long int) arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]));
    }
}
