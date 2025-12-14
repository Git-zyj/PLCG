/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215774
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_3 + 2] [i_2] [i_0]))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2] [i_0]))) | (var_13)))));
                                arr_15 [i_0] = (+(((/* implicit */int) arr_1 [i_0])));
                                var_21 = ((/* implicit */int) ((long long int) ((_Bool) arr_12 [i_4 - 3] [i_4] [i_0] [i_3 + 1] [i_3])));
                                var_22 = ((/* implicit */unsigned long long int) ((1843817369) + (-1045842526)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_5 = 4; i_5 < 20; i_5 += 1) 
                {
                    var_23 = ((/* implicit */int) min((var_23), ((-(((/* implicit */int) arr_9 [i_5] [i_5] [i_5 - 3] [i_1 - 2] [i_0]))))));
                    var_24 &= ((/* implicit */signed char) var_3);
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_6)) : (-1)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(unsigned char)20] [i_1 + 2] [i_5] [i_0] [i_1 + 1])))));
                    arr_19 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [(unsigned short)4] [(unsigned short)4] [i_5 - 3] [i_1 - 1] [i_1]))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_6 = 3; i_6 < 19; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_26 -= ((/* implicit */_Bool) ((var_12) ? (arr_24 [i_6 + 1] [i_6 + 1] [i_1 + 2] [i_1 + 2]) : (arr_24 [i_7] [i_6 + 1] [(short)19] [i_1 + 2])));
                        var_27 = ((/* implicit */signed char) (+(-1)));
                        arr_26 [i_7] [i_0] [5] [i_6 + 2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-1LL)));
                    }
                    arr_27 [i_0] [i_1 - 2] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (int i_9 = 3; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) var_13);
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9 + 2] [i_6 + 1] [i_1 + 2] [i_1] [i_1 + 2]))) : (arr_31 [i_6 - 2] [i_6] [i_1 - 2] [i_1 - 2] [i_0])));
                                var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)18614))));
                                var_31 = ((/* implicit */long long int) var_16);
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    var_32 ^= ((/* implicit */int) arr_1 [i_0]);
                    arr_36 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_12 [i_10] [i_10] [i_0] [i_1 + 1] [i_0]);
                    arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_14 [i_0] [i_0] [i_10] [i_1 - 2] [i_10] [i_0])))) * (((((/* implicit */_Bool) arr_14 [(unsigned char)11] [i_0] [i_10] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_28 [i_10] [5LL] [i_0] [i_0])) : (((/* implicit */int) arr_14 [(signed char)12] [i_0] [i_10 - 1] [i_1] [i_1 - 1] [i_10 + 1]))))));
                }
                for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    var_33 ^= ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41789))) - (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-95))) : (7849309922620692365LL)))))));
                    arr_40 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_6), (arr_9 [i_11] [(unsigned char)9] [i_11] [i_1 + 1] [i_11])))) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [(unsigned char)12] [i_1] [i_1])), (arr_30 [i_11] [i_0] [i_1 - 2] [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (short)8772)) || (((/* implicit */_Bool) var_18)))) ? (((/* implicit */unsigned long long int) arr_6 [i_1 - 1] [i_1 - 2] [i_11])) : ((~(var_8))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_0]), (arr_7 [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_0])))))));
                                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) min((((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned short) (short)-8772)))))));
                                arr_48 [2U] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((arr_46 [i_0] [20]) ? (((/* implicit */int) arr_17 [12])) : (((/* implicit */int) arr_47 [i_13] [i_12] [i_12] [i_1 - 2] [i_11] [i_1 - 2] [i_0]))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) 13)) : (6906661270751984152LL))) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_11] [(unsigned char)10])) ? (-3108546006412970979LL) : (((/* implicit */long long int) -689626873)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_39 [(unsigned short)20] [i_11] [i_1 - 1] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))))));
                                var_36 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_37 = ((/* implicit */long long int) var_15);
    var_38 = ((/* implicit */unsigned int) var_3);
}
