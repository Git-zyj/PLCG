/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221800
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
    var_17 = var_1;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1])) : (arr_4 [i_0] [i_0] [i_1])));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_18 [i_4] [(short)10] [i_2] [i_0] [i_4 + 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) arr_17 [(_Bool)1] [i_0] [i_3 + 1])));
                                var_18 *= arr_6 [i_0] [i_1] [i_2] [i_3];
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_3] [i_4 + 1] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_14 [i_3 - 1] [i_1] [15] [i_4 + 1] [i_1])))) : (((arr_6 [i_3 - 2] [i_4 + 2] [i_4] [i_4 + 1]) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_4 + 2] [i_0] [i_4 + 2])))));
                                var_20 = ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_0] [i_2] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                var_21 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (-(arr_3 [i_0] [i_0])))))));
                arr_20 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned short) arr_26 [i_5]);
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_22 [i_5] [2ULL]))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((short) var_7))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_7)))))))));
}
