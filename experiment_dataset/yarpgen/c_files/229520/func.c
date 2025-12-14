/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229520
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
    var_18 = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))) << (((((/* implicit */int) var_7)) - (49))))));
    var_19 = ((/* implicit */long long int) 923177843U);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */short) (-(((int) arr_1 [i_1]))));
                    arr_10 [i_2] [i_1] [18U] [18U] = ((/* implicit */signed char) ((((arr_1 [i_2 - 1]) < (arr_1 [i_2 + 1]))) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (signed char)64)) - (57))))) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_4 [i_2] [i_0])) / (min((((/* implicit */int) arr_7 [i_0] [(unsigned char)4] [i_2 + 1])), (var_12)))))));
                    arr_11 [i_1] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) && (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_3 [1LL])))))));
                    arr_12 [i_0] [i_0] [i_2 + 1] [i_2] = ((/* implicit */int) (signed char)7);
                }
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_15 [i_0] |= (~((-(((var_11) / (((/* implicit */int) (unsigned short)18683)))))));
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_0))));
                                arr_20 [i_0] [i_1] [(unsigned char)17] [i_4] [i_5] [(unsigned char)17] &= ((/* implicit */long long int) var_10);
                                var_21 = ((/* implicit */unsigned long long int) min((((arr_19 [i_0] [(unsigned char)20] [i_0] [i_4] [(unsigned char)0] [(unsigned char)20]) << (((/* implicit */int) arr_14 [i_0])))), (((/* implicit */unsigned int) max((((var_12) + (var_12))), (((/* implicit */int) (short)3)))))));
                                arr_21 [(signed char)4] [(signed char)4] [i_3] [(signed char)4] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((arr_1 [14LL]) + (((/* implicit */int) arr_14 [i_4 + 2])))) : (min((((/* implicit */int) (unsigned short)46871)), (var_12))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) ((_Bool) max((var_5), (((/* implicit */long long int) arr_1 [i_1])))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            arr_26 [i_0] = ((/* implicit */signed char) var_13);
                            var_23 *= ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_0 [i_0] [i_1]))))));
                            arr_27 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46867)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)11] [i_1] [3U] [i_1] [i_1] [i_1]))) : (arr_5 [(_Bool)1] [i_1])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_3] [i_6] [i_7]))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((unsigned long long int) (signed char)0)) - (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_3])))))) ? (((/* implicit */int) arr_17 [i_6] [i_3] [i_3] [i_1] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_8))))) != ((+(((/* implicit */int) arr_17 [i_6] [i_3] [(short)1] [17LL] [(short)1] [i_0])))))))));
                        arr_28 [i_6] [i_6] [i_3] [i_1] [1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) ? (((/* implicit */long long int) var_9)) : (arr_5 [i_0] [i_1])))) ? (min((arr_5 [i_6] [i_0]), (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((arr_5 [i_0] [i_3]) | (arr_5 [i_1] [i_0])))));
                    }
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((min((((long long int) var_2)), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) % (arr_31 [i_0])))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_15)) : (var_5)))) ? ((~(-2290741456125349607LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18689)))))));
                        var_26 = ((/* implicit */unsigned short) arr_30 [(unsigned short)11] [i_0] [i_1] [i_0]);
                    }
                }
                for (unsigned char i_9 = 1; i_9 < 20; i_9 += 2) 
                {
                    arr_34 [(signed char)1] [i_1] [i_1] = arr_1 [i_9];
                    var_27 = ((/* implicit */unsigned short) ((unsigned long long int) var_6));
                    arr_35 [14U] [i_0] [i_0] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((-3397157915513995823LL), (((/* implicit */long long int) -2002895573))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_9 - 1] [3U] [i_9] [i_9]))))) : ((~((~(var_4)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (signed char)-101))));
                        arr_39 [(signed char)17] [(_Bool)1] [i_10] [(signed char)14] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))) - (2290741456125349607LL))), (((/* implicit */long long int) var_2))));
                        var_29 = ((/* implicit */_Bool) ((short) (~(arr_6 [i_10]))));
                    }
                    arr_40 [i_1] [i_9 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_3 [(signed char)4])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_32 [i_9 - 1] [i_9 - 1])))) : (min((((unsigned int) var_9)), (min((((/* implicit */unsigned int) var_3)), (arr_16 [i_9] [13LL] [i_1] [i_1] [i_1] [i_0])))))));
                }
                arr_41 [i_0] [i_1] [i_1] = arr_31 [i_0];
                arr_42 [i_0] [i_1] = (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [5LL] [i_1] [4LL] [5LL]))))) ? (((/* implicit */int) max((var_1), (((/* implicit */short) var_7))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-4)) >= (((/* implicit */int) arr_4 [i_0] [i_0]))))))));
                arr_43 [13ULL] = ((arr_31 [i_1]) != (((/* implicit */unsigned int) (+(min((((/* implicit */int) var_10)), (var_12)))))));
            }
        } 
    } 
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
