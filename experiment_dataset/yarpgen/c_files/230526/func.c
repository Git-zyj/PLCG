/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230526
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
    var_11 |= ((/* implicit */int) var_8);
    var_12 = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) -1636242160)) ? (var_5) : (((/* implicit */unsigned int) 1636242159)))) >> (((((/* implicit */int) var_8)) - (9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_3] [1] [i_1] [(signed char)9] = ((/* implicit */int) arr_6 [6] [i_0] [i_0] [i_3]);
                                var_13 = max((((((/* implicit */_Bool) arr_2 [i_1 - 3])) ? (arr_7 [i_0]) : ((~(2042492226U))))), (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned int) 1806429294)) : (2762280826U))) : (((((/* implicit */_Bool) -1778591580)) ? (((/* implicit */unsigned int) arr_12 [i_4] [(unsigned char)10])) : (arr_4 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((int) var_3))))) || (((/* implicit */_Bool) ((1941600017) / (var_1))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), ((-(max(((~(arr_4 [(signed char)2] [i_1]))), (((/* implicit */unsigned int) ((arr_5 [i_0] [(signed char)10] [(short)6] [i_2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))))))))));
                }
                for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    var_16 = ((/* implicit */short) ((unsigned int) arr_3 [i_5]));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_15 [i_0 + 1] [i_1] [i_0 + 1] [(unsigned short)6]))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_5] [i_6] [i_0] [i_7] = ((/* implicit */unsigned int) (unsigned char)87);
                                arr_24 [i_0] [i_1] [i_1] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) (unsigned char)166)) ? (arr_4 [i_0] [(unsigned short)8]) : (((/* implicit */unsigned int) arr_11 [i_0] [i_7] [i_7] [i_7] [i_7]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)169), ((unsigned char)177))))) : (min((max((((/* implicit */long long int) arr_12 [i_1] [i_5])), (arr_17 [i_6] [i_6] [i_5]))), (((/* implicit */long long int) (-(arr_7 [i_0]))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned char i_10 = 4; i_10 < 10; i_10 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1 - 3])) ? (arr_0 [i_9] [i_1]) : (arr_0 [i_0 + 1] [i_10 - 1]))), ((+(arr_0 [i_8] [i_0 + 1])))));
                                var_19 = max((((/* implicit */unsigned int) (unsigned char)87)), (1388421933U));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_6))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */int) ((-4396893952361152072LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65513)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_7);
    var_23 = ((/* implicit */long long int) ((min(((-(0U))), (((/* implicit */unsigned int) ((int) (unsigned char)255))))) << (((/* implicit */int) (!(((/* implicit */_Bool) min((-248699685), (((/* implicit */int) var_0))))))))));
}
