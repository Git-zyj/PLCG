/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224069
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))) : (((((/* implicit */_Bool) var_17)) ? (-6936958252821695227LL) : (var_17)))))) ? (var_8) : (((/* implicit */unsigned int) var_19))));
    var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 6936958252821695236LL)) ? (2807275012602406367LL) : (((/* implicit */long long int) var_19)))), (4387797749579297820LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_1] [i_1] [i_1] [(_Bool)1] [(_Bool)1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((arr_2 [i_2]), (arr_10 [4U] [i_1] [i_3] [i_4]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))))) : (min((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_4] [i_2])) : (var_10))), (((/* implicit */unsigned long long int) arr_7 [i_4]))))));
                                var_23 = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) * (((/* implicit */unsigned long long int) (-(-2807275012602406363LL))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_2 [i_0]))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 991977072U)) ? (var_6) : ((-2147483647 - 1))))))) ? ((+(((9223372036854775807LL) << (((8657146242689305568ULL) - (8657146242689305568ULL))))))) : (6936958252821695241LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [9LL] [i_1] [i_1] [i_5 - 2])) ? (((/* implicit */unsigned long long int) (-(arr_14 [i_0] [i_1] [i_1] [(short)2])))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [8U] [i_5 - 3] [(signed char)1] [i_1] [i_1])) : (var_1))))), (((/* implicit */unsigned long long int) ((unsigned char) var_10)))));
                                var_27 = ((/* implicit */long long int) ((((unsigned long long int) arr_16 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 1])) - (((((/* implicit */_Bool) ((signed char) 1591496190U))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)85))))) : (((unsigned long long int) arr_7 [(signed char)8]))))));
                                arr_19 [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 2264299652034177312LL)) / (5230577868972288586ULL))), (((unsigned long long int) 3302990198U))));
                                var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((0U), (((/* implicit */unsigned int) (unsigned char)7))));
                }
            } 
        } 
    } 
}
