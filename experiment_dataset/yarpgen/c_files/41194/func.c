/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41194
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                            arr_9 [i_0] [i_1] [(signed char)0] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_2))))))));
                            var_11 |= ((/* implicit */short) min((((min((((/* implicit */unsigned long long int) 0LL)), (var_5))) - (((/* implicit */unsigned long long int) ((unsigned int) (signed char)113))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [(short)8] [(signed char)8] [i_1] [i_1] [(signed char)8] [i_3])) / (((/* implicit */int) arr_0 [i_3])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    for (short i_5 = 1; i_5 < 13; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_16 [i_5 + 2] [i_5 + 3] [i_6 + 2] [i_1] [i_5 + 3]), (arr_16 [i_5 + 2] [i_5 + 3] [i_6] [i_1] [i_6])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 - 1] [i_5] [i_1] [i_6])) ? (((/* implicit */int) arr_16 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_1] [i_1])) : (((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 2] [i_5] [i_1] [i_5 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 2] [i_5 + 1] [i_0] [i_5 + 1]))) * (var_0)))));
                                var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) - ((+(4167308623970579388ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_22 [i_1] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_7] [i_1] [i_7] [(unsigned char)4] [i_7])) ? (((var_5) | (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)892))))) >> ((((-(((/* implicit */int) arr_0 [i_0])))) + (9)))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_8])))))))));
                            arr_23 [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((unsigned int) arr_18 [i_0] [i_1] [i_7] [11LL])) / (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (var_1))))))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_8])) : (var_8)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_5))));
}
