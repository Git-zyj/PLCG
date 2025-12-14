/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33436
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
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_4] [i_1] [i_4] [i_3] [i_4]))))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2]))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [0])) ? (((/* implicit */int) arr_13 [i_0] [(short)13] [i_2] [i_3] [i_4] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_4]))))) ? (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)13] [i_2] [i_0] [18ULL])) ? (arr_0 [(unsigned char)14] [i_4]) : (arr_0 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))));
                        }
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? ((~(((/* implicit */int) arr_3 [i_0 - 1])))) : (((/* implicit */int) ((signed char) arr_3 [i_0 - 1]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((short) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_1 [i_5])), (arr_5 [i_0])))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)165))))) : (((((/* implicit */_Bool) arr_7 [(short)19] [i_0 + 1])) ? (((unsigned int) arr_0 [i_1] [i_5])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5])) ? (((/* implicit */int) arr_14 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_3 [i_0 + 1])))))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 58730249)) ? (7U) : (((/* implicit */unsigned int) 511)))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_24 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((short) arr_1 [i_1]))) ? (arr_9 [i_0] [i_1] [i_2] [i_6]) : (((/* implicit */unsigned int) max((-428140093), (((/* implicit */int) (short)(-32767 - 1)))))))), (((/* implicit */unsigned int) arr_19 [1] [13] [i_2] [i_2] [1] [(unsigned char)12] [(unsigned char)12]))));
                            var_25 = ((/* implicit */unsigned char) min((-428140093), (1069547520)));
                        }
                    }
                } 
            } 
        } 
        var_26 = ((unsigned char) max((((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */int) (unsigned char)163)) : (-1930589030))), (min((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (arr_7 [i_0] [i_0])))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_27 = max((((unsigned char) arr_10 [i_7] [9] [i_7] [i_7])), (arr_10 [i_7] [i_7] [i_7] [i_7]));
        var_28 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min(((short)32512), ((short)-1)))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_7] [i_7]))) : (((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) arr_20 [i_7] [21] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_23 [i_7] [i_7])))))));
        var_29 |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) arr_21 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((((/* implicit */_Bool) arr_0 [i_7] [i_7])) ? (arr_6 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
    }
    var_30 &= ((/* implicit */short) var_0);
}
