/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47683
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
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) var_14);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (min((((/* implicit */unsigned int) var_7)), (var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)47)))) : (((var_3) << (((arr_1 [i_0]) - (3940340193771605997LL)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_22 = min((24U), (((/* implicit */unsigned int) min(((short)-17634), (((/* implicit */short) var_15))))));
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_8));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        arr_13 [i_0] = ((/* implicit */short) (-(3970171996U)));
                        arr_14 [i_1] [i_0] [i_1] [(unsigned char)12] [i_1] [i_1] = ((unsigned short) 2293411239U);
                    }
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_5]))))) ^ ((-(((/* implicit */int) var_15))))));
                        arr_18 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0 + 1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-15988)) ? (((/* implicit */int) (short)-16015)) : (((/* implicit */int) (short)-15988)))), (((/* implicit */int) arr_5 [i_0]))))), (min((((/* implicit */unsigned int) arr_7 [i_0] [i_0 - 1] [i_0])), (var_3)))));
                        arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_2] [i_5]);
                        arr_20 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_5])) + (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) max(((short)15988), (((/* implicit */short) arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_5 + 1] [i_5 + 1])))))));
                        var_24 ^= ((/* implicit */_Bool) arr_4 [12U] [i_5 + 1] [12U]);
                    }
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 3) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_6] = ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) % (min((((/* implicit */unsigned int) var_4)), (arr_16 [i_0] [i_2] [i_2] [(signed char)0] [i_0]))));
                        arr_26 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) min((2251799813685247LL), (((/* implicit */long long int) (short)16001))));
                    }
                }
            } 
        } 
    } 
    var_25 = min((var_12), (((/* implicit */unsigned int) var_0)));
    var_26 = var_10;
}
