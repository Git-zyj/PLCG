/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24275
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0 + 1]))));
        var_19 = ((/* implicit */long long int) var_8);
    }
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_1)))))) ? (((unsigned long long int) max((var_10), (((/* implicit */unsigned short) arr_1 [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1])) : ((~(((/* implicit */int) arr_3 [i_1]))))))))))));
        var_21 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 2]))))), (arr_2 [i_1])));
    }
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_22 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_2])) ? (var_4) : (((/* implicit */long long int) arr_0 [i_2] [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
        arr_6 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_2]))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (arr_0 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))), (((/* implicit */long long int) arr_1 [i_2]))));
        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (long long int i_6 = 4; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_18 [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6 + 3] [i_6 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_3]))) : (arr_0 [i_5] [i_2]))))), (((/* implicit */unsigned int) arr_9 [i_2] [i_2]))));
                                var_24 = ((/* implicit */unsigned int) var_9);
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_11)))))) : (((((/* implicit */long long int) var_12)) & (var_4))))))))));
                                arr_19 [i_6] [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */short) ((unsigned long long int) ((int) max((((/* implicit */long long int) var_16)), (var_4)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_26 [i_8] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]))))) ? (((((/* implicit */_Bool) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8])) ? (((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8])) : (((/* implicit */int) arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8])))) : (((/* implicit */int) var_7))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) var_2)))));
                                var_27 = ((/* implicit */short) arr_25 [i_8] [i_3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                arr_32 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_9] [i_4] [i_3] [i_3] [i_3] [i_2])) ? (((/* implicit */int) arr_15 [i_10] [i_4])) : (((/* implicit */int) arr_11 [i_9]))))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)33482))))), (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) var_12)) : (var_9)))))));
                                var_28 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_12 [i_9 + 2])) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) ((signed char) (unsigned short)0)))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_25 [i_4] [i_2]))))) ? ((-(((/* implicit */int) var_15)))) : ((+(((/* implicit */int) arr_20 [i_4] [i_4] [i_3] [i_3] [i_2]))))));
                }
            } 
        } 
    }
}
