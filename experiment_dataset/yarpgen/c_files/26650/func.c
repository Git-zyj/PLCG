/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26650
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */int) (unsigned short)33555)) >= ((-2147483647 - 1)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [1ULL] [i_0 + 1] [i_0 + 2] [i_0 + 1])) ? (-520023396) : (arr_9 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) >= (((((arr_9 [i_0] [i_0 - 1] [i_0 + 2] [i_0 - 1]) + (2147483647))) >> (((520023416) - (520023397)))))));
                                arr_12 [i_1] [i_2] = (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (12545234771965517816ULL))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_2] [(unsigned char)9])) : (592512101))) : (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [(unsigned char)5] [i_0]))))));
                                var_18 = ((/* implicit */int) max((var_18), (((int) ((int) arr_2 [i_0] [i_0 + 1] [(unsigned short)3])))));
                                var_19 = ((((/* implicit */_Bool) 520023396)) ? (-1347077549) : (-520023396));
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (max((min((718202933), (((/* implicit */int) (unsigned short)41997)))), (((/* implicit */int) (unsigned short)16)))) : (((((/* implicit */_Bool) -827737224)) ? (292064995) : (((/* implicit */int) arr_0 [7]))))));
                    var_20 = ((/* implicit */int) max(((~(arr_3 [i_0] [i_1] [8]))), (((/* implicit */unsigned long long int) arr_2 [i_0] [12] [i_0]))));
                }
            } 
        } 
        var_21 += ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_0)) & (((/* implicit */int) (_Bool)1)))), (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [10] [i_0]))) : (((((/* implicit */_Bool) -346072292)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((((/* implicit */unsigned long long int) 620513525)), (arr_3 [i_0] [i_0] [5ULL])))))));
        var_22 = ((/* implicit */unsigned char) (+(-2040372273)));
    }
    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_23 = ((/* implicit */_Bool) var_4);
        var_24 = (~(min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_14 [15] [15])) : (var_12))), (((((/* implicit */_Bool) arr_16 [i_5])) ? (15) : (var_12))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_17 [i_6])) : (520023387)))) ? (((((/* implicit */_Bool) arr_17 [i_6])) ? (-718202933) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) arr_17 [i_6])))));
        var_26 |= ((/* implicit */int) arr_19 [i_6]);
    }
}
