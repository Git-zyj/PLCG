/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204001
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
    for (long long int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1] [2ULL])) ? (((/* implicit */int) arr_2 [i_1] [i_0 - 1])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [(unsigned char)8] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_12))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) > (min((((/* implicit */long long int) var_1)), (arr_3 [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned long long int) (+(arr_3 [i_1 - 1] [i_0 - 3] [i_0])))) : (min((((((/* implicit */_Bool) arr_5 [(short)3] [6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_3]))), (var_5))));
                        var_14 -= ((/* implicit */short) ((min((arr_8 [6U] [6U] [i_0 - 2] [i_2]), (arr_8 [i_0] [i_0] [i_0 + 1] [i_3]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6745953787600465966ULL)) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_1 - 1])) && (((/* implicit */_Bool) (short)1020))))))))));
                    }
                }
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0 - 4] [i_0] [i_0 + 1])) + (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_4 [i_0 - 4] [i_0 - 2] [i_0 + 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_7);
    var_17 = ((int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_6)))) ? (((var_0) >> (((var_2) - (50717169))))) : (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_18 ^= ((/* implicit */signed char) ((int) var_0));
                /* LoopNest 3 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (signed char i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) arr_17 [i_4] [i_4] [i_4] [i_7])), (1382614133U))) / (var_1)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)2048)), (max((((/* implicit */unsigned int) arr_9 [i_7] [i_7])), (arr_16 [i_7] [i_5] [i_5] [i_4])))))) : (((unsigned long long int) arr_18 [i_4] [i_8] [i_8 - 1] [i_4] [i_4]))));
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_12))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_12 [i_4] [i_5] [i_5]))))));
            }
        } 
    } 
}
