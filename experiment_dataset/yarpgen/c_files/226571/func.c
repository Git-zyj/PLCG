/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226571
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))) ? ((-(((((((/* implicit */int) var_0)) + (2147483647))) >> (((var_1) - (1710267638U))))))) : (-166231379)));
    var_13 = var_9;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */int) min((2849996910634336819ULL), (((/* implicit */unsigned long long int) var_10))));
                                arr_15 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_12 [13] [i_1] [i_3] [i_1] [i_1] [i_2]))))))));
                            }
                        } 
                    } 
                    arr_16 [(short)11] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((7U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54443)))))) << (((((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned int) 1528073637)) : (3891410817U))) - (1528073637U))))))));
                    arr_17 [i_2] [(signed char)3] [7ULL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((((/* implicit */_Bool) var_5)) ? (((var_4) | (((/* implicit */int) arr_9 [(short)6] [(unsigned short)13] [(unsigned char)5] [14U] [i_1] [14U])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    var_14 &= ((/* implicit */long long int) var_0);
}
