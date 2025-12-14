/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192981
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_6))) || (((/* implicit */_Bool) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0])) * (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned short) ((arr_1 [i_1 + 4]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))));
                    arr_8 [i_0] [20U] [i_0] = ((/* implicit */unsigned char) (unsigned short)480);
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((var_12) != (((/* implicit */int) (short)-1)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)234)), ((unsigned short)124))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 8; i_7 += 4) 
                        {
                            {
                                arr_23 [(unsigned char)6] [i_3] [i_5] [i_6] [i_3] [7LL] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) ? (4294967295U) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) arr_18 [i_3])) : (((/* implicit */int) (unsigned char)64)))))))));
                                arr_24 [i_3] = max((((/* implicit */unsigned int) arr_16 [i_6 - 3] [i_6 - 1] [i_6 - 2] [i_6 - 2])), (((((/* implicit */_Bool) arr_4 [i_6 - 3])) ? (arr_4 [i_6 - 3]) : (arr_4 [i_6 + 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 8; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_6 [i_8 + 1]), (((/* implicit */unsigned int) arr_5 [i_8 - 1]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)14)), (var_0)))))))));
                                arr_29 [i_8] [i_3] [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_3] [i_3])) ? (arr_4 [20U]) : (2096640U)))) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1)))))), (min((arr_27 [(unsigned short)9] [i_3] [i_4] [i_4] [i_4] [i_3] [(_Bool)1]), (arr_27 [8U] [i_3] [(unsigned short)0] [i_4] [i_4] [i_3] [i_4])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 1835008))));
                    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_27 [i_5] [i_3] [i_4] [i_4] [i_3] [i_3] [i_3])) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [3] [i_4] [i_4] [(short)7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))), (((/* implicit */unsigned int) arr_15 [i_3] [i_4] [i_5] [i_5]))));
                    var_21 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)84));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) ((unsigned char) 4292870663U));
    var_23 = min((max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))))), (var_6));
}
