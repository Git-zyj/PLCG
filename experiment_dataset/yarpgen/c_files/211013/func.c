/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211013
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) arr_5 [i_0])), (-1LL)))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))), (max((18404450031746923326ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1])))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1 - 1] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))))))))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] &= ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (short)5078)))))) >= (((((/* implicit */int) ((arr_2 [i_2 - 1]) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))))) % (((/* implicit */int) max((arr_6 [i_2] [i_1] [i_0]), (((/* implicit */unsigned char) arr_2 [i_0]))))))));
                }
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((min((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_1)))))));
                    arr_12 [i_3] [i_1] [i_3] = arr_5 [i_0];
                }
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    arr_15 [i_4] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1])), ((~(((((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4])) & (arr_4 [i_0])))))));
                    var_15 = ((/* implicit */unsigned char) arr_10 [i_4] [i_4] [i_4]);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) 
    {
        var_16 = arr_14 [i_5] [i_5] [i_5];
        arr_18 [i_5] [i_5] = ((/* implicit */_Bool) ((min((((var_3) >> (((((/* implicit */int) var_2)) - (89))))), (((/* implicit */unsigned long long int) max((arr_10 [(unsigned char)4] [i_5] [i_5]), (((/* implicit */signed char) var_10))))))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_5 + 1])))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1649447938U)) ? (((/* implicit */long long int) var_7)) : (var_4)))), ((~(var_3))))))))));
}
