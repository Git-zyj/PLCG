/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227878
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((arr_0 [i_0 - 3] [i_0 - 1]) < (arr_0 [i_0 - 2] [i_0 - 2])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(arr_0 [(signed char)6] [(signed char)6]))) : (((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))) : (arr_0 [i_0] [(short)11])))))), (max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0 - 4])), (5774015478573536314ULL)))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */unsigned short) (short)8286))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) (short)10)))))) | (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (8242579300505840477ULL) : (((/* implicit */unsigned long long int) var_3)))))) : (((/* implicit */unsigned long long int) (~(((int) var_1)))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) min((((unsigned int) arr_3 [i_1])), (((/* implicit */unsigned int) arr_3 [i_1]))));
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)8286)), (max((((/* implicit */unsigned long long int) var_3)), (8242579300505840473ULL)))));
    }
    var_22 = ((/* implicit */unsigned char) ((signed char) var_10));
    var_23 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_6 [i_2])), (var_8)))) | (((((/* implicit */_Bool) (unsigned short)15872)) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) arr_11 [i_2]))))))) ? (((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 - 1])) ? (min((arr_7 [i_3]), (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2] [i_2])))) : (((arr_14 [i_2] [i_3] [i_4]) << (((((((/* implicit */int) var_1)) + (8615))) - (49))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) max((max((max((((/* implicit */unsigned long long int) 659172628U)), (var_11))), (((/* implicit */unsigned long long int) arr_6 [i_6])))), (((/* implicit */unsigned long long int) (-(max((arr_19 [i_2] [i_2] [i_2]), (((/* implicit */long long int) arr_9 [i_2] [i_3])))))))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_16 [i_2] [i_4 - 1] [(short)8] [i_6]), (arr_16 [i_2] [i_4 - 1] [i_4 + 1] [i_5])))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2])), (10204164773203711143ULL)))) ? (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (10204164773203711119ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (556222915U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : (((/* implicit */unsigned long long int) arr_0 [(unsigned char)2] [(unsigned char)2]))));
                                var_26 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) max((((long long int) arr_10 [i_2] [0U] [i_4 + 2])), (((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4 + 2])) ? (((/* implicit */long long int) arr_16 [i_2] [i_2] [i_4 + 1] [i_4 + 1])) : (arr_14 [i_2] [i_2] [i_4 + 1])))));
                }
            } 
        } 
    } 
}
