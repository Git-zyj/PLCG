/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240795
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
    var_17 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_9 [i_2 + 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)2)) >= (((/* implicit */int) (unsigned short)42653))));
                        var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) -6)) ? (-6) : (((/* implicit */int) (short)1536))))));
                        var_19 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -6)) ^ (5028919311568055776ULL))) | (((/* implicit */unsigned long long int) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_3]))))))));
                        var_20 = arr_1 [3] [i_0];
                        arr_10 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-889490159)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)9331)))) : (max((((/* implicit */unsigned int) var_2)), (var_9))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_16)))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_11 [i_0]) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (517260629) : (((/* implicit */int) var_16)))))))) ? (((var_12) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)0)))), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))))))));
                        arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) & (min((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) == (var_15)))), (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) var_13))))))));
                        arr_15 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2 - 1] [i_4])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_2] [i_4])))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16)));
                    }
                    arr_16 [i_0] [i_1] [3] [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_1)), (5028919311568055773ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5028919311568055777ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_2 + 2] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2 + 3] [i_2 + 2] [i_0])))))));
                }
                arr_17 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) var_1))) ^ (min((((/* implicit */unsigned long long int) -6)), (13417824762141495842ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((15872), (((/* implicit */int) (short)24750))))))))) : (((arr_5 [i_0] [i_0] [i_1]) ? (((((/* implicit */_Bool) 14279868817150092621ULL)) ? (15729637924549244913ULL) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) 619152997))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                    arr_21 [i_0] [i_5] [i_0] [i_0] = ((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */int) arr_5 [i_0] [i_5] [i_1])))) + (((/* implicit */int) var_2)));
                    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_5]))));
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((5028919311568055761ULL) * (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60))))) : (((695193605) ^ (arr_18 [i_1] [i_1] [i_1] [i_1]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned char) ((arr_12 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) && (arr_12 [i_6] [i_6] [(_Bool)1] [i_0] [i_0] [i_0])));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_0))))))));
                }
                for (int i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_8] [i_0] [i_7] [i_8] = ((/* implicit */int) 13417824762141495842ULL);
                                var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_28 [i_0])) != (((/* implicit */int) max(((unsigned short)24954), (((/* implicit */unsigned short) var_0))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 805306368)) == (max((((unsigned long long int) 5028919311568055773ULL)), (((/* implicit */unsigned long long int) var_14))))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) ^ (var_14)))), (max((arr_2 [i_7]), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_1])) < (((/* implicit */int) arr_5 [18] [i_1] [i_7]))))))))));
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                        {
                            {
                                arr_40 [i_11] [i_11] [i_0] [i_0] [i_1] [i_0] = ((unsigned long long int) (short)-30949);
                                var_29 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) 1290600263)), (13417824762141495839ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_11])), (var_15)))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) 1564301976)) : (arr_27 [i_0] [5U] [i_10] [i_10]))))))));
                                arr_41 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (!(var_16))))) ? (min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_6)))) : (-1564301977)));
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) var_7))));
                                arr_42 [i_0] [i_0] [i_10] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_34 [i_0] [i_10])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_2 [i_0]))))))), (var_1)));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */int) (((~(arr_29 [i_0] [i_1] [i_10] [(short)22] [20] [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 4; i_14 < 23; i_14 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)9331))), (min((((/* implicit */unsigned long long int) -1290600272)), (13417824762141495841ULL)))));
                                arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_2 [i_0];
                                var_33 = ((int) (~(-1290600264)));
                                var_34 = ((/* implicit */short) 13417824762141495817ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) 15269707233074653548ULL)) || ((_Bool)0)));
                        var_36 = ((((/* implicit */int) ((((13417824762141495840ULL) / (18014397972611072ULL))) < (((/* implicit */unsigned long long int) var_3))))) + (((int) (+(var_15)))));
                    }
                }
            }
        } 
    } 
}
