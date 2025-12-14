/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34969
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
    var_16 = min((var_11), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3LL)) ? (-4LL) : (-4LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned short) arr_2 [1U]);
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 3]))) | (var_8)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_12 [i_0] [(short)1] [i_2] [i_3]);
                                arr_15 [i_0] = ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((arr_3 [i_1] [i_2] [i_0]) ? (arr_12 [i_0] [i_1] [i_2] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (max((arr_5 [i_0] [i_4 + 2]), (var_3)))));
                                var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [4LL] [i_0] [i_2])))))));
                                arr_16 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned short) max((-4LL), (max(((+(-3LL))), (-24LL)))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0] [i_1] [(unsigned char)7]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [1U] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_8))) : (((((/* implicit */_Bool) -11LL)) ? (((/* implicit */unsigned long long int) var_15)) : (var_8)))))));
                arr_17 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((25LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_2))))));
    var_22 = var_0;
    var_23 = var_6;
}
