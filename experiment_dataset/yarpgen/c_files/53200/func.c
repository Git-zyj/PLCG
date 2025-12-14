/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53200
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_9 [i_3] [i_1] [i_2] = (unsigned short)1007;
                        var_12 |= ((/* implicit */long long int) ((arr_7 [i_3 - 1] [i_3 - 1]) > (arr_7 [i_3 - 1] [i_3 - 1])));
                        var_13 = ((/* implicit */long long int) arr_8 [i_1] [i_1]);
                    }
                    arr_10 [16U] [i_2 + 2] [i_2 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) max((arr_6 [i_2] [i_2] [21U] [i_2]), (((/* implicit */unsigned short) arr_4 [i_2] [i_2 - 1])))))) ? (((/* implicit */int) ((short) (-(arr_7 [i_0] [i_2]))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0])))) | (((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */int) var_0))))))));
                    arr_11 [(unsigned short)17] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1188457712662582182LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) >= (arr_1 [i_0]))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_10)))) ? (((((/* implicit */_Bool) (short)-27335)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64526))) : (1698262322U))) : (max((var_3), (var_3))))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 3])) ? (((/* implicit */int) arr_4 [15U] [i_2 - 3])) : (((/* implicit */int) arr_4 [(unsigned char)7] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2 + 2]))) : (18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0]);
                        arr_16 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_14 [i_0] [i_1] [(unsigned short)2] [(unsigned short)2] [i_2] [i_2]))) / (((((/* implicit */_Bool) var_1)) ? (2998104318U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))))) & (((unsigned long long int) (-(var_9)))));
                        var_16 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) arr_7 [i_4] [i_2])) ? (((/* implicit */unsigned int) arr_7 [(unsigned char)5] [i_1])) : (2998104330U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [i_2]))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) < (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_9)))))))));
                        var_17 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [i_4 + 1]), (arr_0 [i_4 + 1])))), (((((/* implicit */_Bool) arr_0 [i_4 + 1])) ? (((/* implicit */int) arr_0 [i_4 + 1])) : (((/* implicit */int) arr_0 [i_4 + 2]))))));
                        arr_17 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_6);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 3] [i_5 - 3])))) && (((/* implicit */_Bool) arr_5 [i_2 + 2]))));
                        var_19 = ((/* implicit */unsigned short) (-(var_2)));
                        arr_21 [i_0] [i_1] [i_2 + 2] [i_5 - 3] [i_0] [i_2] = ((/* implicit */short) arr_14 [i_2 + 2] [i_5 + 1] [i_5 + 1] [i_5 + 3] [i_5] [i_5]);
                        arr_22 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_5 [i_2 - 3]))));
                        arr_23 [(unsigned short)9] [i_2 - 2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)19868)) == (arr_1 [i_2 + 2])));
                    }
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2596704974U)) ? (max((1296862972U), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)200))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    }
    var_21 = ((/* implicit */short) var_2);
}
