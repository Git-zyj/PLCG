/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219236
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_5 [i_1])) > (((/* implicit */int) var_6))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((arr_10 [i_3] [i_0] [i_0] [i_0 - 1]) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)5)))) : ((-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)65531))))))));
                                arr_15 [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (max((2147483647), (((/* implicit */int) arr_1 [i_0])))) : (((arr_9 [3LL] [i_1] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))));
                                var_19 *= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (1347282831)))) / (var_14)))) ? ((-(((((/* implicit */unsigned long long int) 4294967286U)) * (65535ULL))))) : (min((((/* implicit */unsigned long long int) (-(1974067078U)))), (var_13))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = var_13;
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned char i_7 = 3; i_7 < 20; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2320900217U)) ? (((((/* implicit */int) arr_20 [i_5] [i_7 + 2] [i_5])) & (((/* implicit */int) var_11)))) : (((/* implicit */int) max((arr_20 [i_5] [i_7 + 2] [5ULL]), (arr_20 [i_5] [i_7 + 1] [i_5]))))));
                    arr_23 [i_5] [(unsigned short)14] [i_5] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)3]))) - ((+(3799199393311809061LL)))))) : (2743358601409795476ULL)));
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (739791039U) : (arr_21 [i_5] [i_6] [i_5])))), (((((/* implicit */_Bool) -50777614)) ? (var_13) : (((/* implicit */unsigned long long int) 1903738318))))))) ? (((/* implicit */unsigned long long int) ((arr_21 [i_7 + 2] [i_7 - 2] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((+((+(var_14)))))));
                    var_24 ^= ((/* implicit */long long int) (-(13661056548805497253ULL)));
                }
            } 
        } 
    } 
}
