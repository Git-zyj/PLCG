/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42738
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) | (var_8))))))));
                    arr_7 [i_0] = ((/* implicit */int) var_7);
                    var_11 = arr_2 [i_0];
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) ^ (((int) (~(((/* implicit */int) var_6)))))));
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) var_6)) - (53439)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        for (short i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            {
                arr_16 [i_4 + 2] [13] = var_4;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 1] [i_4 + 2]))))) ? (((((/* implicit */_Bool) max((var_4), (var_9)))) ? (((/* implicit */int) max((var_7), (var_7)))) : (((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) max((arr_20 [i_5] [i_4 + 2]), (arr_1 [i_4 - 2] [i_4 - 1])))));
                            var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)32768)) % (((/* implicit */int) (unsigned short)65524)))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_3 [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) var_4))))) < (((unsigned long long int) arr_15 [i_4 + 2] [i_4 - 2] [i_4 + 2]))));
                            arr_22 [i_5] [i_5] [9] [i_5] [(unsigned char)3] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_19 [8U] [8U] [8U] [6] [i_4 + 2]))), (max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_4 - 2])) : (((/* implicit */int) var_0))))));
            }
        } 
    } 
}
