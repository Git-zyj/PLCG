/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239523
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) arr_6 [i_0]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))) : (((((long long int) 9223372036854775807LL)) + (((long long int) -7533175411471110020LL))))));
                            arr_11 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? (min((arr_5 [i_0]), (arr_5 [i_1]))) : (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0]) : (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5]))))) << (((((((/* implicit */_Bool) arr_8 [i_5 + 1] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5]))) : (arr_10 [i_5 + 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5]))) - (67LL)))));
                            arr_18 [i_0] [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (arr_4 [i_1] [i_1]))))))) : (((/* implicit */int) arr_13 [i_0] [i_0]))));
                            arr_19 [i_5] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31597))) : ((-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_4]))) - (arr_16 [i_0] [i_0] [i_5] [i_5])))) ? (((((/* implicit */long long int) -832858490)) - (arr_1 [i_0] [i_0]))) : (((-9223372036854775786LL) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_5]))))))) : ((~((~(arr_5 [i_0])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) arr_6 [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_10), (((/* implicit */unsigned long long int) var_6)))) & (var_10)))) || (((((/* implicit */int) (short)25173)) != (((/* implicit */int) var_4))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32764))) : (max((((/* implicit */unsigned long long int) var_7)), (var_10)))));
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (9223372036854775807LL) : (((/* implicit */long long int) (+(((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))))))));
}
