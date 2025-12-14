/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209811
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_3] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 3])) ? (((/* implicit */int) arr_2 [i_3 + 2])) : (((/* implicit */int) arr_2 [i_3 - 2]))))));
                            arr_9 [i_0] [i_0] [(unsigned short)8] [i_2] [(short)0] [i_3] = ((/* implicit */_Bool) (((_Bool)1) ? (1879048192) : (((/* implicit */int) (unsigned short)59694))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])), (((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((arr_5 [i_0] [i_1]) ? ((+(var_3))) : (max((var_14), (((/* implicit */unsigned long long int) arr_7 [(short)11] [i_1] [i_1]))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_18 = arr_10 [i_0] [i_1] [i_1] [i_5];
                            arr_16 [(short)8] [(short)8] [(short)8] [i_0] &= ((/* implicit */_Bool) var_16);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (_Bool)1)))))));
}
