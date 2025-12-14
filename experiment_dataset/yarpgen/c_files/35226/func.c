/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35226
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
    var_11 *= ((/* implicit */signed char) var_1);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)11881)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned short)34933))))) ? ((+(398704095U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-22109)) * (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [(short)7] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2568871148U)) ? (((/* implicit */int) (short)13430)) : (((/* implicit */int) (short)26687)))), (((/* implicit */int) arr_3 [(signed char)2] [(short)10]))));
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1]))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_3] [(short)13] [(short)15] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [i_1] [i_1 - 4]) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((signed char) arr_8 [i_0] [i_1] [i_2])))));
                            var_14 &= arr_10 [i_2];
                            var_15 ^= ((/* implicit */short) arr_9 [i_0] [i_1 - 1] [i_0]);
                            arr_13 [i_0] [i_3] [(short)15] [i_2] [(short)15] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) ((signed char) arr_4 [i_2] [i_1] [i_0]))), (((((/* implicit */_Bool) (short)-7363)) ? (3896263201U) : (398704076U))))), (((/* implicit */unsigned int) (short)-7805))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) ^ (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */signed char) var_9);
}
