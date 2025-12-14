/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247800
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((8989607068696576ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (min((arr_5 [i_0] [i_1]), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))))));
                    arr_9 [i_0] [10ULL] [i_0] = ((/* implicit */_Bool) var_0);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [8U] [i_3 - 1] [8U] [i_2])) ? (arr_10 [i_0] [i_1] [i_3 - 1] [i_3] [i_2]) : (arr_10 [i_0] [(unsigned char)8] [i_3 - 1] [i_2] [i_0])))) & ((~(var_7)))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4))) : (((/* implicit */unsigned long long int) arr_2 [i_3 - 1])))) & (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967292U)), ((((_Bool)1) ? (1099511627775LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_4] [i_0] = ((/* implicit */_Bool) ((arr_11 [i_0] [8LL] [i_0] [i_4]) ? ((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_4])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_11 [i_4] [i_0] [i_0] [6ULL]) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_4])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_0]))))))));
                        var_22 = ((var_16) & (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_11) : (arr_0 [i_2] [i_2]))));
                        arr_16 [(_Bool)1] [i_4] [i_2] [i_1] [i_1] [(unsigned char)11] = ((/* implicit */unsigned int) min((arr_1 [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_1] [i_4] [i_2])));
                    }
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_11)))))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    var_24 = ((/* implicit */unsigned int) max((var_14), (var_14)));
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned int i_6 = 4; i_6 < 18; i_6 += 4) 
        {
            {
                var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)))), (arr_17 [i_5] [i_6 - 4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [11LL] [i_6 + 3] [i_6])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) arr_21 [i_5] [i_6] [i_5])) : (arr_17 [i_5] [i_6]))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8989607068696584ULL))))), (var_1))));
                /* LoopNest 3 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 21; i_9 += 3) 
                        {
                            {
                                arr_32 [i_9] [i_6] [i_6] = ((/* implicit */long long int) (!(((var_4) == (arr_20 [i_6 - 4] [i_6 - 1] [i_6 - 1])))));
                                var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_5])) ? (arr_29 [i_5]) : (((/* implicit */int) arr_25 [3U]))))) : (max((var_17), (((/* implicit */unsigned long long int) arr_23 [(_Bool)1] [i_6] [(unsigned short)2]))))))) ? (((((/* implicit */_Bool) arr_21 [i_5] [i_5] [(_Bool)1])) ? (((arr_19 [i_6] [i_8] [i_9 - 1]) ? (arr_24 [i_5] [4U] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (var_13))) : (arr_20 [i_6] [i_8] [i_6]));
                                var_27 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_26 [i_6 - 4] [i_7] [i_7] [i_9] [4] [i_9]) || (arr_26 [i_6 - 4] [i_6 - 4] [i_6] [(_Bool)1] [i_6 - 4] [(_Bool)1])))), (((((/* implicit */_Bool) arr_28 [i_6 + 3] [i_6 - 4] [i_8 - 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6 - 1] [i_6 - 2] [i_8 - 1])))))));
                                arr_33 [i_8] [i_9] [15U] [13LL] [(unsigned char)19] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_31 [i_6] [i_7] [i_6])), (((((/* implicit */_Bool) 8989607068696584ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522))) : (18437754466640855031ULL)))));
                            }
                        } 
                    } 
                } 
                arr_34 [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_20 [i_6 - 2] [i_6 + 4] [i_6 + 1])))) ? (((((/* implicit */_Bool) arr_20 [i_6 + 1] [i_6 + 2] [i_6 - 4])) ? (arr_20 [i_6 - 2] [i_6 - 1] [i_6 + 3]) : (arr_20 [i_6 - 2] [i_6 - 1] [i_6 - 1]))) : (max((arr_20 [i_6 + 1] [i_6 - 2] [i_6 + 2]), (arr_20 [i_6 - 4] [i_6 - 2] [i_6 - 4])))));
            }
        } 
    } 
}
