/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30113
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
    var_14 = ((/* implicit */int) var_13);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((var_6) & (((/* implicit */unsigned long long int) arr_8 [i_1])))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)16662), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 2290102163U)) < (arr_11 [i_0] [i_3] [i_0] [i_3] [i_0] [i_3] [i_1]))))))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [i_1])))) ? ((-(min((((/* implicit */unsigned int) var_2)), (var_7))))) : (((unsigned int) ((((/* implicit */_Bool) 2290102167U)) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) 1520278796707505463LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)36946);
                            var_17 *= ((/* implicit */short) ((unsigned int) ((unsigned int) var_2)));
                            arr_19 [i_6] [i_5] [i_1] [i_1] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_6 + 2] [i_1] [i_2])) ? (1520278796707505463LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6 - 1] [i_6 + 2]))))) + (((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_5)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_18 += ((/* implicit */unsigned short) max((((((1351848887383882275LL) << (((((/* implicit */int) arr_20 [i_5])) - (35007))))) << (((((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned short)25194))))) - (1))))), (((/* implicit */long long int) (short)28853))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_5 [i_2] [i_1]))));
                            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)20616))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1) / (((/* implicit */int) var_0)))) << (((((/* implicit */int) ((unsigned short) var_11))) - (15971)))))) ? (((var_12) >> (((((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) -75721224)))) - (3358080581U))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_5] [i_5])))))));
                        }
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_2] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((max((var_8), (((/* implicit */unsigned long long int) (unsigned short)36946)))) >> ((((~(((/* implicit */int) var_0)))) + (32118))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_0]))))))));
                            var_24 += ((/* implicit */long long int) ((max((((var_8) << (((/* implicit */int) var_5)))), (((/* implicit */unsigned long long int) (short)19661)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_8]))) <= (var_9))))))) ? (((min((arr_13 [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_20 [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_8 - 1] [i_8] [i_8]))))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((2290102163U) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_5])) && (((/* implicit */_Bool) var_9))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)14228))))) ? (((/* implicit */int) arr_6 [i_1] [i_2] [i_8])) : ((~(((/* implicit */int) var_3))))))));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (~(arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]))))));
                        arr_28 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_9));
                        /* LoopSeq 3 */
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) arr_21 [i_9] [i_0]);
                            arr_33 [i_0] [i_1] [i_2] [i_9] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((6796098429061227038LL) | (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ^ (var_9)));
                            arr_34 [i_0] [i_1] [i_2] [i_2] [i_10] &= ((/* implicit */unsigned int) 9037767339141900064ULL);
                        }
                        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 1940916884556146852LL);
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (-1940916884556146828LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                        }
                        for (long long int i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            arr_40 [i_0] [i_9] [i_2] [i_9] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_12 + 2] [i_12 + 2])) ? (((/* implicit */int) (short)29361)) : (((/* implicit */int) arr_4 [i_0] [i_9]))));
                            var_28 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                        }
                        var_29 ^= ((/* implicit */signed char) (~(var_8)));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))) * (var_12)))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (var_13))));
                }
            } 
        } 
    } 
}
