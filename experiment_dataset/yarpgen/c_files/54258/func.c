/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54258
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) min((((((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), (var_0)))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44906))) ^ (31U))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) + (arr_4 [i_1] [i_0] [13U]))) < (((/* implicit */unsigned long long int) 31U))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 8388607ULL)) || (((/* implicit */_Bool) 4294967253U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20620))) : (38U)));
                    var_20 = ((/* implicit */_Bool) ((unsigned char) max((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)20620))), (((/* implicit */unsigned short) max((((/* implicit */short) arr_5 [i_2] [i_1])), (arr_2 [i_0] [10ULL])))))));
                    var_21 += ((/* implicit */signed char) min((((arr_3 [i_1]) | (arr_3 [i_1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                }
                for (short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (16383ULL))))))) >> (((((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1] [i_1]))) - (((/* implicit */int) arr_11 [i_3] [i_0] [i_0] [i_0 + 1])))) - (6204)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (unsigned short)65281);
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(arr_3 [i_0 + 1])));
                        arr_18 [i_0] [10] [(unsigned short)6] [i_0] = ((/* implicit */unsigned long long int) var_17);
                    }
                }
                for (short i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    arr_21 [i_5] [i_0] [i_0] = ((signed char) var_14);
                    arr_22 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) arr_14 [i_0 + 1] [i_0 + 1] [i_1] [i_5]);
                    var_23 -= ((/* implicit */short) min((((((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])) % (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])))), (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))));
                    var_24 += ((/* implicit */unsigned long long int) arr_16 [i_0 + 1] [i_0 + 1] [i_0]);
                }
                for (short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    var_25 *= ((/* implicit */unsigned char) var_10);
                    var_26 *= ((/* implicit */unsigned int) arr_3 [i_0]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        for (signed char i_8 = 2; i_8 < 21; i_8 += 3) 
        {
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_14))));
                arr_30 [i_7] [i_7] [(unsigned short)21] = ((/* implicit */unsigned char) min(((unsigned short)14541), (((/* implicit */unsigned short) ((arr_26 [i_7]) == (arr_26 [i_8 - 2]))))));
                var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_8 - 2]))) & (var_4))) : (((/* implicit */long long int) arr_26 [i_8]))))) : (max((min((((/* implicit */unsigned long long int) (unsigned short)44915)), (var_7))), (((/* implicit */unsigned long long int) (~(arr_26 [i_8]))))))));
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)12542)) / (((/* implicit */int) arr_27 [i_8 - 2])))), (((/* implicit */int) arr_27 [i_7])))))));
                var_30 += ((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_8 - 2])), (((((/* implicit */_Bool) arr_27 [i_8 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_8 - 2] [i_8 - 2]))) : (var_12)))));
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) min((var_7), (((/* implicit */unsigned long long int) var_1))));
}
