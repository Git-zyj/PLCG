/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207048
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
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((unsigned char) min((((/* implicit */long long int) min((arr_4 [i_0]), (arr_1 [i_1])))), (max((((/* implicit */long long int) arr_4 [i_0])), (395413603058977129LL)))));
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0])))) * ((((((-(2097136))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) -457030837))) - (51)))))));
                arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) | (var_1))) * (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_1 [i_0 + 1])))) : (max((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 285536412)), (-1LL)))) ? (((((/* implicit */int) var_12)) & (((var_15) & (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */short) var_9)), (var_6)))) : (((1835973690) | (((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    arr_15 [i_2] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_7 [i_2 - 1] [(short)6]));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (((-(arr_12 [i_6 - 2] [i_6 - 2] [i_6 + 1]))) | (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_14 [i_6 - 1]))))));
                                var_20 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_4 [i_6 - 1]))))));
                                var_21 = ((/* implicit */int) ((unsigned short) (~(((((/* implicit */_Bool) -2027702064)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))))));
                                arr_21 [i_6] [i_5] [12] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(-335696239)))) * (max((((/* implicit */long long int) (short)13589)), ((-9223372036854775807LL - 1LL))))));
                                arr_22 [i_6] [i_5] [i_3] [i_3] [i_2] = (+(((/* implicit */int) (unsigned char)96)));
                            }
                        } 
                    } 
                    arr_23 [i_3] = ((/* implicit */int) ((var_11) % (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (477470133) : (((/* implicit */int) var_0))))), (arr_0 [i_3])))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) (~((~(arr_0 [i_3])))));
                                arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_17 [i_2 + 1] [i_2 + 1] [i_7] [i_8] [i_8])), (var_14))) % (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            }
                        } 
                    } 
                    arr_31 [i_2] [i_3] = ((/* implicit */signed char) min((min((((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)119)) % (arr_12 [i_2] [i_2 - 1] [i_2 + 1])))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)16))))), (min((67108864LL), (((/* implicit */long long int) (unsigned char)96))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (-((~(var_14)))));
}
