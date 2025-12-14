/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28075
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
    var_12 |= var_0;
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */short) ((((((/* implicit */int) (short)-17)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)215)) - (207)))));
                var_15 |= ((/* implicit */_Bool) ((int) (signed char)1));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((short) (-(((/* implicit */int) var_7))))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) : (var_4)));
                }
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_14 [i_3] [13] [i_0] = ((/* implicit */short) ((unsigned short) ((min((((/* implicit */long long int) var_1)), (8045420423201763279LL))) * (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) var_8)))))))));
                    arr_15 [i_0] [(signed char)3] [i_3] = ((/* implicit */_Bool) (((((-(((/* implicit */int) (short)4095)))) < (((/* implicit */int) ((unsigned char) (unsigned short)14250))))) ? (((/* implicit */int) arr_6 [(unsigned char)4] [i_1] [(unsigned char)4])) : (((/* implicit */int) var_11))));
                    var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-4)) * (((/* implicit */int) arr_10 [i_3]))))), (((((/* implicit */_Bool) ((unsigned int) -715292409692555370LL))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (3315082729U)))) : ((-(1152921504590069760LL)))))));
                }
                var_19 = ((/* implicit */unsigned long long int) (unsigned char)53);
                /* LoopSeq 1 */
                for (unsigned char i_4 = 3; i_4 < 14; i_4 += 4) 
                {
                    var_20 = ((_Bool) min((arr_12 [i_4 - 1] [i_1]), (((/* implicit */unsigned char) var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [7LL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (var_4)))) ? ((+(((/* implicit */int) (unsigned char)34)))) : (((/* implicit */int) var_5))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (arr_7 [i_4 - 3])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27498))) : (954587914U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_4] [i_7] [i_8 + 2] [i_8] [i_0])) * (arr_4 [i_0] [i_1] [i_8 + 2]))) < (((unsigned long long int) (_Bool)1))));
                                arr_28 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)146)), (max((((/* implicit */unsigned short) (signed char)75)), ((unsigned short)2929)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (1073741823U))))) : (max((((/* implicit */unsigned long long int) (signed char)-3)), (((((/* implicit */unsigned long long int) -715292409692555380LL)) * (var_4)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_23 = max((((/* implicit */unsigned int) max((arr_16 [i_4 - 1] [i_4 - 3] [i_4 - 2] [i_4]), (((_Bool) -351581158))))), (min((((((/* implicit */unsigned int) ((/* implicit */int) (short)14232))) & (arr_25 [(unsigned char)4] [i_1] [i_4] [(unsigned char)4] [i_9]))), (((/* implicit */unsigned int) var_6)))));
                        arr_32 [i_0] [i_1] [i_4] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */int) arr_5 [i_9] [i_4 - 1] [6ULL]))))) ? (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 1322688641)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)90))))));
                        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                        arr_33 [i_4] [i_1] [i_1] [(unsigned short)7] [(unsigned short)7] [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) ((_Bool) (_Bool)1))) >> (((((var_5) ? (1723827883361654658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_1] [i_4] [3] [i_1] [i_4] [i_1]))))) - (30717ULL))))));
                    }
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (unsigned char)161);
}
