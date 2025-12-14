/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216771
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
    for (int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36020)) >> (((((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) arr_0 [i_0] [14])) : (max((((/* implicit */int) (short)-28781)), (arr_2 [i_1]))))) - (96)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)36020)) >> (((((((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) arr_0 [i_0] [14])) : (max((((/* implicit */int) (short)-28781)), (arr_2 [i_1]))))) - (96))) - (74))))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (signed char)71);
                                var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0 - 3] [i_0 - 4] [i_1] [i_2] [i_2 + 2]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_5 = 1; i_5 < 24; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_18 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5 - 1] [i_0 + 3] [i_0])) && (((/* implicit */_Bool) arr_3 [(short)14] [i_0 - 2] [i_0]))))) * (((/* implicit */int) ((arr_3 [i_0 - 1] [i_0 + 3] [i_0]) != (arr_3 [i_0] [i_0 + 1] [i_0]))))));
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [(unsigned short)15] [i_0] [i_0] [i_0 - 1] [i_0]), (arr_12 [i_0 - 2] [16LL] [10] [i_0 - 2] [i_0 + 2])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)112)), ((~(((/* implicit */int) arr_10 [i_0] [i_0]))))))) : (var_14)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_18 = ((int) (~(((/* implicit */int) arr_11 [i_1] [i_7]))));
                            arr_24 [i_1] [i_0] [i_7] = ((/* implicit */signed char) arr_21 [i_8] [i_5] [i_1]);
                            arr_25 [i_0] = ((/* implicit */unsigned char) ((_Bool) arr_12 [13] [(short)0] [i_5 - 1] [(unsigned short)23] [i_5]));
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 10930261812503465581ULL))));
                        }
                        arr_26 [i_0] [i_0] [21] [(unsigned char)4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-72)) ? (arr_9 [i_0 - 2] [11] [i_0] [i_0] [(unsigned char)4]) : (19521598U))), (((/* implicit */unsigned int) ((signed char) (signed char)-71)))))) && (((/* implicit */_Bool) (-(arr_2 [i_5 - 1]))))));
                        var_20 = ((/* implicit */unsigned char) max(((signed char)-72), (((/* implicit */signed char) max((arr_4 [i_0 - 1] [i_0]), (arr_4 [i_0 - 2] [i_0]))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 2] [0] [i_5] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : ((((_Bool)1) ? (0U) : (4193792U)))))) ? ((~(max((var_3), (((/* implicit */int) (unsigned char)140)))))) : (((/* implicit */int) (_Bool)0))));
                        var_22 = ((/* implicit */long long int) (((~(max((((/* implicit */unsigned int) (_Bool)1)), (arr_16 [i_1] [i_5] [i_9]))))) / (((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned char)22), (((/* implicit */unsigned char) (signed char)127))))))))));
                        arr_29 [i_0] [i_1] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_16 [22] [i_1] [21])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9] [i_5 + 1]))) : (7079567118047747046LL))))) ? (((((/* implicit */_Bool) arr_16 [i_0 + 3] [i_1] [i_9])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0 - 4] [(short)24] [i_0] [i_5 - 1] [i_5]))))))));
                        var_23 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((~(max((arr_20 [i_0] [i_0 + 3] [i_0 + 2] [(signed char)10] [(short)2]), (var_6))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 1080036447U))))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_24 = (~((~(arr_20 [i_5 + 1] [24LL] [i_5 + 1] [i_10] [i_10]))));
                        arr_32 [i_0] [i_1] [i_1] [i_1] [2] = ((/* implicit */int) ((((630030156) >= (((/* implicit */int) (_Bool)1)))) ? (max((((((/* implicit */_Bool) 281474976710655ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29655))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_1] [i_5 - 1] [(unsigned char)8] [i_10]))) & (arr_9 [11] [i_1] [i_1] [i_1] [i_1]))))) : (var_0)));
                    }
                }
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_17 [i_1] [i_0] [15ULL] [22U] [i_0] [i_0 - 4])), (arr_2 [i_0 - 3])))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [22])) : (var_3)));
            }
        } 
    } 
    var_26 = ((/* implicit */int) 2457399575U);
    var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (short)21013)) ? (((/* implicit */unsigned int) -772132045)) : (1910862425U)));
    var_28 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) 589010443))));
    /* LoopNest 3 */
    for (signed char i_11 = 3; i_11 < 19; i_11 += 3) 
    {
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) (_Bool)1);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4275445678U)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_31 &= ((/* implicit */unsigned long long int) arr_8 [i_11 + 1] [i_11 + 1] [i_11 + 1]);
                    }
                    arr_44 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [19] [9U] [i_11 - 2] [i_11]))))) ? (max(((-(((/* implicit */int) arr_23 [i_11] [i_12] [i_12] [i_13] [(signed char)15] [i_13])))), (((/* implicit */int) arr_1 [i_12])))) : ((+(((/* implicit */int) arr_35 [i_13]))))));
                }
            } 
        } 
    } 
}
