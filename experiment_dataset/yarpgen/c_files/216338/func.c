/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216338
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) (unsigned char)16);
                                var_21 = ((/* implicit */short) (+(((/* implicit */int) (short)32761))));
                                var_22 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) max((((arr_3 [i_2 + 2] [i_0]) + (2147483647))), (((int) arr_4 [i_2] [i_0] [i_2]))))) : (((/* implicit */unsigned long long int) max((((arr_3 [i_2 + 2] [i_0]) - (2147483647))), (((int) arr_4 [i_2] [i_0] [i_2])))));
                                var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_6 [i_0 + 2] [i_1 + 2] [i_2]), (arr_3 [i_2] [(_Bool)1])))) ? (min((((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 2] [(signed char)12] [(short)0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)14]))) : (arr_2 [(signed char)8] [(signed char)8]))), (((/* implicit */long long int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 1] [i_3] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) min(((-(arr_12 [i_0] [i_2 - 1] [i_0] [(signed char)8] [i_6 - 1] [i_2 + 1]))), (min((arr_12 [i_0] [i_2 - 1] [i_0] [i_0] [i_2 - 1] [i_0 + 1]), (arr_12 [i_0] [i_2 - 1] [i_0] [i_5] [i_6] [i_0])))));
                                arr_17 [(_Bool)1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_5 [(unsigned char)10] [0] [i_2 + 1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [2U] [2U] [i_1] [i_5] [i_6] [14LL])))))));
                                var_25 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0]))))));
                                var_26 = ((/* implicit */int) (signed char)32);
                                var_27 = ((/* implicit */unsigned int) min((2145386496), (min((((/* implicit */int) (signed char)-24)), (2147483647)))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) ^ ((+(((/* implicit */int) arr_15 [(signed char)10] [i_1] [i_0 + 2] [(_Bool)1] [(signed char)10])))))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_1);
}
