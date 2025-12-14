/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26121
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) 1052685243)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), ((unsigned char)127))))))), (((/* implicit */unsigned long long int) var_5)))))));
        arr_3 [i_0] &= ((/* implicit */int) var_1);
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 7360572117173309654ULL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_6)))))), ((~(((/* implicit */int) arr_1 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_12 |= ((/* implicit */unsigned int) arr_6 [i_1 - 1]);
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) (_Bool)0))))) ? (((unsigned int) arr_8 [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3])))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_14 [i_2] = ((/* implicit */unsigned long long int) max(((+(arr_11 [i_2]))), (((/* implicit */unsigned int) ((unsigned char) arr_10 [i_2])))));
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((arr_6 [i_2]), (((/* implicit */unsigned char) (_Bool)1)))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        arr_19 [i_3] = ((/* implicit */unsigned long long int) 209619142);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(var_8))), (((/* implicit */int) arr_17 [i_5 + 1] [i_7 + 1]))))) ? (((/* implicit */unsigned long long int) arr_24 [i_4] [i_4] [i_4] [i_4])) : ((~(var_9))))))));
                                var_15 |= ((/* implicit */int) arr_6 [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 7; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                                arr_37 [i_3] [i_3] [i_3] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (unsigned char)155)), ((unsigned short)31955)));
                            }
                        } 
                    } 
                    arr_38 [i_3] [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        arr_41 [i_10] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) arr_8 [i_10])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_42 [i_11] [0] [i_10]) ? (((/* implicit */int) arr_42 [i_10] [(unsigned char)0] [i_11])) : (((/* implicit */int) arr_42 [i_10] [(unsigned short)6] [i_11]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)31956)) : (((/* implicit */int) arr_42 [i_11] [4ULL] [i_10]))))) : (((arr_42 [i_10] [(unsigned short)2] [i_11]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_10] [(signed char)2] [i_11])))))));
            var_18 = ((/* implicit */_Bool) var_3);
            arr_45 [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(var_4)));
        }
        arr_46 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) arr_7 [i_10] [i_10])))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_8 [i_10])))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1595004523))))))) : (-864963850)));
    }
    for (unsigned char i_12 = 3; i_12 < 8; i_12 += 2) 
    {
        var_19 = ((/* implicit */short) arr_28 [i_12] [i_12] [6LL] [i_12] [i_12] [i_12]);
        var_20 = ((/* implicit */unsigned char) ((arr_34 [i_12] [i_12] [i_12] [i_12] [i_12]) == (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_18 [i_12 + 2])))))));
        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_2)), (arr_30 [i_12] [i_12] [i_12])))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_42 [i_12] [(_Bool)0] [i_12])))))) : (min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_8))))));
    }
    var_22 = ((/* implicit */int) (short)-1);
}
